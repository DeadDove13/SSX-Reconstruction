/* Ghidra pseudocode. PS2 address: 0023ec38. Not validated source. */

undefined4 FUN_0023ec38(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  
  uVar1 = DAT_002c5bf0;
  if (param_1 != 0) {
    if (param_1 == -1) {
      uVar1 = GetThreadId();
    }
    else {
      uVar1 = *(undefined4 *)((int)param_1 + 0x10);
    }
  }
  ReferThreadStatus(uVar1,auStack_40);
  return uStack_28;
}

