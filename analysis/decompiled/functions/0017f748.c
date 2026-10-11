/* Ghidra pseudocode. PS2 address: 0017f748. Not validated source. */

void FUN_0017f748(undefined8 param_1)

{
  switch(*(undefined4 *)((int)param_1 + 0xbac)) {
  case 0:
  case 5:
  case 10:
    FUN_0016eae0(param_1,0x11f);
    FUN_0016eae0(param_1,0x31c);
    return;
  default:
    return;
  case 0xf:
    FUN_0016eae0(param_1,0x11f);
    FUN_0016eae0(param_1,0x31b);
    return;
  case 0x14:
  case 0x19:
  case 0x1e:
    FUN_0016eae0(param_1,0x11e);
    FUN_0016eae0(param_1,0x31b);
    return;
  case 0x23:
    FUN_0016eae0(param_1,0x11e);
    FUN_0016eae0(param_1,0x31d);
    return;
  case 0x28:
    FUN_0016eae0(param_1,0x120);
    FUN_0016eae0(param_1,0x31d);
    return;
  }
}

