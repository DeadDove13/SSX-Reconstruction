/* Ghidra pseudocode. PS2 address: 00167648. Not validated source. */

undefined8 FUN_00167648(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 10) {
                    /* WARNING: Could not recover jumptable at 0x00167678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_002b0150)[(int)param_2])();
    return uVar1;
  }
  return 0;
}

