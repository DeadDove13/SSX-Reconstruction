/* Ghidra pseudocode. PS2 address: 00223058. Not validated source. */

void FUN_00223058(int param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  short *psVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  
  iVar7 = 0;
  while ((iVar7 < 0xa2 && (lVar3 = FUN_00221a60(param_1 + 0x50,iVar7), lVar3 != 0))) {
    piVar5 = (int *)lVar3;
    iVar1 = *piVar5;
    uStack_f0 = *(undefined4 *)(iVar1 + 0xc);
    uStack_ec = *(undefined4 *)(iVar1 + 0x10);
    uStack_e8 = *(undefined4 *)(iVar1 + 0x14);
    uStack_e4 = 0x3f800000;
    uStack_e0 = *(undefined4 *)(iVar1 + 0x18);
    uStack_dc = *(undefined4 *)(iVar1 + 0x1c);
    uStack_d8 = *(undefined4 *)(iVar1 + 0x20);
    uStack_c4 = 0x3f800000;
    uStack_d4 = 0x3f800000;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    uStack_c8 = uStack_d8;
    lVar3 = FUN_001c5b08(0x2913b0,&uStack_f0,&uStack_e0);
    if (lVar3 == 1) {
      piVar5[9] = 0;
      iVar7 = iVar7 + 1;
    }
    else {
      piVar5[9] = 1;
      uVar6 = 0;
      piVar5[8] = 0;
      iVar7 = iVar7 + 1;
      while ((int)uVar6 <
             (int)*(short *)(DAT_00299cc8 + 0x42) * (int)*(short *)(DAT_00299cc8 + 0x42)) {
        psVar4 = (short *)(piVar5[1] + uVar6 * 0x30);
        bVar2 = false;
        if ((*psVar4 == 0) && (psVar4[2] == 0)) {
          bVar2 = *(int *)(psVar4 + 4) == 0;
        }
        if (bVar2) {
          uVar6 = uVar6 + 1;
        }
        else {
          uStack_d0 = *(undefined4 *)(psVar4 + 0xc);
          uStack_cc = *(undefined4 *)(psVar4 + 0xe);
          uStack_c8 = *(undefined4 *)(psVar4 + 0x10);
          uStack_c4 = 0x3f800000;
          uStack_c0 = *(undefined4 *)(psVar4 + 0x12);
          uStack_bc = *(undefined4 *)(psVar4 + 0x14);
          uStack_b8 = *(undefined4 *)(psVar4 + 0x16);
          uStack_b4 = 0x3f800000;
          lVar3 = FUN_001c5b08(0x2913b0,&uStack_d0,&uStack_c0);
          if (lVar3 != 1) {
            piVar5[8] = piVar5[8] | 1 << (uVar6 & 0x1f);
          }
          uVar6 = uVar6 + 1;
        }
      }
    }
  }
  return;
}

