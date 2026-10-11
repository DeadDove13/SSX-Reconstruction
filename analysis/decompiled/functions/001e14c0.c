/* Ghidra pseudocode. PS2 address: 001e14c0. Not validated source. */

undefined8 FUN_001e14c0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  iVar3 = (int)param_1;
  FUN_001a9700();
  *(undefined **)(iVar3 + 0x18) = &DAT_002b7d20;
  FUN_0018a0e0(iVar3 + 0x3a8);
  uVar2 = FUN_00234e80(DAT_002852fc,0x9c);
  FUN_0019a7f8(iVar3 + 0x368,uVar2);
  uVar1 = *(undefined4 *)(DAT_002859e4 + 0x5c);
  *(undefined4 *)(iVar3 + 0xec) = uVar1;
  FUN_001a0a88(0x3f800000,uVar1,iVar3 + 0x368,auStack_50);
  *(undefined4 *)(iVar3 + 0x110) = uStack_48;
  *(undefined4 *)(iVar3 + 0x434) = 0;
  uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0xec) + 0xc);
  *(undefined4 *)(iVar3 + 0x414) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x114) = uVar1;
  *(undefined4 *)(iVar3 + 0x41c) = 1;
  *(undefined4 *)(iVar3 + 0x3f4) = 0;
  *(undefined4 *)(iVar3 + 0x418) = 1;
  *(undefined4 *)(iVar3 + 0x420) = 0;
  *(undefined4 *)(iVar3 + 0x424) = 0;
  *(undefined4 *)(iVar3 + 0x3fc) = 0;
  *(undefined4 *)(iVar3 + 0x400) = 0;
  *(undefined4 *)(iVar3 + 0x408) = 0;
  *(undefined4 *)(iVar3 + 0x40c) = 0;
  *(undefined4 *)(iVar3 + 0x410) = 0;
  *(undefined4 *)(iVar3 + 0x438) = 0;
  return param_1;
}

