/* Ghidra pseudocode. PS2 address: 001e10c8. Not validated source. */

undefined4 FUN_001e10c8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + param_2 * 0xf0 + 0x10) == 0)) {
    uVar1 = 0;
  }
  else {
    param_1 = param_1 + param_2 * 0xf0 + 0x10;
    iVar2 = *(int *)(param_1 + 4);
    FUN_0011ecd8(0x295e90,*(undefined4 *)(*(int *)(DAT_002859e4 + 0x7c) + 0x70),1);
    uStack_cc = DAT_002c3700;
    uStack_d0 = DAT_002c3700;
    fStack_a0 = *(float *)(param_1 + 0xe0) * DAT_002c36fc + DAT_002c3704;
    uStack_b0 = 0x3f000000;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_ac = 0x3f000000;
    uStack_9c = DAT_002c3708;
    uStack_98 = DAT_002c370c;
    uStack_94 = DAT_002c3710;
    FUN_0011ed78(0x295e90,param_1 + 0xb0,&uStack_d0,&uStack_c0,&uStack_b0,&fStack_a0);
    FUN_0011ecd8(0x295e90,*(undefined4 *)(param_1 + 0xa0),1);
    if (iVar2 != 0) {
      uStack_d0 = *(undefined4 *)(iVar2 + 0x44);
      while( true ) {
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_90 = 0x3f800000;
        uStack_8c = 0x3f800000;
        uStack_80 = *(undefined4 *)(iVar2 + 0x50);
        uStack_7c = *(undefined4 *)(iVar2 + 0x54);
        uStack_78 = *(undefined4 *)(iVar2 + 0x58);
        uStack_74 = *(undefined4 *)(iVar2 + 0x5c);
        uStack_cc = uStack_d0;
        FUN_0011ed78(0x295e90,iVar2 + 0x10,&uStack_d0,&uStack_c0,&uStack_90,&uStack_80);
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 == 0) break;
        uStack_d0 = *(undefined4 *)(iVar2 + 0x44);
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

