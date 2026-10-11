/* Ghidra pseudocode. PS2 address: 0022fe00. Not validated source. */

void FUN_0022fe00(int param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = DAT_002a1c9c + param_1 * 0x54;
  if (0 < param_2) {
    if (*(int *)(iVar4 + 0x48) == 0) {
      uVar3 = FUN_00225218(0x40);
      iVar2 = (int)uVar3;
      *(undefined2 *)(iVar2 + 0xc) = 2;
      *(int *)(iVar4 + 0x48) = iVar2;
      *(undefined4 *)(iVar2 + 8) = 0;
      FUN_00233260(uVar3);
      FUN_00230038(iVar4 + 0x34,*(undefined4 *)(iVar4 + 0x48));
      uVar1 = *(undefined4 *)(iVar4 + 0x48);
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0x48);
    }
    FUN_00233270(uVar1,param_2);
    return;
  }
  if (*(int *)(iVar4 + 0x48) != 0) {
    FUN_00230098(iVar4 + 0x34);
    FUN_002253d0(*(undefined4 *)(iVar4 + 0x48));
    *(undefined4 *)(iVar4 + 0x48) = 0;
  }
  return;
}

