/* Ghidra pseudocode. PS2 address: 001c3910. Not validated source. */

undefined4 FUN_001c3910(int param_1,undefined8 param_2)

{
  if (param_1 != 2) {
    trap(0);
  }
  FUN_001c3948(param_2);
  SYNC(0);
  EI();
  return 1;
}

