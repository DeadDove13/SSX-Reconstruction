/* Ghidra pseudocode. PS2 address: 0014be28. Not validated source. */

void FUN_0014be28(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_2 + 0x220);
  FUN_001eacb0(param_3);
  if (*(int *)(iVar1 + 0x344) == 2) {
    uVar2 = 0x37;
  }
  else {
    uVar2 = 0x34;
  }
  FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),uVar2,0,5);
  return;
}

