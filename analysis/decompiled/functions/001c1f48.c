/* Ghidra pseudocode. PS2 address: 001c1f48. Not validated source. */

void FUN_001c1f48(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 7;
  iVar1 = param_2 + 0x10;
  *(undefined4 *)(param_2 + 0x4b8) = param_1;
  do {
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_2 + 0x4b8);
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    uVar3 = *(undefined4 *)(param_2 + 0x4b8);
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = uVar3;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    uVar3 = *(undefined4 *)(param_2 + 0x4b8);
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x58) = uVar3;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    iVar1 = iVar1 + 0x90;
  } while (-1 < iVar2);
  FUN_001c2030();
  return;
}

