/* Ghidra pseudocode. PS2 address: 002061c0. Not validated source. */

void FUN_002061c0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  FUN_001f3c98(DAT_002c5bc8,puVar2[2]);
  FUN_002281c0(*puVar2);
  if (puVar2[1] == 0) {
    iVar1 = puVar2[2];
  }
  else {
    FUN_00103710();
    iVar1 = puVar2[2];
  }
  if (-1 < iVar1) {
    FUN_001f4ae8(DAT_002c5bc8);
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

