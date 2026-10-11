/* Ghidra pseudocode. PS2 address: 00247760. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00247760(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  
  DAT_002d1e84 = (undefined4)param_1;
  DAT_002d1e80 = 0xb;
  DAT_002d1e88 = (undefined4)param_2;
  _DAT_002d1e8c = *param_3;
  DAT_002d1e94 = *(undefined4 *)(param_3 + 1);
  lVar2 = FUN_00267268(0x2d1800,1,0,0x2d1e80,0x80,0x2d1e80,0x80,0);
  if (lVar2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_002d1e9c;
    if (DAT_002d1e9c == 1) {
      FUN_00246fc0(param_1,param_2,2);
      iVar1 = DAT_002d1e9c;
    }
  }
  return iVar1;
}

