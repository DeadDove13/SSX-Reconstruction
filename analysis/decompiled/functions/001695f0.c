/* Ghidra pseudocode. PS2 address: 001695f0. Not validated source. */

void FUN_001695f0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  iVar1 = (int)param_1;
  if ((*(uint *)(iVar1 + 0x98) & 1) != 0) {
    uStack_98 = *(undefined4 *)(param_2 + 1);
    uStack_94 = *(undefined4 *)((int)param_2 + 0xc);
    uStack_88 = *(undefined4 *)(param_2 + 3);
    uStack_84 = *(undefined4 *)((int)param_2 + 0x1c);
    uStack_a0 = (undefined4)*param_2;
    uStack_9c = (undefined4)((ulong)*param_2 >> 0x20);
    uStack_78 = *(undefined4 *)(param_2 + 5);
    uStack_74 = *(undefined4 *)((int)param_2 + 0x2c);
    uStack_90 = (undefined4)param_2[2];
    uStack_8c = (undefined4)((ulong)param_2[2] >> 0x20);
    uStack_68 = *(undefined4 *)(param_2 + 7);
    uStack_64 = *(undefined4 *)((int)param_2 + 0x3c);
    uStack_80 = (undefined4)param_2[4];
    uStack_7c = (undefined4)((ulong)param_2[4] >> 0x20);
    uStack_70 = (undefined4)param_2[6];
    uStack_6c = (undefined4)((ulong)param_2[6] >> 0x20);
    uStack_58 = *(undefined4 *)(param_2 + 9);
    uStack_54 = *(undefined4 *)((int)param_2 + 0x4c);
    uStack_50 = *(undefined4 *)(param_2 + 10);
    uStack_4c = *(undefined4 *)((int)param_2 + 0x54);
    uStack_48 = *(undefined4 *)(param_2 + 0xb);
    uStack_44 = *(undefined4 *)((int)param_2 + 0x5c);
    uStack_60 = (undefined4)param_2[8];
    uStack_5c = (undefined4)((ulong)param_2[8] >> 0x20);
    uStack_40 = *(undefined4 *)(param_2 + 0xc);
    uStack_3c = *(undefined4 *)((int)param_2 + 100);
    uStack_38 = *(undefined4 *)(param_2 + 0xd);
    uStack_34 = *(undefined4 *)((int)param_2 + 0x6c);
    uStack_30 = *(undefined4 *)(param_2 + 0xe);
    uStack_2c = *(undefined4 *)((int)param_2 + 0x74);
    uStack_28 = *(undefined4 *)(param_2 + 0xf);
    fStack_24 = *(float *)((int)param_2 + 0x7c);
    if (*(int *)(iVar1 + 0xb0) != 0) {
      uStack_30 = *(undefined4 *)(iVar1 + 0xa4);
      uStack_2c = *(undefined4 *)(iVar1 + 0xa8);
      uStack_28 = *(undefined4 *)(iVar1 + 0xac);
      fStack_24 = *(float *)(iVar1 + 0xa0);
    }
    fStack_24 = fStack_24 * *(float *)(iVar1 + 0x9c);
    if ((*(uint *)(iVar1 + 0x98) & 8) != 0) {
      fStack_24 = fStack_24 * DAT_002c27a8;
    }
    if (*(int *)(iVar1 + 0x24c) == 0) {
      FUN_001e8420(0x299cc8,*(int *)(iVar1 + 0x4c) + 0xc0,iVar1 + 0x50,&uStack_a0);
    }
    else {
      FUN_00169790(param_1);
      FUN_001e8420(0x299cc8,iVar1 + *(int *)(iVar1 + 0x278) * 4 + 0x250,iVar1 + 0x50,&uStack_a0);
    }
  }
  return;
}

