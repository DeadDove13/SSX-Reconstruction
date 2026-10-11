/* Ghidra pseudocode. PS2 address: 0017e3c0. Not validated source. */

undefined4 FUN_0017e3c0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0xbd0) == 3) {
    uVar1 = 99;
  }
  else if (*(int *)(iVar3 + 0xbc4) == 0) {
    if (*(int *)(iVar3 + 0xbb0) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      lVar2 = FUN_0016f348(param_1,*(undefined4 *)(*(int *)(iVar3 + 0xb3c) + 0x46c));
      if (lVar2 == 0x174) {
        uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0xb90) + 0x338);
      }
      else {
        uVar1 = 0xffffffff;
        if (lVar2 == 0x175) {
          uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0xb90) + 0x33c);
        }
      }
    }
  }
  else {
    uVar1 = *(undefined4 *)(iVar3 + 0xbac);
  }
  return uVar1;
}

