/* Ghidra pseudocode. PS2 address: 00146d10. Not validated source. */

undefined8 FUN_00146d10(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x240) != 2) {
    FUN_00146b60(0x2795b8,0);
    *(undefined4 *)(iVar2 + 0x240) = 2;
    FUN_002193f0(iVar2 + 0x244,0x2ac208,0x10);
    *(uint *)(iVar2 + 0x240) = *(uint *)(iVar2 + 0x240) | 0x40;
    FUN_00146af0(param_1,7);
    FUN_00146af0(param_1,10);
    FUN_00146af0(param_1,0xd);
    FUN_00146af0(param_1,0x10);
    FUN_00146af0(param_1,0x13);
    FUN_00146af0(param_1,0x17);
    FUN_00146af0(param_1,0x1a);
    uVar1 = FUN_00146af0(param_1,0x1d);
    return uVar1;
  }
  return 1;
}

