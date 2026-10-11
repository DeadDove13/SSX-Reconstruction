/* Ghidra pseudocode. PS2 address: 00246720. Not validated source. */

undefined4 FUN_00246720(undefined4 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [4];
  code *pcStack_4c;
  undefined *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  
  DAT_002a51b0 = 0;
  DAT_002a51b4 = 0;
  DAT_002a51b8 = 0;
  DAT_002a51bc = 0;
  DAT_002a51c0 = 0;
  DAT_002a51c4 = 0;
  DAT_002a51c8 = 0;
  DAT_002a51cc = 0;
  DAT_002a51d0 = 0;
  FUN_00246510(1,0xe620);
  pcStack_4c = FUN_002467f8;
  puStack_48 = &DAT_002d06c0;
  uStack_44 = 0x1000;
  puStack_40 = &_mips_gp0_value;
  uStack_3c = param_1;
  uVar1 = CreateThread(auStack_50);
  uStack_30 = (undefined4)uVar1;
  lVar2 = _StartThread(uVar1,0);
  if (lVar2 < 0) {
    FUN_0025a720(0x2bec10);
    uStack_30 = 0xffffffff;
  }
  return uStack_30;
}

