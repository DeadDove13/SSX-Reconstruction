/* Ghidra pseudocode. PS2 address: 0010a1b8. Not validated source. */

void FUN_0010a1b8(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x348) < 0) {
    FUN_002023f0(DAT_002c56e8,param_1);
    iVar2 = DAT_0027ba88;
    iVar4 = (int)(*(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x14) * 100.0);
    bVar1 = DAT_0027ba88 == 3;
    *(int *)(iVar3 + 0x348) = iVar4;
    if (((bVar1) || (iVar2 == 5)) && (iVar4 == 0)) {
      *(undefined4 *)(iVar3 + 0x837c) = 1;
    }
    if (((-1 < *(int *)(iVar3 + 0x24)) && (*(int *)(DAT_002859e4 + 0x2c) == 0)) &&
       ((*(int *)(DAT_002859e4 + 0x38) == 0 ||
        (iVar2 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18), iVar2 == 0 || 9 < iVar2)))) {
      FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),7,*(undefined4 *)(iVar3 + 0x24));
      return;
    }
  }
  return;
}

