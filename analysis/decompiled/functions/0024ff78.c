/* Ghidra pseudocode. PS2 address: 0024ff78. Not validated source. */

bool FUN_0024ff78(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_120 [256];
  
  iVar1 = *(int *)(DAT_002a52a4 + 0x40);
  if (*(int *)(iVar1 + 0xe0) == 0) {
    bVar2 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x10) <= *(int *)(iVar1 + 0xe4);
  }
  else {
    bVar2 = false;
    if (*(int *)(param_1 + 4) <= *(int *)(iVar1 + 0xdc)) {
      bVar2 = *(int *)(param_1 + 8) <= *(int *)(iVar1 + 0xe0);
    }
  }
  if (bVar2 == false) {
    FUN_0025b630(auStack_120,0x2bf588,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_0024af98(auStack_120);
  }
  return bVar2;
}

