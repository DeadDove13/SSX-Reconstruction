/* Ghidra pseudocode. PS2 address: 00194cd8. Not validated source. */

void FUN_00194cd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int aiStack_b0 [4];
  undefined4 auStack_a0 [4];
  undefined4 uStack_90;
  
  iVar3 = 0;
  FUN_001978a0(param_2,aiStack_b0,8);
  if (0 < aiStack_b0[0]) {
    do {
      FUN_001978a0(param_2,auStack_a0,4);
      lVar1 = FUN_002107c8(0x298590,0x2c,0x40000000,0x2b5090,0,0);
      if (lVar1 != 0) {
        FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x2c);
      }
      uStack_90 = auStack_a0[0];
      iVar3 = iVar3 + 1;
      uVar2 = FUN_002237f8(0x299cc8,auStack_a0[0]);
      FUN_001226c0(lVar1,uVar2,0);
    } while (iVar3 < aiStack_b0[0]);
  }
  return;
}

