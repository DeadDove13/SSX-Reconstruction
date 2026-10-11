/* Ghidra pseudocode. PS2 address: 0023c298. Not validated source. */

undefined4 FUN_0023c298(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar8 = *(uint **)(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0x50);
  if ((((int)(*(uint *)(param_1 + 0x48) - (int)puVar8) < 8) ||
      (uVar7 = puVar8[1], (uVar7 & 0xff000000) != 0)) ||
     (*(uint *)(param_1 + 0x48) < (int)puVar8 + uVar7)) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  do {
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        puVar5 = (uint *)(iVar6 * 0xc + *(int *)(param_1 + 0x10));
        iVar6 = iVar6 + 1;
        if ((*puVar8 & *puVar5) == puVar5[1]) {
          uVar4 = puVar5[2];
          goto LAB_0023c344;
        }
      } while (iVar6 < iVar3);
    }
    uVar4 = 0xfffffffe;
LAB_0023c344:
    if ((int)uVar4 < 0) {
      FUN_0023ee58(*(undefined4 *)(param_1 + 4));
      bVar2 = *(int *)(iVar1 + 4) == 4;
      if (!bVar2) {
        iVar3 = *(int *)(param_1 + 0x44);
        *puVar8 = 0xfffffffe;
        *(uint *)(param_1 + 0x44) = iVar3 + uVar7;
      }
      FUN_0023ea60(*(undefined4 *)(param_1 + 4));
    }
    else {
      puVar8[1] = uVar7 | uVar4 << 0x18;
      FUN_0023ee58(*(undefined4 *)(param_1 + 4));
      bVar2 = *(int *)(iVar1 + 4) == 4;
      if (!bVar2) {
        iVar3 = *(int *)(param_1 + 0x18) + uVar4 * 0x10 + -0x10;
        uVar4 = *(int *)(iVar3 + 8) + uVar7;
        *(uint *)(iVar3 + 8) = uVar4;
        if (uVar4 == uVar7) {
          *(uint **)(iVar3 + 0xc) = puVar8;
        }
        iVar3 = *(int *)(param_1 + 0x3c);
        iVar6 = iVar3 + uVar7;
        *(int *)(param_1 + 0x3c) = iVar6;
        *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar7;
        if ((iVar3 < *(int *)(param_1 + 0x34)) && (*(int *)(param_1 + 0x34) <= iVar6)) {
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
      }
      FUN_0023ea60(*(undefined4 *)(param_1 + 4));
    }
    if (bVar2) {
      return 0;
    }
    if (*puVar8 == *(uint *)(iVar1 + 0x5c)) {
      return 1;
    }
    puVar8 = *(uint **)(param_1 + 0x44);
    if ((int)(*(uint *)(param_1 + 0x48) - (int)puVar8) < 8) {
      return 0;
    }
    uVar7 = puVar8[1];
    if ((uVar7 & 0xff000000) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x48) < (int)puVar8 + uVar7) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x14);
  } while( true );
}

