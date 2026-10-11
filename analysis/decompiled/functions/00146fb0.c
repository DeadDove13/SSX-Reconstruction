/* Ghidra pseudocode. PS2 address: 00146fb0. Not validated source. */

undefined8 FUN_00146fb0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x240) != 4) {
    FUN_00146b60(param_1,0);
    *(undefined4 *)(iVar2 + 0x240) = 4;
    FUN_002193f0(iVar2 + 0x244,0x2ac208,0x10);
    FUN_00146ac8(param_1,0);
    FUN_00146ac8(param_1,4);
    FUN_00146ac8(param_1,6);
    FUN_00146ac8(param_1,0x16);
    FUN_00146ac8(param_1,0x20);
    FUN_00146ac8(param_1,1);
    FUN_00146ac8(param_1,2);
    FUN_00146ac8(param_1,3);
    uVar1 = FUN_00146ac8(param_1,0x21);
    return uVar1;
  }
  return 1;
}

