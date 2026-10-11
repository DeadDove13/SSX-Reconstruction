/* Ghidra pseudocode. PS2 address: 001f19d0. Not validated source. */

void FUN_001f19d0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  if ((((*(int *)(DAT_002859e4 + 0x38) == 0) ||
       (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) == 0)) &&
      (1 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c))) && (*(int *)(param_2 + 0x340) == 1)) {
    uStack_1c = 0;
    if (1 < *(int *)(DAT_002859e4 + 0x298)) {
      if (*(int *)(DAT_002859e4 + 0xa4) == param_2) {
        uStack_1c = 1;
      }
      else if (*(int *)(DAT_002859e4 + 0x124) == param_2) {
        uStack_1c = 2;
      }
    }
    FUN_001f1910(auStack_20,param_3,param_4);
    FUN_001f04e8(auStack_20,(uint)auStack_20 | 4);
  }
  return;
}

