/* Ghidra pseudocode. PS2 address: 001fcdf0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001fce50) */

void FUN_001fcdf0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  *(undefined4 *)((int)param_1 + 0x8b6d0) = 0;
  FUN_001f8b30(param_1,6);
  FUN_001f9c28(param_1);
  FUN_001fcd40(param_1);
  if (DAT_0027ba88 == 6) {
    iVar1 = FUN_002109b0();
    FUN_002070d8(param_1,iVar1 % 100);
  }
  else {
    lVar2 = FUN_002042b8(param_1);
    if (lVar2 == 0) {
      FUN_002070b0(param_1,0);
    }
    else {
      FUN_001fcda0(param_1);
    }
    FUN_00206fe0(param_1);
  }
  FUN_001f9b30(param_1);
  FUN_001f1760(param_1);
  return;
}

