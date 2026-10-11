/* Ghidra pseudocode. PS2 address: 0022e880. Not validated source. */

void FUN_0022e880(int param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (&DAT_002a1b10)[param_1];
  if (param_2 == *(char *)(iVar1 + 0x12)) {
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) - (int)param_3;
    if (*(code **)(iVar1 + 0x28) != (code *)0x0) {
      (**(code **)(iVar1 + 0x28))(param_1,param_3);
    }
  }
  return;
}

