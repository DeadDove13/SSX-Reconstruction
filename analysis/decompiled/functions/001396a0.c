/* Ghidra pseudocode. PS2 address: 001396a0. Not validated source. */

void FUN_001396a0(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar5 = *param_1;
  iVar1 = *(int *)(*(int *)(iVar5 + 0x6cf4) + 8);
  if (iVar1 == 0x34) {
    if ((*param_2 & 0xc) == 0) {
      FUN_0010b330(iVar5,3);
      iVar5 = *param_1;
    }
    else {
      *(uint *)(*(int *)(iVar5 + 0x8584) + 0x718) = (int)*param_2 >> 3 & 1;
      FUN_0010b330(iVar5,0xe);
      iVar5 = *param_1;
    }
  }
  else if (iVar1 == 0x37) {
    FUN_0010b330(iVar5,5);
    iVar5 = *param_1;
  }
  else {
    lVar4 = FUN_00150f10(*(int *)(iVar5 + 0x6cf4));
    if (lVar4 != 0) {
      if (iVar1 == 0x6f) {
        FUN_0014cd18(*(undefined4 *)(*param_1 + 0x6cf4),0x37,0,5);
        iVar5 = *param_1;
        goto LAB_0013977c;
      }
      FUN_0014cd18(*(undefined4 *)(*param_1 + 0x6cf4),0x34,0,5);
    }
    iVar5 = *param_1;
  }
LAB_0013977c:
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xd0));
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x110));
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar6,auVar7);
  _vaddabc(auVar6,auVar6);
  _vmaddabc(auVar8,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  if (auVar6._0_4_ < 0.0) {
    FUN_001110f0(-((float)((int)(*param_2 << 0x12) >> 0x1a) / 31.0));
    uVar3 = *param_2;
  }
  else {
    FUN_001110f0((float)((int)(*param_2 << 0x12) >> 0x1a) / 31.0);
    uVar3 = *param_2;
  }
  FUN_00111248(0,(float)((int)(uVar3 << 6) >> 0x1a) / 31.0,*param_1);
  uVar2 = DAT_002c1d48;
  if ((*param_2 & 1) == 0) {
    if (*(int *)(*param_1 + 0x210) != 0) {
      return;
    }
    iVar5 = *param_1;
  }
  else {
    iVar5 = *param_1;
  }
  *(uint *)(iVar5 + 0x284) = (*param_2 ^ 1) & 1;
  FUN_00107070(uVar2);
  return;
}

