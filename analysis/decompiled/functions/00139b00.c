/* Ghidra pseudocode. PS2 address: 00139b00. Not validated source. */

void FUN_00139b00(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0xc);
  (**(code **)(iVar1 + 0x8c))((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar1 + 0x88));
  return;
}

