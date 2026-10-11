/* Ghidra pseudocode. PS2 address: 00204738. Not validated source. */

void FUN_00204738(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_001f4b60();
  if (*(int *)((int)param_2 + 0x329bc) == 0) {
    iVar2 = 0x3f;
    iVar1 = (int)param_2 + 0x329c0;
    do {
      FUN_00204650(param_1,iVar1,param_2);
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0xa0;
    } while (-1 < iVar2);
  }
  return;
}

