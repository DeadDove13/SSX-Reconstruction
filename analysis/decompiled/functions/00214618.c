/* Ghidra pseudocode. PS2 address: 00214618. Not validated source. */

void FUN_00214618(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (int)param_1;
    if (param_2 < 0x100) break;
    param_3 = param_3 + 1;
    FUN_00214618(param_1,*(undefined4 *)(iVar1 + param_2 * 4 + 0x1524),param_3);
    param_2 = *(uint *)(iVar1 + param_2 * 4 + 0x1d44);
  }
  *(int *)(iVar1 + param_2 * 4 + 0x2564) = param_3;
  return;
}

