/* Ghidra pseudocode. PS2 address: 0020ed40. Not validated source. */

bool FUN_0020ed40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  FUN_0020dcf8(*(int *)(iVar3 + 0xa0) != 0);
  if (*(int *)(*(int *)(iVar3 + 0xa0) + 8) == 0) {
    iVar2 = *(int *)(iVar3 + 0xa0);
  }
  else {
    uVar1 = FUN_0020dac0(param_1);
    *(undefined4 *)(*(int *)(iVar3 + 0xa0) + 0x28) = uVar1;
    iVar2 = *(int *)(iVar3 + 0xa0);
  }
  FUN_0020dcf8(*(int *)(iVar2 + 0x28) != 0);
  FUN_0020fe40(param_1,param_2);
  *(undefined4 *)(iVar3 + 0xa4) = 0;
  FUN_0020f620(param_1,param_2,iVar3 + 0x90,0,0,param_3,param_4);
  return *(float *)(iVar3 + 0xa4) < 0.0;
}

