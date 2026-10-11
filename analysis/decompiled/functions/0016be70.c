/* Ghidra pseudocode. PS2 address: 0016be70. Not validated source. */

undefined4 FUN_0016be70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 400) == 0) {
    FUN_00156e18(0x27a598);
    uVar2 = 1;
  }
  else if (*(int *)(param_1 + 400) == 1) {
    iVar1 = *(int *)(param_1 + 0x5408);
    *(undefined4 *)(param_1 + 0x5408) = 0;
    iVar3 = FUN_0023b924(param_1 + 0x419c,0x1274);
    uVar2 = 0;
    if (iVar3 == iVar1) {
      FUN_0023bac0(0x27a59c,param_1 + 0x419c,0x1274);
      FUN_00152fc8(0x27a598);
      uVar2 = 1;
    }
  }
  return uVar2;
}

