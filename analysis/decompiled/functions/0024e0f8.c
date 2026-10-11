/* Ghidra pseudocode. PS2 address: 0024e0f8. Not validated source. */

undefined4
FUN_0024e0f8(uint *param_1,int *param_2,int *param_3,undefined8 param_4,uint *param_5,
            undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  
  uVar2 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar2 & 0xf8ffffff | DAT_002a543c << 0x18;
  uVar3 = FUN_0024eaf0(1);
  *param_1 = (uint)uVar3;
  if (uVar3 == 0) {
    FUN_0024af98(0x2bf4d0);
    DAT_002a53c8 = 1;
    return 0;
  }
  if ((uVar3 & 0xc) == 0) {
    if (((uVar3 & 1) != 0) && (DAT_002a5478 != 0)) {
      iVar1 = 1;
      if (DAT_002a546c == 3) {
        iVar1 = 2;
      }
      *param_2 = iVar1;
    }
  }
  else if ((DAT_002a546c == 3) && (DAT_002a5474 != 0)) {
    *param_2 = 2;
  }
  else {
    iVar1 = FUN_0024eec8(2);
    *param_2 = iVar1;
  }
  iVar1 = *param_2;
  if (DAT_002a546c == 3) {
    uVar5 = 1;
    if (iVar1 == 1) {
      uVar5 = 2;
    }
    bVar6 = iVar1 == 2;
  }
  else {
    bVar6 = false;
    uVar5 = 1;
    if (iVar1 == 2) {
      uVar5 = 2;
    }
  }
  if (((DAT_002a546c == 3) && (DAT_002a5474 == 0)) && ((*param_1 & 3) != 0)) {
    iVar1 = FUN_0024eec8(1);
  }
  else {
    iVar1 = 0;
  }
  *param_3 = iVar1;
  if ((*param_1 & 0x10) != 0) {
    DAT_002a5500 = FUN_0024eec8(5);
  }
  if (((*param_1 & 8) != 0) || (((*param_1 & 1) != 0 && (DAT_002a5478 != 0)))) {
    if (DAT_002a5b70 == 0) {
      FUN_0024e828(param_4,param_6,DAT_002a5448 + -1,DAT_002a5448 + -1,0,0,DAT_002a5444);
    }
    else {
      FUN_0024e6a8(param_4,param_6,param_5,0,uVar5,bVar6,DAT_002a5458 + -1,DAT_002a545c + -1);
    }
  }
  if (DAT_002a53c8 != 0) {
    return 0;
  }
  puVar4 = (undefined4 *)param_4;
  if ((*param_1 & 4) != 0) {
    if (DAT_002a5b70 == 0) {
      FUN_0024e828(puVar4 + 2,param_6,DAT_002a5450 + -1,DAT_002a5450 + -1,0,0,DAT_002a544c);
    }
    else {
      FUN_0024e6a8(param_4,param_6,param_5,1,uVar5,bVar6,DAT_002a5460 + -1,DAT_002a5464 + -1);
    }
  }
  if (DAT_002a53c8 != 0) {
    return 0;
  }
  if ((*param_1 & 1) != 0) {
    if (DAT_002a5478 == 0) {
      uVar2 = *param_1;
      goto LAB_0024e444;
    }
    FUN_0024edc0(1);
  }
  uVar2 = *param_1;
LAB_0024e444:
  if ((uVar2 & 3) == 0) {
    *(undefined4 *)(&DAT_002a59f4 + DAT_002a5b38 * 0x140) = 1;
  }
  else {
    REG_DMAC_3_IPU_FROM_MADR = (&DAT_002a58bc)[DAT_002a5b38 * 0x50] & 0xfffffff | 0x80000000;
    REG_DMAC_3_IPU_FROM_QWC = 0x30;
    REG_DMAC_3_IPU_FROM_CHCR = 0x100;
    FUN_0024e998();
    FUN_0024e968((*param_1 & 1) << 0x1b | DAT_002a5500 << 0x10 | DAT_002a54fc << 0x1a | 0x20000000U
                 | *param_3 << 0x19);
  }
  DAT_002a54fc = 0;
  if (DAT_002a53c8 != 0) {
    DAT_002a54fc = 0;
    return 0;
  }
  if ((((*param_1 & 1) != 0) || (DAT_002a54fc = 1, (*param_1 & 1) != 0)) && (DAT_002a5478 == 0)) {
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
  }
  if (DAT_002a543c == 2) {
    if ((*param_1 & 9) == 0) {
      *puVar4 = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      bVar6 = DAT_002a546c == 3;
      puVar4[1] = 0;
      if (bVar6) {
        *param_2 = 2;
      }
      else {
        *param_2 = 1;
        *param_5 = (uint)(DAT_002a546c == 2);
      }
      return 1;
    }
    return 1;
  }
  return 1;
}

