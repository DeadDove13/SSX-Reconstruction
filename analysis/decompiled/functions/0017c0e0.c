/* Ghidra pseudocode. PS2 address: 0017c0e0. Not validated source. */

void FUN_0017c0e0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_00283e60;
  iVar2 = 9;
  uVar1 = DAT_00283e60;
  while( true ) {
    puVar3 = puVar3 + 1;
    FUN_0016e858(param_1,uVar1,9);
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) break;
    uVar1 = *puVar3;
  }
  FUN_0017c308(param_1);
  return;
}

