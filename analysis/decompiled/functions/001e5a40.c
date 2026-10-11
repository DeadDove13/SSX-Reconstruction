/* Ghidra pseudocode. PS2 address: 001e5a40. Not validated source. */

void FUN_001e5a40(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  switch(*(undefined4 *)(iVar1 + 0x180)) {
  case 0:
    FUN_001a9810(*(undefined4 *)(iVar1 + 0x174));
    FUN_001d9dc8(param_1);
    return;
  default:
    return;
  case 2:
    FUN_001e5d98(param_1);
    return;
  case 4:
    FUN_001a9810(*(undefined4 *)(iVar1 + 0x174));
    FUN_001aa010(*(undefined4 *)(iVar1 + 0x174));
    return;
  }
}

