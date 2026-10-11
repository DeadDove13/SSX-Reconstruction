/* Ghidra pseudocode. PS2 address: 0015e500. Not validated source. */

void FUN_0015e500(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int aiStack_140 [8];
  int aiStack_120 [8];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  
  iVar9 = 7;
  FUN_0015ea60();
  uVar12 = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x200) = 1;
  FUN_00163e38(&uStack_150,param_2,0x2c4728,0x2c4730);
  *(ulong *)(param_1 + 0x204) = CONCAT44(uStack_14c,uStack_150);
  *(undefined4 *)(param_1 + 0x204) = uVar12;
  FUN_0015f338(&uStack_150,2);
  iStack_b4 = -1;
  iStack_c0 = -1;
  iStack_bc = -1;
  iStack_b8 = -1;
  FUN_0015e1c8(&iStack_c0,&iStack_bc,&iStack_b8,&iStack_b4);
  piVar6 = aiStack_120;
  piVar5 = aiStack_140;
  piVar3 = piVar6;
  do {
    *piVar5 = -1;
    iVar9 = iVar9 + -1;
    *piVar3 = 0;
    piVar5 = piVar5 + 1;
    piVar3 = piVar3 + 1;
  } while (-1 < iVar9);
  iVar9 = *(int *)(param_1 + 0x208);
  iVar10 = 0;
  piVar3 = piVar6 + iStack_c0;
  piVar5 = (int *)(iVar9 + 0x10);
  iVar7 = 0;
  do {
    if (*piVar5 != 0) {
      iVar11 = *(int *)(iVar9 + 0x14 + iVar7);
      if (iVar11 == 0) {
        *piVar3 = 1;
      }
      else {
        if ((iVar11 == 10) && (iStack_bc != -1)) {
          iVar1 = iStack_bc << 2;
        }
        else if (((iVar11 != 0xb) || (iVar1 = iStack_b8 << 2, iStack_b8 == -1)) &&
                ((iVar11 != 0xc || (iVar1 = iStack_b4 << 2, iStack_b4 == -1)))) goto LAB_0015e684;
        *(undefined4 *)((int)piVar6 + iVar1) = 1;
      }
    }
LAB_0015e684:
    iVar10 = iVar10 + 1;
    piVar5 = piVar5 + 0xb;
    iVar7 = iVar7 + 0x2c;
  } while (iVar10 < 8);
  piVar5 = aiStack_140;
  for (iVar9 = 0; iVar9 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c); iVar9 = iVar9 + 1) {
    iVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    if (iVar7 == 0) {
      *piVar5 = iVar9;
      piVar5 = piVar5 + 1;
    }
  }
  iVar10 = 0;
  iVar7 = 0;
  iVar9 = *(int *)(param_1 + 0x208);
  do {
    if (*(int *)(iVar9 + iVar7 * 0x2c + 0x10) == 0) {
LAB_0015ea0c:
      *(undefined4 *)(iVar7 * 0x40 + param_1 + 0x220) = 0;
    }
    else {
      iVar11 = -1;
      switch(*(undefined4 *)(iVar9 + iVar7 * 0x2c + 0x14)) {
      case 0:
        iVar9 = iStack_c0;
        break;
      default:
        goto switchD_0015e724_caseD_1;
      case 10:
        iVar9 = iStack_bc;
        break;
      case 0xb:
        iVar9 = iStack_b8;
        break;
      case 0xc:
        iVar9 = iStack_b4;
        break;
      case 0xd:
        iVar9 = aiStack_140[iVar10];
        if (iVar9 != -1) {
          iVar10 = iVar10 + 1;
          iVar11 = iVar9;
          goto switchD_0015e724_caseD_1;
        }
        goto LAB_0015e778;
      }
      if (iVar9 != -1) {
        iVar11 = iVar9;
      }
switchD_0015e724_caseD_1:
LAB_0015e778:
      if (iVar11 == -1) goto LAB_0015ea0c;
      lVar8 = 0;
      iVar9 = FUN_00189b78(DAT_002859e4,iVar11);
      switch(*(undefined4 *)(*(int *)(iVar9 + 0x394) + 0x40)) {
      case 0:
      case 8:
        lVar8 = 0x2c46f0;
        break;
      case 1:
      case 9:
        lVar8 = 0x2c46e0;
        break;
      case 2:
      case 10:
        lVar8 = 0x2c4700;
        break;
      case 3:
      case 0xb:
        lVar8 = 0x2c46d0;
        break;
      case 4:
      case 0xc:
        lVar8 = 0x2c46d8;
        break;
      case 5:
      case 0xd:
        lVar8 = 0x2c4708;
        break;
      case 6:
      case 0xe:
        lVar8 = 0x2c46f8;
        break;
      case 7:
      case 0xf:
        lVar8 = 0x2c46e8;
      }
      if (lVar8 == 0) {
        FUN_001601e0(&uStack_100,iVar7 * 0x2c + *(int *)(param_1 + 0x208),0x2c4728,0x2c4730);
        iVar9 = iVar7 * 0x40 + param_1;
        uStack_150 = *(undefined4 *)(iVar9 + 0x210);
        *(undefined4 *)(iVar9 + 0x218) = uStack_f8;
        *(undefined4 *)(iVar9 + 0x220) = uStack_f0;
        *(undefined4 *)(iVar9 + 0x210) = uStack_150;
        *(undefined4 *)(iVar9 + 0x214) = uStack_fc;
        *(undefined4 *)(iVar9 + 0x21c) = uStack_f4;
        *(undefined4 *)(iVar9 + 0x224) = uStack_ec;
        *(undefined4 *)(iVar9 + 0x230) = uStack_e0;
        *(undefined4 *)(iVar9 + 0x234) = uStack_dc;
        *(undefined4 *)(iVar9 + 0x238) = uStack_d8;
        *(undefined4 *)(iVar9 + 0x23c) = uStack_d4;
        *(undefined4 *)(iVar9 + 0x240) = uStack_d0;
        FUN_0015f348(&uStack_100,2);
        iVar9 = *(int *)(param_1 + 0x208);
      }
      else {
        FUN_00160220(&uStack_100,iVar7 * 0x2c + *(int *)(param_1 + 0x208),lVar8,0x2c4728,0x2c4730);
        iVar9 = iVar7 * 0x40 + param_1;
        uStack_150 = *(undefined4 *)(iVar9 + 0x210);
        *(undefined4 *)(iVar9 + 0x218) = uStack_f8;
        *(undefined4 *)(iVar9 + 0x220) = uStack_f0;
        *(undefined4 *)(iVar9 + 0x210) = uStack_150;
        *(undefined4 *)(iVar9 + 0x214) = uStack_fc;
        *(undefined4 *)(iVar9 + 0x21c) = uStack_f4;
        *(undefined4 *)(iVar9 + 0x224) = uStack_ec;
        *(undefined4 *)(iVar9 + 0x230) = uStack_e0;
        *(undefined4 *)(iVar9 + 0x234) = uStack_dc;
        *(undefined4 *)(iVar9 + 0x238) = uStack_d8;
        *(undefined4 *)(iVar9 + 0x23c) = uStack_d4;
        *(undefined4 *)(iVar9 + 0x240) = uStack_d0;
        FUN_0015f348(&uStack_100,2);
        iVar9 = *(int *)(param_1 + 0x208);
      }
      iVar1 = iVar7 * 0x2c;
      iVar4 = iVar9 + iVar1;
      uStack_100 = *(undefined4 *)(iVar4 + 0x1c);
      uStack_fc = *(undefined4 *)(iVar4 + 0x20);
      uStack_f8 = *(undefined4 *)(iVar4 + 0x24);
      uStack_f4 = 0x3f800000;
      uVar12 = *(undefined4 *)(iVar9 + iVar1 + 0x28);
      if (*(int *)(iVar9 + iVar1 + 0x18) != 0) {
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        uVar2 = FUN_00189b78(DAT_002859e4,iVar11);
        FUN_00109448(uVar12,0,uVar2,&uStack_100,&uStack_f0,1);
      }
      uStack_f0 = uStack_100;
      uStack_ec = uStack_fc;
      uStack_e8 = uStack_f8;
      uStack_e4 = uStack_f4;
      FUN_00160260(uVar12,param_1 + iVar7 * 0x40 + 0x210,iVar11,
                   *(undefined4 *)(iVar7 * 0x2c + *(int *)(param_1 + 0x208) + 0x18),&uStack_f0);
    }
    iVar7 = iVar7 + 1;
    if (7 < iVar7) {
      return;
    }
    iVar9 = *(int *)(param_1 + 0x208);
  } while( true );
}

