/* Ghidra pseudocode. PS2 address: 001b1f60. Not validated source. */

void FUN_001b1f60(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  
  iVar7 = DAT_0027ba88;
  *(undefined4 *)(param_1 + 0x104) = 0x43a00000;
  *(undefined2 *)(param_1 + 0x44) = 0;
  if ((iVar7 == 2) || (iVar7 == 8)) {
    uVar4 = FUN_00234e80(DAT_002852fc,0x4e);
    FUN_0019a7f8(0x28f670,uVar4);
    uVar3 = FUN_00234e80(DAT_002852fc,0x52);
    *(undefined4 *)(param_1 + 0x108) = uVar3;
  }
  else {
    iVar7 = FUN_00154078(0x27a598);
    FUN_0019a7f8(0x28f670,(&DAT_0028af20)[iVar7]);
    uVar3 = FUN_00234e80(DAT_002852fc,*(undefined4 *)(&UNK_002b6440 + iVar7 * 4));
    *(undefined4 *)(param_1 + 0x108) = uVar3;
  }
  iVar7 = 0;
  uVar4 = FUN_00234e80(DAT_002852fc,0x51);
  FUN_0019a7f8(0x28f270,uVar4);
  *(int *)(param_1 + 4) = DAT_0027b810;
  if (0 < DAT_0027b810) {
    puVar9 = &DAT_0028b1c0;
    puVar8 = &DAT_0028b270;
    pcVar6 = &DAT_0027b868;
    puVar5 = &DAT_0027b818;
    do {
      FUN_0019a830(puVar8,puVar5);
      iVar7 = iVar7 + 1;
      cVar1 = *pcVar6;
      uVar3 = 0xffffffff;
      pcVar6 = pcVar6 + 0x68;
      puVar5 = puVar5 + 0x68;
      if (cVar1 != -1) {
        uVar3 = 0;
      }
      bVar2 = iVar7 < DAT_0027b810;
      *puVar9 = uVar3;
      puVar8 = puVar8 + 0x80;
      puVar9 = puVar9 + 1;
    } while (bVar2);
  }
  return;
}

