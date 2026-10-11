/* Ghidra pseudocode. PS2 address: 00107af0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00107b34) */

void FUN_00107af0(undefined8 param_1,long param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x6cf4);
  if (*(int *)(*(int *)(iVar3 + 0x394) + 0x28) != 0) {
    *(undefined4 *)(iVar3 + 0x144) = 1;
    fVar2 = DAT_002c116c;
    *(undefined4 *)(iVar1 + 0xc) = 1;
    *(float *)(iVar1 + 0x18) = DAT_002c1170 - fVar2 * 1.0;
  }
  if (param_2 == 0) {
    FUN_0014cd18(*(undefined4 *)(iVar3 + 0x6cf4),0xe,0,5);
  }
  else {
    FUN_0014cd18(*(undefined4 *)(iVar3 + 0x6cf4),0,0,5);
    *(undefined4 *)(iVar3 + 0x1d0) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x1c8) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x1cc) = 0;
    uVar4 = FUN_0010af30(param_1);
    *(undefined4 *)(iVar3 + 0x150) = uVar4;
  }
  if (*(int *)(iVar3 + 0x6cf8) == 0) {
    return;
  }
  FUN_001512f0();
  return;
}

