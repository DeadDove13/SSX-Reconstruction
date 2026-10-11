/* Ghidra pseudocode. PS2 address: 00102228. Not validated source. */

void FUN_00102228(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00101418(param_2);
  if (lVar2 == 0) {
    FUN_002229e8(0x299cc8,3);
    iVar1 = *(int *)((int)param_2 + 8);
    (**(code **)(iVar1 + 0x6c))((int)param_2 + (int)*(short *)(iVar1 + 0x68));
  }
  return;
}

