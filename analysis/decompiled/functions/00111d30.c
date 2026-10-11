/* Ghidra pseudocode. PS2 address: 00111d30. Not validated source. */

void FUN_00111d30(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if (((*(int *)(iVar5 + 0x170) == 0) && (0.5 < *(float *)(iVar5 + 0x1c))) &&
     (iVar1 = *(int *)(iVar5 + 0x6cf4), *(int *)(iVar1 + 8) == 0x34)) {
    bVar2 = false;
    if (*(int *)(iVar5 + 0x8470) == 2) {
LAB_00111dc8:
      bVar2 = true;
    }
    else {
      for (iVar4 = 1; iVar4 < 10; iVar4 = iVar4 + 1) {
        if (*(int *)(iVar4 * 0x10 + iVar5 + 0x8470) == 2) goto LAB_00111dc8;
      }
    }
    if (bVar2) {
      *(undefined4 *)(iVar1 + 0x14) = 0x1ffe;
      FUN_0014cd18(iVar1,0x44,0,5);
      uVar3 = DAT_002c56e8;
      *(undefined4 *)(*(int *)(iVar5 + 0x6cf4) + 0x14) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x170) = 4;
      FUN_001f26a0(uVar3,param_1);
    }
  }
  return;
}

