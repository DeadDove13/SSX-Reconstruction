/* Ghidra pseudocode. PS2 address: 00171540. Not validated source. */

undefined8 FUN_00171540(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  FUN_0017c018();
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0xb3c);
  *(undefined4 *)(iVar4 + 0xba0) = 0;
  *(undefined4 *)(iVar4 + 0xba4) = 0;
  *(undefined **)(iVar4 + 4) = &DAT_002b08b0;
  FUN_001e9528(iVar1 + 0x40,iVar1 + 0x10,iVar1 + 0x28);
  *(undefined4 *)(iVar4 + 0xb38) = 4;
  *(undefined4 *)(iVar4 + 0xb90) = 0;
  *(undefined4 *)(iVar4 + 0xba8) = DAT_002859d4;
  DAT_002c4910 = 0;
  lVar3 = FUN_0023a448(0x2c4918,0x8c,0x10);
  if (lVar3 != 0) {
    FUN_0023bbd0(lVar3,0,0x8c);
  }
  uVar2 = FUN_0017a1a8(lVar3,*(undefined4 *)(iVar4 + 0xb3c),param_1,1,1,0,0xffffffffffffffd8,0xf);
  *(undefined4 *)(iVar4 + 0xba4) = uVar2;
  return param_1;
}

