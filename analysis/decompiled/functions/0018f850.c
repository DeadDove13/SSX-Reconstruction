/* Ghidra pseudocode. PS2 address: 0018f850. Not validated source. */

undefined8 FUN_0018f850(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x14) == 0) {
    FUN_00191e08(param_1,param_2,0,*(undefined4 *)(param_2 + 0x10),0);
  }
  else {
    FUN_00191e08(param_1,param_2,*(undefined4 *)(param_2 + 0x10),0);
  }
  return param_1;
}

