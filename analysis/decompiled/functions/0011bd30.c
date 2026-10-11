/* Ghidra pseudocode. PS2 address: 0011bd30. Not validated source. */

void FUN_0011bd30(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_002913c4;
  if (1 < *(int *)((int)param_1 + 0x1944)) {
    FUN_0011ed18(0x295e90,2);
    uVar2 = DAT_002c1890;
    FUN_0011ecd8(0x295e90,*(undefined4 *)(*(int *)(DAT_002859e4 + 0x7c) + 0x5c),1);
    FUN_0011ed28(uVar2,0x295e90,0,0);
    FUN_0011ed38(0x295e90,1);
    FUN_0011ed08(0x295e90,2,0);
    FUN_0011ecf8(0x295e90,1);
    FUN_0011ed48(0x295e90,4);
    FUN_0011be88(param_1,0);
    FUN_0011ed48(0x295e90,8);
    FUN_0011be88(param_1,1);
    FUN_0011ed28(uVar2,0x295e90,0,2);
    FUN_0011ed38(0x295e90,0);
    FUN_0011ed08(0x295e90,0,0);
    FUN_0011ed48(0x295e90,3);
    FUN_0011ecf8(0x295e90,0);
    FUN_0011ed18(0x295e90,uVar1);
    return;
  }
  return;
}

