/* Ghidra pseudocode. PS2 address: 00188f68. Not validated source. */

void FUN_00188f68(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_002915f4;
  iVar2 = DAT_002915f0;
  if (*(int *)(param_1 + 0x298) == 1) {
    uVar1 = CONCAT44(DAT_002915f4,DAT_002915f0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = uVar1;
  }
  else if (*(int *)(param_1 + 0x298) == 2) {
    if (*(int *)(param_1 + 0x29c) == 0) {
      iVar3 = DAT_002915f4 / 2;
      iVar4 = iVar3 + -2;
      uVar1 = CONCAT44(iVar4,DAT_002915f0);
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = uVar1;
      *(ulong *)(param_1 + 0x110) = (ulong)(iVar3 + 2) << 0x20;
      *(ulong *)(param_1 + 0x118) = CONCAT44(iVar4,iVar2);
    }
    else {
      iVar2 = DAT_002915f0 / 2;
      iVar4 = iVar2 + -2;
      uVar1 = CONCAT44(DAT_002915f4,iVar4);
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = uVar1;
      *(ulong *)(param_1 + 0x110) = (ulong)(iVar2 + 2);
      *(ulong *)(param_1 + 0x118) = CONCAT44(iVar3,iVar4);
    }
  }
  return;
}

