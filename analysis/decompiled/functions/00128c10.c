/* Ghidra pseudocode. PS2 address: 00128c10. Not validated source. */

void FUN_00128c10(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  undefined4 uVar8;
  float fVar9;
  float afStack_480 [256];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  pfVar5 = afStack_480;
  pfVar7 = afStack_480;
  iVar4 = 0x7f;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  iVar4 = *(int *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x28);
  if (0 < iVar4) {
    uVar8 = *(undefined4 *)(param_1 + 0x3c);
    do {
      *pfVar5 = (float)uVar8;
      iVar4 = iVar4 + -1;
      pfVar5[1] = (float)*(undefined4 *)(param_1 + 0x40);
      pfVar5 = pfVar5 + 2;
    } while (iVar4 != 0);
  }
  uStack_80 = *(undefined4 *)(iVar1 + 0xd0);
  uStack_7c = *(undefined4 *)(iVar1 + 0xd4);
  uStack_78 = *(undefined4 *)(iVar1 + 0xd8);
  piVar2 = *(int **)(*(int *)(iVar1 + 0xcc) * 8 + DAT_00299ce0);
  uStack_74 = 0x3f800000;
  uStack_70 = *(undefined4 *)(iVar1 + 0xdc);
  uStack_6c = *(undefined4 *)(iVar1 + 0xe0);
  uStack_68 = *(undefined4 *)(iVar1 + 0xe4);
  uStack_64 = 0x3f800000;
  lVar6 = FUN_001be110(0x295e90,&uStack_80,&uStack_70);
  if (lVar6 == 1) {
    iVar4 = *piVar2;
    if (0 < iVar4) {
      iVar1 = piVar2[9];
      do {
        puVar3 = *(undefined8 **)(iVar1 + 0x34);
        fVar9 = *pfVar7;
        *puVar3 = 0x3000000005000001;
        pfVar5 = pfVar7 + 1;
        pfVar7 = pfVar7 + 2;
        iVar4 = iVar4 + -1;
        puVar3[1] = (long)(int)(fVar9 * 4096.0) | (long)(int)(*pfVar5 * 4096.0) << 0x20;
      } while (iVar4 != 0);
    }
  }
  else {
    FUN_001cb238(0x2913b0,5,0);
    FUN_001be6d8(0x295e90,piVar2,DAT_00299ce8,*(int *)(param_1 + 0x28),
                 *(int *)(param_1 + 0x28) + 0x40,0,afStack_480);
    FUN_001cb238(0x2913b0,0,0);
  }
  return;
}

