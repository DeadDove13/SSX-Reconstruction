/* Ghidra pseudocode. PS2 address: 00267670. Not validated source. */

int FUN_00267670(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  EI();
  return iVar1;
}

