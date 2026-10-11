/* Ghidra pseudocode. PS2 address: 00156b88. Not validated source. */

void FUN_00156b88(undefined8 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar9 = (int)param_1;
  FUN_00156358(param_1,&DAT_0027c380 + param_2 * 0xf,iVar9 + param_2 * 0x18 + 0xc);
  iVar5 = 10;
  puVar8 = (undefined4 *)(iVar9 + param_2 * 0xc4 + 0xcc);
  puVar3 = puVar8;
  do {
    *(undefined1 *)((int)puVar3 + 0x32) = 0;
    iVar5 = iVar5 + -1;
    *(undefined1 *)((int)puVar3 + 0x33) = 0;
    *(undefined1 *)((int)puVar3 + 0x31) = 3;
    *(undefined1 *)(puVar3 + 0xc) = 3;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar5);
  *(undefined1 *)((int)puVar8 + 0x33) = 1;
  puVar8[5] = 8;
  *(undefined1 *)((int)puVar8 + 0x32) = 1;
  puVar8[1] = 0;
  puVar8[2] = 0;
  uVar7 = 0;
  *puVar8 = 0;
  piVar6 = (int *)(&DAT_0027c92c + param_2 * 0xdc);
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  do {
    if (*piVar6 == 0) {
      puVar8[0x17] = puVar8[0x17] | 1 << (uVar7 & 0x1f);
    }
    uVar7 = uVar7 + 1;
    piVar6 = piVar6 + 5;
  } while ((int)uVar7 < 0xb);
  uVar7 = 0;
  piVar6 = (int *)(&DAT_0027ddc4 + param_2 * 0x20);
  do {
    if (*piVar6 == 0) {
      puVar8[0x18] = puVar8[0x18] | 1 << (uVar7 & 0x1f);
    }
    uVar7 = uVar7 + 1;
    piVar6 = piVar6 + 2;
  } while ((int)uVar7 < 4);
  FUN_00159178(param_1,puVar8 + 3,param_2 * 0x3c + 0x27c388);
  fVar2 = DAT_002c245c;
  iVar5 = 0;
  do {
    pbVar4 = (byte *)((int)(puVar8 + 3) + iVar5);
    iVar1 = iVar5 + 0x10;
    iVar5 = iVar5 + 1;
    *(char *)((int)puVar8 + iVar1) = (char)(int)((float)*pbVar4 * fVar2 + 0.5);
  } while (iVar5 < 4);
  iVar5 = 0x17;
  do {
    *(undefined2 *)((int)puVar8 + 0x66) = 0;
    iVar5 = iVar5 + -1;
    *(undefined2 *)(puVar8 + 0x19) = 8;
    puVar8 = puVar8 + 1;
  } while (-1 < iVar5);
  *(undefined4 *)(iVar9 + 0x1664) = 1;
  return;
}

