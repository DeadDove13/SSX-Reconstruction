/* Ghidra pseudocode. PS2 address: 00245080. Not validated source. */

undefined4 FUN_00245080(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 auStack_120 [4];
  undefined4 auStack_110 [4];
  undefined4 auStack_100 [4];
  undefined4 auStack_f0 [4];
  undefined4 auStack_e0 [4];
  undefined4 auStack_d0 [4];
  undefined2 auStack_c0 [8];
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  
  lVar2 = FUN_00244e00();
  uVar1 = 0;
  if (lVar2 == 0) {
    puStack_ac = auStack_e0;
    uVar6 = 0;
    puStack_b0 = auStack_d0;
    puVar5 = param_1 + 0x87;
    puVar4 = param_1;
    do {
      uVar3 = uVar6 + 0x400;
      uVar6 = uVar6 + 1;
      FUN_00244e70(&uStack_130,uVar3 & 0xffff);
      *puVar4 = uStack_130;
      puVar4[1] = uStack_12c;
      puVar4[2] = uStack_128;
      puVar4[3] = uStack_124;
      puVar4 = puVar4 + 4;
    } while (uVar6 < 0x20);
    FUN_00244e70(&uStack_130,0x430);
    uVar6 = 0;
    param_1[0x80] = uStack_130;
    FUN_00244e70(auStack_120,0x431);
    param_1[0x81] = auStack_120[0];
    FUN_00244e70(auStack_110,0x432);
    param_1[0x82] = auStack_110[0];
    FUN_00244e70(auStack_100,0x434);
    param_1[0x83] = auStack_100[0];
    FUN_00244e70(auStack_f0,0x435);
    param_1[0x84] = auStack_f0[0];
    FUN_00244e70(puStack_ac,0x436);
    param_1[0x85] = auStack_e0[0];
    FUN_00244e70(puStack_b0,0x437);
    param_1[0x86] = auStack_d0[0];
    do {
      uVar3 = uVar6 + 0x420;
      uVar6 = uVar6 + 1;
      FUN_00244e70(auStack_c0,uVar3 & 0xffff);
      *(undefined2 *)puVar5 = auStack_c0[0];
      puVar5 = (undefined4 *)((int)puVar5 + 2);
    } while (uVar6 < 0x10);
    uVar1 = 1;
  }
  return uVar1;
}

