/* Ghidra pseudocode. PS2 address: 0011cd10. Not validated source. */

void FUN_0011cd10(int param_1,undefined8 param_2)

{
  FUN_00117c40();
  FUN_00118d08(param_1 + 0x1c20,param_2);
  FUN_00119e38(param_1 + 0x4b60,param_2);
  FUN_00117788(param_1 + 0x99b0,param_2);
  FUN_001183c0(param_1 + 0xb600,param_2);
  if ((1 < *(int *)(DAT_002859e4 + 0x298)) && (2 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c)))
  {
    return;
  }
  FUN_0011b180(param_1 + 0x8020,param_2);
  return;
}

