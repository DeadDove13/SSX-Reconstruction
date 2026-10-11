/* Ghidra pseudocode. PS2 address: 001743e0. Not validated source. */

void FUN_001743e0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  pcVar2 = *(char **)(param_1 + 0x38);
  iVar3 = 0;
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    if (pcVar2[iVar3] == '\n') {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      pcVar2 = *(char **)(param_1 + 0x38);
    }
    else {
      pcVar2 = *(char **)(param_1 + 0x38);
    }
    iVar3 = iVar3 + 1;
    cVar1 = pcVar2[iVar3];
  }
  return;
}

