/* Ghidra pseudocode. PS2 address: 00169e50. Not validated source. */

void FUN_00169e50(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00169c98();
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x10) != 0) {
    iVar2 = *(int *)(iVar3 + 0x10);
    do {
      uVar1 = DAT_002913c4;
      FUN_0011ed18(0x295e90,*(undefined4 *)(iVar2 + 0xc));
      FUN_001695f0(**(undefined4 **)(iVar3 + 0x10),param_2);
      FUN_0011ed18(0x295e90,uVar1);
      FUN_00169cb8(param_1);
      iVar2 = *(int *)(iVar3 + 0x10);
    } while (iVar2 != 0);
  }
  return;
}

