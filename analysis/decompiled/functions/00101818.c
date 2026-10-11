/* Ghidra pseudocode. PS2 address: 00101818. Not validated source. */

undefined4 FUN_00101818(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = 0;
  if ((((iVar1 == 6) || (iVar1 == 3)) || (iVar1 == 4)) || (iVar1 == 1)) {
    uVar2 = 1;
  }
  return uVar2;
}

