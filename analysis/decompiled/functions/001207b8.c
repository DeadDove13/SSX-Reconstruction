/* Ghidra pseudocode. PS2 address: 001207b8. Not validated source. */

void FUN_001207b8(undefined8 param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint auStack_50 [4];
  
  piVar3 = (int *)param_1;
  fVar5 = *(float *)(*piVar3 + 0x8308);
  if (piVar3[0x22a] != 0x1a) {
    fVar4 = DAT_002c19d8;
    if (piVar3[0x22c] == 0) {
      fVar4 = DAT_002c19e8 /
              ((float)*(byte *)(*(int *)(*piVar3 + 0x394) + 0x14) * DAT_002c19dc * DAT_002c19e0 +
              DAT_002c19e4);
    }
    if (fVar5 < fVar4) {
      piVar3[0x22a] = 0x1a;
    }
  }
  *(char *)param_2 = (char)piVar3[0x22a];
  if (piVar3[0x22a] == 0x1a) {
    if (((piVar3[0x22d] != 0) &&
        (fVar4 = DAT_002c19f8 /
                 ((float)*(byte *)(*(int *)(*piVar3 + 0x394) + 0x14) * DAT_002c19ec * DAT_002c19f0 +
                 DAT_002c19f4), fVar4 < *(float *)(*piVar3 + 0x834c))) && (fVar4 < fVar5)) {
      iVar1 = FUN_00109c50();
      piVar3[0x22a] = iVar1;
      piVar3[0x22d] = 0;
    }
    lVar2 = FUN_00120f18(param_1,auStack_50);
    if (lVar2 != 0) {
      *param_2 = *param_2 & 0xffffe7ff | (auStack_50[0] & 1) << 0xc |
                 ((auStack_50[0] ^ 1) & 1) << 0xb;
    }
    fVar5 = (float)FUN_0011f008(param_1,*piVar3 + 0x2d0);
    *param_2 = *param_2 & 0xfff03fff | ((int)(-fVar5 * 31.0) & 0x3fU) << 0xe;
    iVar1 = *piVar3;
    uStack_60 = *(undefined4 *)(iVar1 + 0x8330);
    uStack_5c = *(undefined4 *)(iVar1 + 0x8334);
    uStack_58 = *(undefined4 *)(iVar1 + 0x8338);
    uStack_54 = *(undefined4 *)(iVar1 + 0x833c);
    fVar5 = (float)FUN_0011ef20(param_1,&uStack_60);
    *param_2 = *param_2 & 0xfc0fffff | ((int)(-fVar5 * 31.0) & 0x3fU) << 0x14;
  }
  return;
}

