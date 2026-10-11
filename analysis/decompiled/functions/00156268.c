/* Ghidra pseudocode. PS2 address: 00156268. Not validated source. */

void FUN_00156268(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_0023bbd0(iVar1 + 0x1674,0,0x2e8);
  switch(*(undefined4 *)(iVar1 + 0x14f0)) {
  case 0:
    *(undefined4 *)(iVar1 + 0x1278) = 6;
    FUN_00156718(param_1);
    return;
  default:
    FUN_00156990(param_1);
    return;
  case 2:
    FUN_00156718(param_1);
    return;
  case 3:
    FUN_00156990(param_1);
    return;
  case 4:
  case 5:
    FUN_00159478(iVar1 + 0x1648);
    return;
  case 6:
    FUN_00156408(param_1);
    return;
  case 7:
    FUN_00156528(param_1);
    return;
  case 8:
    FUN_00156618(param_1);
    return;
  }
}

