/* Ghidra pseudocode. PS2 address: 00183c98. Not validated source. */

void FUN_00183c98(undefined8 param_1)

{
  int iVar1;
  
  FUN_0018ac08(0x2b34b0);
  FUN_001eaf88();
  FUN_0023a2f8(DAT_002c4db0,100);
  FUN_0023a2f8(DAT_002c4db4,100);
  FUN_0023a2f8(DAT_002c4db8,100);
  FUN_0023a2f8(DAT_002c4dc4,100);
  FUN_0023a2f8(DAT_002c4dc0,100);
  FUN_0023a2f8(DAT_002c4dbc,100);
  FUN_00265040(3);
  RemoveIntcHandler(3,*(undefined4 *)param_1);
  FUN_001838b0(0x2c80c0);
  FUN_00184180(param_1);
  FUN_001823b8(0x285290);
  FUN_00146c20(0x2795b8);
  FUN_00146b60(0x2795b8,0);
  iVar1 = ((undefined4 *)param_1)[0x1b6];
  if (iVar1 != 0) {
    FUN_001d64b0(iVar1,3);
    return;
  }
  return;
}

