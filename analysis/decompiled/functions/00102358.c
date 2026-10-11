/* Ghidra pseudocode. PS2 address: 00102358. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00102454) */

void FUN_00102358(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = (int)param_2;
  fVar4 = *(float *)(iVar3 + 0x14) + 2.0;
  *(float *)(iVar3 + 0x14) = fVar4;
  if (0.0 <= fVar4) {
    (**(code **)(*(int *)(iVar3 + 8) + 0x54))(iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0x50),4);
    lVar2 = FUN_00101418(param_2);
    if (lVar2 != 0) {
      FUN_002229e8(0x299cc8,1);
      (**(code **)(*(int *)(iVar3 + 8) + 0x6c))(iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0x68));
    }
    if ((*(int *)(DAT_002859e4 + 0x38) == 0) ||
       (iVar3 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18), iVar3 == 0 || 9 < iVar3)) {
      FUN_001fcdf0(DAT_002c56e8);
      return;
    }
  }
  else {
    if (*(int *)(DAT_002859e4 + 0x38) == 0) {
      fVar4 = *(float *)(iVar3 + 0x14);
    }
    else {
      iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18);
      if (iVar1 != 0 && iVar1 < 10) {
        return;
      }
      fVar4 = *(float *)(iVar3 + 0x14);
    }
    if ((int)fVar4 % 0x3c == 0) {
      FUN_001feb30(DAT_002c56e8);
      return;
    }
  }
  return;
}

