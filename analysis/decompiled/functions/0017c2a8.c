/* Ghidra pseudocode. PS2 address: 0017c2a8. Not validated source. */

void FUN_0017c2a8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_00283e60;
  iVar2 = 9;
  *(undefined4 *)((int)param_1 + 0xb50) = 0;
  uVar1 = DAT_00283e60;
  while( true ) {
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
    FUN_0016eae0(param_1,uVar1);
    if (iVar2 < 0) break;
    uVar1 = *puVar3;
  }
  return;
}

