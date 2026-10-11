/* Ghidra pseudocode. PS2 address: 002113b8. Not validated source. */

void FUN_002113b8(undefined8 param_1,int param_2)

{
  int iVar1;
  
  FUN_00211c98();
  iVar1 = (int)param_1 + 0xf6;
  FUN_0023bbd0(iVar1,0,0x20);
  FUN_0025bbe4(iVar1,param_2 * 0x6c + (int)param_1 + 0x178);
  FUN_00211470(param_1,0x16);
  return;
}

