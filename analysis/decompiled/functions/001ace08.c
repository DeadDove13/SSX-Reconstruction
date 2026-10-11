/* Ghidra pseudocode. PS2 address: 001ace08. Not validated source. */

void FUN_001ace08(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 auStack_40 [12];
  
  puVar3 = auStack_40;
  iVar4 = *(int *)(param_1 + 0x198);
  if (0 < iVar4) {
    puVar2 = (undefined4 *)(param_1 + 0x1b0);
    do {
      uVar1 = *puVar2;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 6;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar4 != 0);
  }
  FUN_001aa568(*(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x28c),auStack_40,
               *(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x194),0x58);
  return;
}

