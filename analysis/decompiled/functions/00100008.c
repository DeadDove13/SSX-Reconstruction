/* Ghidra pseudocode. PS2 address: 00100008. Not validated source. */

void entry(void)

{
  bool bVar1;
  undefined4 in_zero_lo;
  undefined4 in_zero_hi;
  undefined4 in_zero_udw;
  undefined4 in_register_0000000c;
  undefined4 *puVar2;
  int __status;
  
  puVar2 = &DAT_002c5b80;
  do {
    *puVar2 = in_zero_lo;
    puVar2[1] = in_zero_hi;
    puVar2[2] = in_zero_udw;
    puVar2[3] = in_register_0000000c;
    bVar1 = puVar2 < (undefined4 *)0x2d8807;
    puVar2 = puVar2 + 4;
  } while (bVar1);
  syscall(0x3c);
  syscall(0x3d);
  FlushCache(0,0xffffffffffffffff,0x20000,0x2c5c80,0x1000b0);
  EI();
  __status = FUN_0018ab98(DAT_002c5c80,0x2c5c84);
  _Exit(__status);
  return;
}

