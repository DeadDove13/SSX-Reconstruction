/* Ghidra pseudocode. PS2 address: 001487c8. Not validated source. */

void FUN_001487c8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_50 [4];
  
  auStack_50[0] = FUN_001eac78();
  FUN_001973f0(param_2,auStack_50,4);
  iVar2 = *(int *)(param_1 + 0x204);
  if (iVar2 != param_1) {
    iVar1 = *(int *)(iVar2 + 0x1d0);
    while( true ) {
      (**(code **)(iVar1 + 0x1c))(iVar2 + *(short *)(iVar1 + 0x18),param_2);
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar2 == param_1) break;
      iVar1 = *(int *)(iVar2 + 0x1d0);
    }
  }
  return;
}

