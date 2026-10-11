/* Ghidra pseudocode. PS2 address: 00205720. Not validated source. */

long FUN_00205720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(int *)(iVar2 + 0x32168) = *(int *)(iVar2 + 0x32168) + 1;
  lVar1 = FUN_002056a8(param_1,*(undefined4 *)(iVar2 + 0x32168));
  if (-1 < lVar1) {
    FUN_002053f8(iVar2 + (int)lVar1 * 0x2c + 0x32170,param_2,param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  }
  *(int *)(iVar2 + 0x32168) = *(int *)(iVar2 + 0x32168) + -1;
  return lVar1;
}

