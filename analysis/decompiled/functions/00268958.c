/* Ghidra pseudocode. PS2 address: 00268958. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00268958(char *param_1,undefined4 param_2)

{
  char cVar1;
  long lVar2;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  sceSifStopDma();
  uStack_3c = sceSifGetReg(0xffffffff80000000);
  DAT_002d7e90 = 0;
  cVar1 = *param_1;
  DAT_002d7e94 = param_2;
  while (cVar1 != '\0') {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    (&DAT_002d7e98)[DAT_002d7e90] = cVar1;
    DAT_002d7e90 = DAT_002d7e90 + 1;
    cVar1 = *param_1;
  }
  DAT_002d7e88 = 0x80000003;
  _DAT_002d7e80 = 0x68;
  uStack_38 = 0x68;
  uStack_34 = 0x44;
  puStack_40 = &DAT_002d7e80;
  FUN_002669d0(0x2d7e80,0x68);
  lVar2 = sceSifSetDma(&puStack_40,1);
  if (lVar2 != 0) {
    sceSifSetReg(4,0x10000);
    sceSifSetReg(4,0x20000);
    sceSifSetReg(0xffffffff80000002,0);
    sceSifSetReg(0xffffffff80000000,0);
  }
  return lVar2 != 0;
}

