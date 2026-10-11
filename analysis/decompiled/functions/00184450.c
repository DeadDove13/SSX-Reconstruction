/* Ghidra pseudocode. PS2 address: 00184450. Not validated source. */

void FUN_00184450(undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x80;
  FUN_00213078(iVar1);
  FUN_001a04d8(param_1);
  FUN_00168730(0x295e90);
  FUN_0019aa30((int)param_1 + 0xd00,2);
  FUN_00210d08(iVar1,2);
  FUN_001a0410(param_1,2);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

