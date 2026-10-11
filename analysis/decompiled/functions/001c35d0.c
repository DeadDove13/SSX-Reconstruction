/* Ghidra pseudocode. PS2 address: 001c35d0. Not validated source. */

undefined8 FUN_001c35d0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x3b) {
                    /* WARNING: Could not recover jumptable at 0x001c35ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_002b70e0)[(int)param_2])();
    return uVar1;
  }
  return 0;
}

