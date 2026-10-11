/* Ghidra pseudocode. PS2 address: 00238f58. Not validated source. */

uint FUN_00238f58(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bStack_5d;
  
  bStack_5d = (byte)(param_1 >> 0x18);
  puVar2 = (uint *)(DAT_002a3374 + (uint)bStack_5d * 0x30);
  uVar1 = 0xfffffffd;
  if ((param_1 & 0xfffff) == (*puVar2 & 0xfffff)) {
    uVar1 = puVar2[2];
    while (uVar1 == 0) {
      FUN_0023e608(0);
      if ((param_1 & 0xfffff) != (*(uint *)((uint)bStack_5d * 0x30 + DAT_002a3374) & 0xfffff)) {
        return 0xfffffffd;
      }
      uVar1 = puVar2[2];
    }
    uVar1 = puVar2[2];
  }
  return uVar1;
}

