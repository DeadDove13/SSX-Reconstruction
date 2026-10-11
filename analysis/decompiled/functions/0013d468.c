/* Ghidra pseudocode. PS2 address: 0013d468. Not validated source. */

void FUN_0013d468(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_002109e0();
  uVar1 = (uVar1 & 3) + 9;
  while ((*(int *)(&DAT_00279598 + param_2 * 4) >> (uVar1 & 0x1f) & 1U) == 0) {
    uVar1 = uVar1 + 1;
    if (uVar1 == 4) {
      uVar1 = 9;
    }
  }
  FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x6cf4),
               *(undefined4 *)(&DAT_00279548 + uVar1 * 4),0,5);
  return;
}

