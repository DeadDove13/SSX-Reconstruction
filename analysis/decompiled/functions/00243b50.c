/* Ghidra pseudocode. PS2 address: 00243b50. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00243b50(void)

{
  undefined8 uVar1;
  undefined4 in_vc12;
  
  REG_VIF1_FBRST = 1;
  REG_VIF1_ERR = 2;
  SYNC(0);
  uVar1 = _cfc2(in_vc12);
  _ctc2((uint)uVar1 | 0x200);
  SYNC(0x10);
  REG_VIF1_FIFO = (int)_DAT_002a5070;
  DAT_10005004 = (int)((ulong)_DAT_002a5070 >> 0x20);
  DAT_10005008 = DAT_002a5078;
  DAT_1000500c = DAT_002a507c;
  REG_VIF1_FIFO = DAT_002a5080;
  DAT_10005004 = DAT_002a5084;
  DAT_10005008 = DAT_002a5088;
  DAT_1000500c = DAT_002a508c;
  REG_GIF_CTRL = 1;
  return;
}

