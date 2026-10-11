/* Ghidra pseudocode. PS2 address: 0025e858. Not validated source. */

void FUN_0025e858(undefined1 *param_1)

{
  undefined1 *apuStack_70 [2];
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined *puStack_1c;
  
  uStack_64 = 0x208;
  uStack_5c = 0x7fffffff;
  puStack_1c = PTR_DAT_002a6614;
  uStack_68 = 0x7fffffff;
  apuStack_70[0] = param_1;
  puStack_60 = param_1;
  FUN_0025c3f8(apuStack_70);
  *apuStack_70[0] = 0;
  return;
}

