/* Ghidra pseudocode. PS2 address: 0024af98. Not validated source. */

void FUN_0024af98(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (((DAT_002a52a4 == 0) || (*(int *)(DAT_002a52a4 + 0x40) == 0)) ||
     (param_2 = &uStack_20, *(int *)(*(int *)(DAT_002a52a4 + 0x40) + 0xc) == 0)) {
    FUN_0024af58(param_1,param_2);
  }
  else {
    uStack_1c = (undefined4)param_1;
    uStack_20 = 0;
    FUN_0024a768();
  }
  return;
}

