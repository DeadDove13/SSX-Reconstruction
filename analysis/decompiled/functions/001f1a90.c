/* Ghidra pseudocode. PS2 address: 001f1a90. Not validated source. */

void FUN_001f1a90(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if ((((*(int *)(DAT_002859e4 + 0x38) == 0) ||
       (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) == 0)) &&
      (*(int *)((int)param_2 + 0x340) == 1)) && (lVar1 = FUN_001f8290(), param_2 == lVar1)) {
    FUN_001efe18();
  }
  return;
}

