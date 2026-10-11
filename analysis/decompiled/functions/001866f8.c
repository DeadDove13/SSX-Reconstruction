/* Ghidra pseudocode. PS2 address: 001866f8. Not validated source. */

void FUN_001866f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_001867d0(param_1,param_3);
  while (lVar1 != 0) {
    lVar2 = FUN_00186830(param_1,lVar1,param_3);
    FUN_00186648(param_1,lVar1);
    FUN_00186448(param_1,lVar1,param_2);
    lVar1 = lVar2;
  }
  if ((*(uint *)((int)param_2 * 0x34 + *(int *)((int)param_1 + 4)) & 1) != 0) {
    FUN_001864b0(param_1,param_2);
    return;
  }
  return;
}

