/* Ghidra pseudocode. PS2 address: 001c2f98. Not validated source. */

int FUN_001c2f98(int param_1,int param_2,ulong param_3,long param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x3f >> 6;
  if (0x3a < param_3) {
    iVar1 = 0;
    if (0x2f < param_4) {
      if (param_4 < 0x32) {
        iVar1 = iVar2 * (param_2 + 0x1f >> 5);
      }
      else if ((param_4 == 0x32) || (param_4 == 0x3a)) {
        iVar1 = iVar2 * (param_2 + 0x3f >> 6);
      }
    }
    return iVar1 * 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x001c2fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*(code *)(&PTR_LAB_002b6fd0)[(int)param_3])();
  return iVar2;
}

