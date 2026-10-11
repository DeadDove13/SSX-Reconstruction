/* Ghidra pseudocode. PS2 address: 001d7ce8. Not validated source. */

undefined4 * FUN_001d7ce8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 0x21;
  uVar2 = FUN_00237408(0x2b77a0,0x10);
  puVar4 = &DAT_00296648;
  puVar5 = param_1;
  do {
    uVar3 = FUN_0023bff0(uVar2,puVar4);
    iVar6 = iVar6 + -1;
    uVar1 = FUN_001be538(0x295e90,uVar3,puVar4,*(undefined4 *)(puVar4 + 8));
    puVar4 = puVar4 + 0xc;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
  } while (-1 < iVar6);
  FUN_0023a998(uVar2);
  return param_1;
}

