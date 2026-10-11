/* Ghidra pseudocode. PS2 address: 0013d3c0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0013d3e4) */

void FUN_0013d3c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_002109e0();
  uVar2 = iVar1 % 9 + 7;
  while ((*(int *)(&DAT_00279598 + param_2 * 4) >> (uVar2 & 0x1f) & 1U) == 0) {
    uVar2 = uVar2 + 1;
    if (uVar2 == 9) {
      uVar2 = 7;
    }
  }
  FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x6cf4),
               *(undefined4 *)(&DAT_00279548 + uVar2 * 4),0,5);
  return;
}

