/* Ghidra pseudocode. PS2 address: 002272d0. Not validated source. */

int FUN_002272d0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0022e520(param_2);
  iVar2 = FUN_0023d690(param_1 + 1,1,1);
  return param_1 * 0x2c + 0xbc + iVar1 + iVar2;
}

