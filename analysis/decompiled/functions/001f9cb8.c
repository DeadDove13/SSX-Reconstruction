/* Ghidra pseudocode. PS2 address: 001f9cb8. Not validated source. */

void FUN_001f9cb8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_8c0 [2064];
  int iStack_b0;
  int iStack_ac;
  
  iVar2 = 8;
  FUN_00204960(auStack_8c0,0x2bca10,0);
  puVar1 = (undefined4 *)(param_1 + 0xa4228);
  do {
    iVar2 = iVar2 + -1;
    FUN_00103778(*puVar1);
    *puVar1 = 0;
    FUN_00103778(puVar1[0xb4]);
    puVar1[0xb4] = 0;
    FUN_00103778(puVar1[0x168]);
    puVar1[0x168] = 0;
    puVar1 = puVar1 + 0x14;
  } while (-1 < iVar2);
  iStack_ac = param_1 + 0xa4778;
  iStack_b0 = param_1 + 0xa4a48;
  FUN_00202c48(param_1 + 0xa4228,auStack_8c0,0x2c5578,0x2c5580);
  FUN_00202c48(param_1 + 0xa4278,auStack_8c0,0x2c5588,0x2c5580);
  FUN_00202c48(param_1 + 0xa42c8,auStack_8c0,0x2c5590,0x2c5580);
  FUN_00202c48(param_1 + 0xa4318,auStack_8c0,0x2c5598,0x2c5580);
  FUN_00202c48(param_1 + 0xa4368,auStack_8c0,0x2c55a0,0x2c5580);
  FUN_00202c48(param_1 + 0xa43b8,auStack_8c0,0x2c55a8,0x2c5580);
  FUN_00202c48(param_1 + 0xa4408,auStack_8c0,0x2c55b0,0x2c5580);
  FUN_00202c48(param_1 + 0xa4458,auStack_8c0,0x2c55b8,0x2c5580);
  FUN_00202c48(param_1 + 0xa44a8,auStack_8c0,0x2c55c0,0x2c5580);
  FUN_00202c48(param_1 + 0xa44f8,auStack_8c0,0x2c5578,0x2c55c8);
  FUN_00202c48(param_1 + 0xa4548,auStack_8c0,0x2c5588,0x2c55c8);
  FUN_00202c48(param_1 + 0xa4598,auStack_8c0,0x2c5590,0x2c55c8);
  FUN_00202c48(param_1 + 0xa45e8,auStack_8c0,0x2c5598,0x2c55c8);
  FUN_00202c48(param_1 + 0xa4638,auStack_8c0,0x2c55a0,0x2c55c8);
  FUN_00202c48(param_1 + 0xa4688,auStack_8c0,0x2c55a8,0x2c55c8);
  FUN_00202c48(param_1 + 0xa46d8,auStack_8c0,0x2c55b0,0x2c55c8);
  FUN_00202c48(param_1 + 0xa4728,auStack_8c0,0x2c55b8,0x2c55c8);
  FUN_00202c48(iStack_ac,auStack_8c0,0x2c55c0,0x2c55c8);
  FUN_00202c48(param_1 + 0xa47c8,auStack_8c0,0x2c5578,0x2c55d0);
  FUN_00202c48(param_1 + 0xa4818,auStack_8c0,0x2c5588,0x2c55d0);
  FUN_00202c48(param_1 + 0xa4868,auStack_8c0,0x2c5590,0x2c55d0);
  FUN_00202c48(param_1 + 0xa48b8,auStack_8c0,0x2c5598,0x2c55d0);
  FUN_00202c48(param_1 + 0xa4908,auStack_8c0,0x2c55a0,0x2c55d0);
  FUN_00202c48(param_1 + 0xa4958,auStack_8c0,0x2c55a8,0x2c55d0);
  FUN_00202c48(param_1 + 0xa49a8,auStack_8c0,0x2c55b0,0x2c55d0);
  FUN_00202c48(param_1 + 0xa49f8,auStack_8c0,0x2c55b8,0x2c55d0);
  FUN_00202c48(iStack_b0,auStack_8c0,0x2c55c0,0x2c55d0);
  FUN_00204ab8(auStack_8c0,2);
  return;
}

