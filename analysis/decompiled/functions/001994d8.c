/* Ghidra pseudocode. PS2 address: 001994d8. Not validated source. */

void FUN_001994d8(int param_1)

{
  int *piVar1;
  int iVar2;
  int aiStack_50 [4];
  
  iVar2 = 3;
  piVar1 = (int *)(param_1 + 0x392c);
  aiStack_50[0] = *(int *)(param_1 + 0x5d70);
  do {
    if (*piVar1 != 0) {
      FUN_00198620(*piVar1,aiStack_50);
    }
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (-1 < iVar2);
  *(int *)(param_1 + 0x5d74) = *(int *)(param_1 + 0x5d70);
  *(int *)(param_1 + 0x5d78) = aiStack_50[0] - *(int *)(param_1 + 0x5d70);
  *(int *)(param_1 + 0x5d7c) = *(int *)(param_1 + 0x5d7c) + 1;
  return;
}

