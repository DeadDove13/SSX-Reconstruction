/* Ghidra pseudocode. PS2 address: 00189640. Not validated source. */

void FUN_00189640(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_001839d0(0x2852f8,0);
  iVar3 = 0;
  FUN_001890d0(param_1);
  iVar4 = (int)param_1;
  if (0 < *(int *)(iVar4 + 0x294)) {
    puVar2 = (undefined4 *)(iVar4 + 0xa0);
    uVar1 = *puVar2;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x20;
      FUN_0015b980(uVar1);
      if (*(int *)(iVar4 + 0x294) <= iVar3) break;
      uVar1 = *puVar2;
    }
  }
  FUN_0015dac8(*(undefined4 *)(iVar4 + 0xa0));
  FUN_0015c980();
  if (*(int *)(iVar4 + 0x38) == 0) {
    iVar3 = *(int *)(iVar4 + 0x2c);
  }
  else {
    FUN_001934e0();
    iVar3 = *(int *)(iVar4 + 0x2c);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar4 + 0x14);
  }
  else {
    FUN_0012fdc8();
    iVar3 = *(int *)(iVar4 + 0x14);
  }
  (**(code **)(*(int *)(iVar3 + 8) + 0x84))(iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0x80));
  thunk_FUN_00104020(*(undefined4 *)(iVar4 + 0xc));
  FUN_001fa9f0(DAT_002c56e8);
  FUN_001839d0(0x2852f8,1);
  return;
}

