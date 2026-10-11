/* Ghidra pseudocode. PS2 address: 00250dc8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00250dc8(void)

{
  int iVar1;
  
  REG_DMAC_4_IPU_TO_CHCR = 1;
  REG_IPU_CTRL = 0x40000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_IN_FIFO = (int)_DAT_002a5ca0;
  DAT_10007014 = (int)((ulong)_DAT_002a5ca0 >> 0x20);
  DAT_10007018 = DAT_002a5ca8;
  DAT_1000701c = DAT_002a5cac;
  REG_IPU_IN_FIFO = DAT_002a5cb0;
  DAT_10007014 = DAT_002a5cb4;
  DAT_10007018 = PTR_DAT_002a5cb8;
  DAT_1000701c = PTR_DAT_002a5cbc;
  REG_IPU_IN_FIFO = DAT_002a5cc0;
  DAT_10007014 = PTR_DAT_002a5cc4;
  DAT_10007018 = DAT_002a5cc8;
  DAT_1000701c = DAT_002a5ccc;
  REG_IPU_IN_FIFO = DAT_002a5cd0;
  DAT_10007014 = PTR_DAT_002a5cd4;
  DAT_10007018 = DAT_002a5cd8;
  DAT_1000701c = DAT_002a5cdc;
  REG_IPU_IN_FIFO = DAT_002a5ce0;
  DAT_10007014 = DAT_002a5ce4;
  DAT_10007018 = DAT_002a5ce8;
  DAT_1000701c = DAT_002a5cec;
  REG_IPU_IN_FIFO = DAT_002a5ce0;
  DAT_10007014 = DAT_002a5ce4;
  DAT_10007018 = DAT_002a5ce8;
  DAT_1000701c = DAT_002a5cec;
  REG_IPU_IN_FIFO = DAT_002a5ce0;
  DAT_10007014 = DAT_002a5ce4;
  DAT_10007018 = DAT_002a5ce8;
  DAT_1000701c = DAT_002a5cec;
  REG_IPU_IN_FIFO = DAT_002a5ce0;
  DAT_10007014 = DAT_002a5ce4;
  DAT_10007018 = DAT_002a5ce8;
  DAT_1000701c = DAT_002a5cec;
  REG_IPU_CMD = 0x50000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0x58000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_IN_FIFO = (int)_DAT_002a5cf0;
  DAT_10007014 = (int)((ulong)_DAT_002a5cf0 >> 0x20);
  DAT_10007018 = DAT_002a5cf8;
  DAT_1000701c = PTR_DAT_002a5cfc;
  REG_IPU_IN_FIFO = DAT_002a5d00;
  DAT_10007014 = DAT_002a5d04;
  DAT_10007018 = DAT_002a5d08;
  DAT_1000701c = DAT_002a5d0c;
  REG_IPU_CMD = 0x60000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0x90000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CTRL = 0x40000000;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_IPU_CMD = 0;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  return;
}

