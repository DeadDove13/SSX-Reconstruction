/* Ghidra pseudocode. PS2 address: 001e0ae8. Not validated source. */

undefined4 FUN_001e0ae8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar3 = param_2 * 0xf0 + iVar4;
  if (*(int *)(iVar4 + 0xc) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (*(int *)(iVar3 + 0x10) != 0) {
      if (*(int *)(iVar3 + 0x18) != 0) {
        iVar3 = *(int *)(iVar3 + 0x14);
        while (iVar3 != 0) {
          iVar1 = *(int *)(iVar3 + 4);
          FUN_001e09b0(param_1,iVar3);
          iVar3 = iVar1;
        }
        iVar3 = param_2 * 0xf0 + iVar4;
        *(undefined4 *)(iVar3 + 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x18) = 0;
      }
      *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + -1;
      *(undefined4 *)(param_2 * 0xf0 + iVar4 + 0x10) = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}

