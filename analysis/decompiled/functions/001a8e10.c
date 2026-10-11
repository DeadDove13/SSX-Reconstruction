/* Ghidra pseudocode. PS2 address: 001a8e10. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001a8ebc) */
/* WARNING: Removing unreachable block (ram,0x001a8ec4) */

byte FUN_001a8e10(float param_1,float param_2,float param_3,float param_4,float param_5,
                 undefined8 param_6,long param_7,int param_8,byte param_9)

{
  int iVar1;
  byte bVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint auStack_110 [12];
  
  puVar3 = auStack_110;
  fVar11 = 0.0;
  if (param_7 == 0) {
    puVar8 = &DAT_0028ff60;
  }
  else {
    puVar8 = &DAT_0028ffd8;
  }
  fVar9 = 0.0;
  fVar13 = 0.0;
  iVar7 = 0;
  do {
    iVar6 = iVar7;
    iVar1 = param_8 / 10;
    param_8 = param_8 % 10;
    fVar10 = (float)puVar8[param_8 * 3 + 1];
    fVar14 = fVar10;
    if (fVar10 <= fVar13) {
      fVar14 = fVar13;
    }
    fVar12 = (float)puVar8[param_8 * 3 + 2];
    fVar11 = fVar11 + fVar10;
    if (fVar12 <= fVar9) {
      fVar12 = fVar9;
    }
    *puVar3 = param_8;
    iVar7 = iVar6 + 1;
    puVar3 = puVar3 + 1;
    bVar2 = iVar7 < 0xb;
    fVar9 = fVar12;
    fVar13 = fVar14;
    param_8 = iVar1;
  } while (0 < iVar1);
  if ((param_9 & 0x40) != 0) {
    fVar11 = (float)iVar7 * fVar14;
    fVar14 = fVar14 * param_3;
  }
  if ((param_9 & 0x20) == 0) {
    if ((param_9 & 8) != 0) {
      param_1 = param_1 - fVar11 * param_3;
    }
    bVar2 = param_9 & 4;
    if (bVar2 != 0) {
      param_2 = param_2 - fVar12 * param_4;
    }
  }
  else {
    param_2 = param_2 - fVar12 * param_4 * 0.5;
    param_1 = param_1 - fVar11 * param_3 * 0.5;
  }
  uVar5 = 0;
  if (0 < iVar7) {
    fVar11 = 2.0;
    fVar9 = 0.5;
    puVar3 = auStack_110 + iVar6;
    fVar13 = 200.0;
    do {
      puVar4 = puVar8 + *puVar3 * 3;
      fVar10 = (float)(int)(uVar5 ^ *puVar3) + fVar11;
      if (4.0 < fVar10) {
        fVar10 = fVar10 * fVar9;
      }
      fVar10 = param_2 + fVar10 * fVar13 * param_5;
      if ((param_9 & 0x40) == 0) {
        fVar12 = param_1 + param_3 * (float)puVar4[1];
        FUN_001a90b8(param_1,fVar10,param_3,param_4,param_6,*puVar4,0);
      }
      else {
        fVar12 = param_1 + fVar14;
        FUN_001a90b8(param_1 + (fVar14 - param_3 * (float)puVar4[1]) * fVar9,fVar10,param_3,param_4,
                     param_6,*puVar4,0);
      }
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + -1;
      bVar2 = 0;
      param_1 = fVar12;
    } while ((int)uVar5 < iVar7);
  }
  return bVar2;
}

