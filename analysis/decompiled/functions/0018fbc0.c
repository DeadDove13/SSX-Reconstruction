/* Ghidra pseudocode. PS2 address: 0018fbc0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0018fc58) */

long FUN_0018fbc0(undefined8 param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  
  lVar2 = FUN_0018dc18();
  lVar3 = FUN_0018dd28(param_1);
  if ((lVar3 == 0) && (lVar2 == 0)) {
    lVar3 = FUN_0018dda0(param_1,8);
    uVar5 = 0xffffffff;
    if (lVar3 == 0) {
      lVar3 = FUN_0018dda0(param_1,4);
      uVar5 = (uint)(lVar3 != 0);
    }
    iVar6 = (int)param_1;
    if (uVar5 == *(uint *)(iVar6 + 0x24)) {
      *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
    }
    else {
      *(undefined4 *)(iVar6 + 0x20) = 0;
      *(undefined4 *)(iVar6 + 0x28) = 0x3f800000;
      *(uint *)(iVar6 + 0x24) = uVar5;
    }
    if (uVar5 != 0) {
      piVar1 = *(int **)(iVar6 + 0x14);
      fVar7 = *(float *)(iVar6 + 0x28) +
              (float)((*(int *)(iVar6 + 0x20) * *(int *)(iVar6 + 0x20)) / 0x120) * DAT_002c2a0c;
      iVar8 = (int)fVar7;
      iVar4 = *piVar1 + uVar5 * iVar8;
      *piVar1 = iVar4;
      *(float *)(iVar6 + 0x28) = fVar7 - (float)iVar8;
      if (iVar4 < *(int *)(iVar6 + 0x18)) {
        *piVar1 = *(int *)(iVar6 + 0x18);
      }
      if (*(int *)(iVar6 + 0x1c) < *piVar1) {
        *piVar1 = *(int *)(iVar6 + 0x1c);
      }
      if (*(int **)(iVar6 + 0x2c) == (int *)0x0) {
        iVar6 = *(int *)(iVar6 + 4);
      }
      else {
        **(int **)(iVar6 + 0x2c) = *piVar1;
        iVar6 = *(int *)(iVar6 + 4);
      }
      (**(code **)(*(int *)(iVar6 + 0x114) + 0x24))
                (iVar6 + *(short *)(*(int *)(iVar6 + 0x114) + 0x20),param_1);
    }
  }
  return lVar2;
}

