/* Ghidra pseudocode. PS2 address: 001ee750. Not validated source. */

uint FUN_001ee750(int param_1,int param_2,long param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 < 0x11);
  if (param_2 < *(int *)(param_1 + 0x6610)) {
    uVar1 = param_1 + (int)param_3 * 4;
    if (-1 < *(int *)(uVar1 + 0x65cc)) {
      uVar1 = FUN_001ee008(*(int *)(param_1 + 0x6584) + param_2 * 0x14);
      return uVar1;
    }
  }
  return uVar1;
}

