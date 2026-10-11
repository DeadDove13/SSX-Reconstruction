/* Ghidra pseudocode. PS2 address: 00256890. Not validated source. */

int FUN_00256890(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int unaff_retaddr;
  undefined8 auStack_700 [94];
  undefined8 auStack_410 [94];
  undefined8 *puStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined8 *puStack_114;
  undefined8 **ppuStack_110;
  
  uStack_11c = param_1;
  iStack_118 = (*(code *)PTR_FUN_002a5d2c)();
  puStack_114 = auStack_410;
  puStack_120 = auStack_700;
  if (*(int *)(iStack_118 + 8) == 0) {
    puStack_120 = auStack_700;
    FUN_00255b18();
  }
  ppuStack_110 = &puStack_120;
  *(undefined4 *)(iStack_118 + 0xc) = uStack_11c;
  puStack_120 = (undefined8 *)FUN_00259668(0x25693c,puStack_120);
  if (puStack_120 == (undefined8 *)0x0) {
    FUN_00255b18();
  }
  *(BADSPACEBASE **)puStack_120 = register0x000001d0;
  puVar1 = puStack_114;
  puVar4 = puStack_120;
  do {
    puVar3 = puVar4;
    puVar2 = puVar1;
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    *puVar2 = *puVar3;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar4 = puVar3 + 4;
    puVar1 = puVar2 + 4;
  } while (puVar4 != puStack_120 + 0x5c);
  uVar5 = puVar3[5];
  puVar2[4] = *puVar4;
  puVar2[5] = uVar5;
  FUN_00256380(iStack_118,unaff_retaddr + -1,puStack_114,ppuStack_110);
  return iStack_118;
}

