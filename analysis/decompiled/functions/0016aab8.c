/* Ghidra pseudocode. PS2 address: 0016aab8. Not validated source. */

void FUN_0016aab8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  if (*(int *)(iVar2 + 8) != 0) {
    if (*(code **)(iVar2 + 0xc) == (code *)0x0) {
      iVar1 = *(int *)(iVar2 + 0x284);
      goto LAB_0016aaf4;
    }
    (**(code **)(iVar2 + 0xc))(param_1);
  }
  iVar1 = *(int *)(iVar2 + 0x284);
LAB_0016aaf4:
  (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
  return;
}

