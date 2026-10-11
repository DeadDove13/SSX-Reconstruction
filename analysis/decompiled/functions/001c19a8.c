/* Ghidra pseudocode. PS2 address: 001c19a8. Not validated source. */

void FUN_001c19a8(int param_1)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = *(undefined4 *)(param_1 + 0xc);
  uStack_1c = *(undefined4 *)(param_1 + 0x10);
  uStack_18 = *(undefined4 *)(param_1 + 0x14);
  uStack_14 = 0x3f800000;
  FUN_001d69c8(0x3f800000,DAT_002859d0,&uStack_20,param_1 + 0x90,param_1 + 0xd0,
               *(undefined4 *)(param_1 + 0x170));
  return;
}

