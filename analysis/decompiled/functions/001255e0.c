/* Ghidra pseudocode. PS2 address: 001255e0. Not validated source. */

void FUN_001255e0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 == 0) || (lVar2 = FUN_001222f0(param_1), lVar2 == 0)) {
    iVar1 = *(int *)((int)param_1 + 8);
    (**(code **)(iVar1 + 0x6c))((int)param_1 + (int)*(short *)(iVar1 + 0x68));
  }
  return;
}

