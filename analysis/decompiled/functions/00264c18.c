/* Ghidra pseudocode. PS2 address: 00264c18. Not validated source. */

uint FUN_00264c18(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = Status & 0x10000;
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  uVar4 = DAT_002a6a9c + param_1;
  uVar1 = EndOfHeap();
  if (uVar1 < uVar4) {
    puVar2 = (undefined4 *)FUN_00259ab0();
    *puVar2 = 0xc;
    EI();
    uVar1 = 0xffffffff;
    uVar4 = DAT_002a6a9c;
  }
  else {
    uVar1 = DAT_002a6a9c;
    if (uVar3 != 0) {
      EI();
    }
  }
  DAT_002a6a9c = uVar4;
  return uVar1;
}

