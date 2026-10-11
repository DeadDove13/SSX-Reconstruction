/* Ghidra pseudocode. PS2 address: 002112f8. Not validated source. */

void FUN_002112f8(undefined8 param_1,int param_2)

{
  int iVar1;
  
  FUN_00211c98();
  iVar1 = (int)param_1 + 0xf6;
  FUN_0023bbd0(iVar1,0,0x20);
  FUN_0025b630(iVar1,0x2bd4d0,0x2bd778,(int)param_1 + 0xae,param_2 + 1);
  FUN_00211470(param_1,0x11);
  return;
}

