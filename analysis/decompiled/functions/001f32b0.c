/* Ghidra pseudocode. PS2 address: 001f32b0. Not validated source. */

undefined8 FUN_001f32b0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  FUN_001f6140();
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x351f8) = 0;
  *(undefined4 *)(iVar2 + 0x351f4) = 0;
  *(undefined **)(iVar2 + 0x32000) = &DAT_002bc758;
  *(undefined4 *)(iVar2 + 0x352fc) = 4;
  *(undefined4 *)(iVar2 + 0x35304) = 0;
  *(undefined4 *)(iVar2 + 0x35308) = 0;
  lVar1 = FUN_0023a448(0x2bc610,0x10,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0x10);
  }
  *(int *)(iVar2 + 0x35300) = (int)lVar1;
  *(undefined4 *)(iVar2 + 0x3530c) = 4;
  *(undefined4 *)(iVar2 + 0x35314) = 0;
  *(undefined4 *)(iVar2 + 0x35318) = 0;
  lVar1 = FUN_0023a448(0x2bc610,0x10,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0x10);
  }
  *(int *)(iVar2 + 0x35310) = (int)lVar1;
  *(undefined4 *)(iVar2 + 0x3531c) = 4;
  *(undefined4 *)(iVar2 + 0x35324) = 0;
  *(undefined4 *)(iVar2 + 0x35328) = 0;
  lVar1 = FUN_0023a448(0x2bc610,0x10,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0x10);
  }
  *(int *)(iVar2 + 0x35320) = (int)lVar1;
  *(undefined4 *)(iVar2 + 0x3532c) = 4;
  *(undefined4 *)(iVar2 + 0x35334) = 0;
  *(undefined4 *)(iVar2 + 0x35338) = 0;
  lVar1 = FUN_0023a448(0x2bc610,0x10,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0x10);
  }
  *(int *)(iVar2 + 0x35330) = (int)lVar1;
  return param_1;
}

