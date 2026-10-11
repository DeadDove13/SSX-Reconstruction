/* Ghidra pseudocode. PS2 address: 00185988. Not validated source. */

int FUN_00185988(int param_1,ulong param_2,int param_3)

{
  if (param_2 < 4) {
    param_3 = param_1 + param_3;
    if (param_2 == 1) {
      FUN_0025a60c(param_1,*(undefined1 *)(param_1 + -1));
    }
    else {
      FUN_00185960(param_1,param_1 - (int)param_2);
    }
  }
  else {
    param_3 = FUN_001858e0(param_1,param_1 - (int)param_2);
  }
  return param_3;
}

