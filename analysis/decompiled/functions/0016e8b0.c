/* Ghidra pseudocode. PS2 address: 0016e8b0. Not validated source. */

void FUN_0016e8b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_0016e858();
  iVar2 = FUN_0016dd88(param_1,param_2);
  *(undefined4 *)(iVar2 + 0x140) = 4;
  uVar1 = FUN_0016dd88(param_1,param_2);
  FUN_00168f68(0x3f800000,0xbf800000,0x40800000,uVar1);
  return;
}

