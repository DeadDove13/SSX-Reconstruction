/* Ghidra pseudocode. PS2 address: 0012fbe0. Not validated source. */

undefined8 FUN_0012fbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 auStack_50 [4];
  
  FUN_00185ef0(param_1,param_3);
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 8) = &DAT_002aa158;
  *(undefined **)(iVar3 + 0x18) = &DAT_002aa268;
  *(undefined **)(iVar3 + 0x1c) = &DAT_002aa248;
  *(undefined **)(iVar3 + 0x24) = &DAT_002aa228;
  *(undefined **)(iVar3 + 0x28) = &DAT_002aa208;
  *(undefined **)(iVar3 + 0x2c) = &DAT_002aa1e8;
  *(undefined **)(iVar3 + 0x30) = &DAT_002aa1c8;
  *(undefined **)(iVar3 + 0x34) = &DAT_002aa1a8;
  FUN_0012f5f8(iVar3 + 0x50);
  FUN_0012fdc8(param_1);
  *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(DAT_002859e4 + 0x5c);
  lVar1 = FUN_0023a448(0x2c4110,0x8590,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x8590);
  }
  uVar2 = FUN_00104c08(lVar1);
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  *(int *)(iVar3 + 0x40) = (int)uVar2;
  FUN_00105050(uVar2,1,0x27b87c);
  FUN_001e93b8(auStack_50);
  FUN_001e9070(param_2,*(undefined4 *)(iVar3 + 0x40),0,auStack_50[0]);
  return param_1;
}

