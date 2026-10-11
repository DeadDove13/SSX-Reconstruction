/* Ghidra pseudocode. PS2 address: 001328a8. Not validated source. */

void FUN_001328a8(undefined8 param_1,uint param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  puVar2 = (uint *)FUN_00132a48(param_1,*(undefined4 *)(*param_3 + 0x80),
                                *(undefined4 *)(*(int *)param_3[3] + 0x80));
  uVar4 = *puVar2;
  uVar3 = (1 << (param_2 & 0x1f) ^ uVar4) & 7;
  *puVar2 = uVar4 & 0xfffffff8 | uVar3;
  if ((uVar4 & 7) == 7) {
    uVar5 = FUN_00131d38((int)param_1 + 0x10,uVar4 >> 3 & 0x1fff);
    FUN_00132e08(*(undefined4 *)uVar5,uVar5);
    FUN_00132e08(((undefined4 *)uVar5)[1],uVar5);
    FUN_001323f8(param_1,uVar5);
    return;
  }
  if (uVar3 == 7) {
    uVar5 = FUN_00132430(param_1);
    uVar4 = FUN_00131d58((int)param_1 + 0x10,uVar5);
    *puVar2 = *puVar2 & 0xffff0007 | (uVar4 & 0x1fff) << 3;
    piVar1 = (int *)param_3[3];
    *(int *)uVar5 = *param_3;
    ((int *)uVar5)[1] = *piVar1;
    FUN_00132d78(*param_3,uVar5);
    FUN_00132d78(*(undefined4 *)param_3[3],uVar5);
    return;
  }
  return;
}

