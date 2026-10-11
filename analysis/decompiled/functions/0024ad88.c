/* Ghidra pseudocode. PS2 address: 0024ad88. Not validated source. */

undefined4 FUN_0024ad88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = 0;
  if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(iVar1 + 8) != 0)) {
    FUN_0024ae08(DAT_002a53c4);
    uVar2 = 1;
    *(int *)(param_1 + 8) = DAT_002a53c4 - *(int *)(iVar1 + 0xac);
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return uVar2;
}

