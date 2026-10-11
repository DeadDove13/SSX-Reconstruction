/* Ghidra pseudocode. PS2 address: 00216870. Not validated source. */

void FUN_00216870(int *param_1)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x1c))((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  DAT_002c58b4 = 0;
  do {
    lVar1 = FUN_001c3a58(0x2913b0);
  } while (lVar1 == 0);
  FUN_00168730(0x295e90);
  return;
}

