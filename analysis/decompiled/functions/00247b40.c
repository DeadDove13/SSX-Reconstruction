/* Ghidra pseudocode. PS2 address: 00247b40. Not validated source. */

bool FUN_00247b40(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = DAT_002a523c != 0;
  if (bVar1) {
    ChangeThreadPriority(DAT_002a523c,param_1);
  }
  else {
    uVar2 = GetThreadId();
    DAT_002d1f00 = (undefined4)uVar2;
    ReferThreadStatus(uVar2,0x2d1f08);
    DAT_002d1f48 = &_mips_gp0_value;
    DAT_002d1f3c = FUN_00247a90;
    DAT_002d1f4c = (undefined4)param_1;
    DAT_002d1f40 = param_2;
    DAT_002d1f44 = param_3;
    uVar2 = CreateThread(0x2d1f38);
    DAT_002a523c = (int)uVar2;
    _StartThread(uVar2,0);
  }
  return !bVar1;
}

