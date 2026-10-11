/* Ghidra pseudocode. PS2 address: 0018cf30. Not validated source. */

undefined4 FUN_0018cf30(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    FUN_00189640(DAT_002859e4);
    uVar2 = 1;
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(DAT_002859e4 + 0x44) = 1;
      FUN_00152df8(0x27a598);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
    if (iVar1 == 2) {
      FUN_0018e870(0x28abe0,0);
      FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),9,0xffffffffffffffff);
      uVar3 = FUN_001a36e8(*(undefined4 *)(DAT_002859e4 + 0x30));
      FUN_001e5608(uVar3,1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

