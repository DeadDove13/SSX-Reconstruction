/* Ghidra pseudocode. PS2 address: 00208628. Not validated source. */

undefined8 FUN_00208628(undefined8 param_1)

{
  undefined1 auStack_70 [2];
  undefined2 uStack_6e;
  undefined2 uStack_52;
  undefined1 uStack_4f;
  undefined1 uStack_44;
  undefined1 *puStack_28;
  
  DAT_002c5778 = (int)param_1;
  *(undefined **)(DAT_002c5778 + 0x32000) = &DAT_002bd1a8;
  FUN_00224cc8();
  FUN_00224a20(auStack_70);
  puStack_28 = &LAB_00208620;
  uStack_52 = uStack_6e;
  uStack_4f = 0x10;
  uStack_44 = 0;
  FUN_00224bb8(auStack_70);
  FUN_00224638(param_1,0x32000,6);
  return param_1;
}

