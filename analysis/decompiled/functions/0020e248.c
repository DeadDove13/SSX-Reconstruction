/* Ghidra pseudocode. PS2 address: 0020e248. Not validated source. */

void FUN_0020e248(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(*(int *)(iVar3 + 0xa0) + 8) == 0) {
    iVar2 = *(int *)(iVar3 + 0xa0);
  }
  else {
    uVar1 = FUN_0020dac0();
    *(undefined4 *)(*(int *)(iVar3 + 0xa0) + 0x28) = uVar1;
    iVar2 = *(int *)(iVar3 + 0xa0);
  }
  FUN_0020e2a8(param_1,*(undefined4 *)(iVar2 + 0xc),iVar3 + 0x90,0,0);
  return;
}

