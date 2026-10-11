/* Ghidra pseudocode. PS2 address: 001e5d98. Not validated source. */

void FUN_001e5d98(int param_1)

{
  undefined8 uVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  FUN_0011ed18(0x295e90,0x12);
  uStack_40 = FUN_00234e80(DAT_002852fc,0xb6);
  uStack_3c = FUN_00234e80(DAT_002852fc,0xba);
  uStack_38 = FUN_00234e80(DAT_002852fc,0x1d3);
  uVar1 = FUN_00234e80(DAT_002852fc,0xb9);
  FUN_001aa568(*(undefined4 *)(param_1 + 0x174),uVar1,&uStack_40,3,*(undefined4 *)(param_1 + 0x184),
               0x58);
  return;
}

