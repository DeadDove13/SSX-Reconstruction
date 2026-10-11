/* Ghidra pseudocode. PS2 address: 0015a460. Not validated source. */

void FUN_0015a460(undefined8 param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  puVar1 = *(undefined4 **)(iVar3 + 8);
  pcVar2 = *(char **)(iVar3 + 0x10);
  *puVar1 = 1;
  *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(*(int *)(iVar3 + 4) + *pcVar2 * 4 + 0x740);
  FUN_00158808(param_1,pcVar2,puVar1 + 1);
  return;
}

