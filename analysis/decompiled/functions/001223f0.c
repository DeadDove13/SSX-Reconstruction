/* Ghidra pseudocode. PS2 address: 001223f0. Not validated source. */

void FUN_001223f0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  uVar1 = *(undefined4 *)(iVar3 + 0x28);
  if (param_1 != 0) {
    (**(code **)(*(int *)(iVar3 + 8) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 8) + 8),3);
  }
  lVar2 = FUN_002107c8(0x298590,0x2c,0x40000000,0x2a8ab8,0,0);
  if (lVar2 != 0) {
    FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0x2c);
  }
  FUN_001226c0(lVar2,uVar1,0);
  return;
}

