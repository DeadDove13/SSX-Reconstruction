/* Ghidra pseudocode. PS2 address: 00216900. Not validated source. */

undefined8 FUN_00216900(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = (undefined4 *)param_1;
  FUN_002167d8();
  uVar6 = 0x3f800000;
  *puVar5 = &DAT_002bd9f0;
  FUN_001a03b0(puVar5 + 1);
  puVar5[0x11] = 0;
  puVar5[0x10] = uVar6;
  puVar5[0xf] = 0;
  *(ulong *)(puVar5 + 0x12) = (ulong)uVar6;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(ulong *)(puVar5 + 0x16) = (ulong)uVar6;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  FUN_00258848(0x43000000);
  DAT_002915e8 = 0x80;
  iVar1 = FUN_00258848(0);
  DAT_00292684 = iVar1 << 0x10;
  FUN_00168750(0x295e90,0x10);
  uVar3 = FUN_002369a0(0x2bd7e0,0);
  uVar4 = FUN_0023bff0(uVar3,0x2c58a0);
  uVar2 = FUN_001be538(0x295e90,uVar4,0x2c58a0,0);
  puVar5[0xe] = uVar2;
  FUN_0023a998(uVar3);
  FUN_001a0460(puVar5 + 1,0x2bd7f8,0x10);
  puVar5[8] = uVar6;
  puVar5[7] = 0x3fa00000;
  return param_1;
}

