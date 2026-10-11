/* Ghidra pseudocode. PS2 address: 0017c4b8. Not validated source. */

void FUN_0017c4b8(int param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  
  iStack_c0 = (int)param_4;
  fVar7 = 1.0;
  if (param_4 == 0) {
    if (*(int *)(param_1 + 0xb38) == 4) {
      uVar5 = FUN_00154c60(0x27a598,*(undefined4 *)(*(int *)(param_1 + 0xb3c) + 0x46c));
      lVar4 = FUN_00154578(0x27a598,uVar5);
      bVar2 = lVar4 == 0;
    }
    else {
      lVar4 = FUN_00154808(0x27a598,*(undefined4 *)(*(int *)(param_1 + 0xb3c) + 0x46c),
                           *(undefined4 *)(*(int *)(param_1 + 0xb90) + 0x33c));
      bVar2 = lVar4 == 0;
      if (*(int *)(*(int *)(param_1 + 0xb3c) + 0x46c) == 1) {
        iVar1 = *(int *)(*(int *)(param_1 + 0xb90) + 0x33c);
        lVar4 = FUN_00154c60(0x27a598,0);
        lVar6 = FUN_00154c60(0x27a598,1);
        if ((lVar4 == lVar6) && (iVar3 = FUN_00155ab0(0x27a598,0), iVar1 == iVar3)) {
          bVar2 = true;
        }
      }
    }
  }
  else {
    lVar4 = FUN_00154788(0x27a598,*(undefined4 *)(*(int *)(param_1 + 0xb3c) + 0x46c),
                         *(undefined4 *)(*(int *)(param_1 + 0xb90) + 0x338));
    bVar2 = lVar4 == 0;
  }
  uVar8 = DAT_002c28e4;
  if ((bVar2) || (param_3 == 0)) {
    uStack_bc = DAT_002913c4;
    if (param_3 == 0) {
      if (bVar2) {
        uVar8 = 0;
        FUN_0011ed48(0x295e90,1);
        FUN_0011ed18(0x295e90,0xc);
      }
      else {
        uVar8 = 0x3f800000;
        FUN_0011ed48(0x295e90,0);
        FUN_0011ed18(0x295e90,0xd);
      }
    }
    else {
      FUN_0011ed48(0x295e90,3);
      FUN_0011ed18(0x295e90,0xd);
    }
    fStack_12c = fVar7 * DAT_002c28e8;
    uStack_100 = DAT_002c28ec;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_fc = DAT_002c28f0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_130 = uVar8;
    fStack_128 = fStack_12c;
    fStack_124 = fStack_12c;
    fStack_ec = fVar7;
    fStack_e8 = fVar7;
    fStack_e4 = fVar7;
    FUN_001bd888(&uStack_1b0,&uStack_130,&uStack_120,&uStack_110,&uStack_100,&uStack_f0,&uStack_e0,
                 &uStack_d0);
    uVar8 = DAT_002c28f4;
    FUN_0011ed28(DAT_002c28f4,0x295e90,1,0);
    FUN_0011ed38(0x295e90,0);
    FUN_001eed60(param_2 + 0x6cc,iStack_c0);
    if (iStack_c0 == 0) {
      FUN_001eee30(param_2 + 0x6cc);
    }
    FUN_0011ed38(0x295e90,1);
    FUN_0011ed28(uVar8,0x295e90,2,0);
    FUN_0011ed18(0x295e90,uStack_bc);
    FUN_001bd9c0(&uStack_1b0);
    DAT_002927f8 = uStack_138;
    DAT_00292780 = uStack_1b0;
    DAT_00292788 = uStack_1a8;
    DAT_00292790 = uStack_1a0;
    DAT_00292798 = uStack_198;
    DAT_002927a0 = uStack_190;
    DAT_002927a8 = uStack_188;
    DAT_002927b0 = uStack_180;
    DAT_002927b8 = uStack_178;
    DAT_002927c0 = uStack_170;
    DAT_002927c8 = uStack_168;
    DAT_002927d0 = uStack_160;
    DAT_002927d8 = uStack_158;
    DAT_002927e0 = uStack_150;
    DAT_002927e8 = uStack_148;
    DAT_002927f0 = uStack_140;
  }
  return;
}

