/* Ghidra pseudocode. PS2 address: 0023ed08. Not validated source. */

undefined4 FUN_0023ed08(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_50 [48];
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  while (lVar2 = ReferThreadStatus(uVar1,auStack_50), lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return 1;
}

