/* Ghidra pseudocode. PS2 address: 00206738. Not validated source. */

undefined4 FUN_00206738(int param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    bVar1 = false;
    if (*(int *)(*(int *)(param_1 + 8) * 0x1c + *(int *)((int)param_2 + 0x351c4)) == 1) {
      uVar2 = FUN_001f4c90(param_2);
      lVar3 = FUN_00225a70(uVar2);
      bVar1 = lVar3 == 1;
    }
    if (!bVar1) {
      return 0;
    }
  }
  return 1;
}

