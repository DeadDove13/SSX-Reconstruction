/* Ghidra pseudocode. PS2 address: 002566b0. Not validated source. */

int FUN_002566b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int unaff_retaddr;
  undefined8 auStack_6f0 [94];
  undefined8 auStack_400 [94];
  undefined8 *puStack_110;
  int iStack_10c;
  undefined8 *puStack_108;
  undefined8 **ppuStack_104;
  
  iStack_10c = (*(code *)PTR_FUN_002a5d2c)();
  puStack_108 = auStack_400;
  puStack_110 = auStack_6f0;
  if (*(int *)(iStack_10c + 8) == 0) {
    puStack_110 = auStack_6f0;
    FUN_00255b18();
  }
  ppuStack_104 = &puStack_110;
  puStack_110 = (undefined8 *)FUN_00259668(0x256754,puStack_110);
  if (puStack_110 == (undefined8 *)0x0) {
    FUN_00255b18();
  }
  *(BADSPACEBASE **)puStack_110 = register0x000001d0;
  puVar1 = puStack_108;
  puVar4 = puStack_110;
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
  } while (puVar4 != puStack_110 + 0x5c);
  uVar5 = puVar3[5];
  puVar2[4] = *puVar4;
  puVar2[5] = uVar5;
  FUN_00256380(iStack_10c,unaff_retaddr + -1,puStack_108,ppuStack_104);
  return iStack_10c;
}

