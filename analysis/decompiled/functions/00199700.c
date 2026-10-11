/* Ghidra pseudocode. PS2 address: 00199700. Not validated source. */

void FUN_00199700(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pbVar2 = (byte *)*(undefined4 *)param_2;
  uVar3 = FUN_00198af0();
  *(undefined4 *)(pbVar2 + 4) = uVar3;
  uVar3 = FUN_00195598(param_1);
  *(undefined4 *)(pbVar2 + 0xc) = uVar3;
  iVar12 = (int)param_1;
  uVar3 = *(undefined4 *)(iVar12 + 0x30);
  *(undefined4 *)(pbVar2 + 0x14) = *(undefined4 *)(iVar12 + 0x38);
  *(undefined4 *)(pbVar2 + 0x10) = uVar3;
  iVar10 = DAT_002859e4;
  *(undefined4 *)(pbVar2 + 0x18) = *(undefined4 *)(iVar12 + 0x24);
  *(undefined4 *)(pbVar2 + 0x1c) = *(undefined4 *)(iVar12 + 0x28);
  pbVar5 = pbVar2 + 0x24;
  iVar6 = 3;
  *(undefined4 *)(pbVar2 + 0x20) = *(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x80);
  puVar8 = (undefined4 *)(iVar12 + 0x394c);
  do {
    uVar3 = *puVar8;
    iVar6 = iVar6 + -1;
    puVar8 = puVar8 + 1;
    *(undefined4 *)pbVar5 = uVar3;
    pbVar5 = pbVar5 + 4;
  } while (iVar6 != -1);
  *(undefined4 *)param_2 = pbVar2 + 0x58;
  pbVar2[8] = 3;
  pbVar2[9] = 0;
  pbVar2[10] = 0x30;
  pbVar2[0xb] = 0x12;
  iVar6 = 0;
  iVar10 = 0;
  do {
    iVar9 = 0;
    piVar4 = (int *)(iVar12 + 0x394c + iVar6);
    iVar11 = iVar10 + 1;
    if (0 < *piVar4) {
      puVar8 = (undefined4 *)(iVar10 * 0x40 + iVar12 + 0x3e68);
      uVar3 = *puVar8;
      while( true ) {
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 1;
        FUN_00198848(uVar3,param_2);
        if (*piVar4 <= iVar9) break;
        uVar3 = *puVar8;
      }
    }
    iVar6 = iVar11 * 4;
    iVar10 = iVar11;
  } while (iVar11 < 4);
  piVar4 = (int *)(iVar12 + 0x392c);
  iVar10 = 3;
  do {
    if (*piVar4 != 0) {
      FUN_00198620(*piVar4,param_2);
    }
    iVar10 = iVar10 + -1;
    piVar4 = piVar4 + 1;
  } while (-1 < iVar10);
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  uVar7 = 0;
  iVar10 = 0;
  pbVar5 = pbVar2;
  if (*(uint *)(pbVar2 + 4) != 0) {
    do {
      bVar1 = *pbVar5;
      uVar7 = uVar7 + 1;
      pbVar5 = pbVar5 + 1;
      iVar10 = iVar10 + (uint)bVar1;
    } while (uVar7 < *(uint *)(pbVar2 + 4));
  }
  *(int *)pbVar2 = iVar10;
  return;
}

