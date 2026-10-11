/* Ghidra pseudocode. PS2 address: 001e9718. Not validated source. */

int FUN_001e9718(undefined8 param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint auStack_b0 [4];
  
  iVar9 = 0;
  auStack_b0[0] = param_4;
  FUN_0023bac0(param_1,auStack_b0,4);
  iVar5 = *(int *)(param_2 + 0x394);
  while( true ) {
    iVar8 = (int)param_1;
    piVar7 = (int *)(iVar8 + iVar9 * 0x60 + 0x10);
    if (*piVar7 == 0) break;
    iVar9 = iVar9 + 1;
    if (7 < iVar9) {
      return -1;
    }
  }
  *piVar7 = 1;
  piVar7[3] = auStack_b0[0];
  piVar7[1] = param_2;
  piVar7[2] = param_3;
  iVar6 = 2;
  piVar3 = piVar7 + 6;
  do {
    *piVar3 = -1;
    iVar6 = iVar6 + -1;
    piVar3 = piVar3 + -1;
  } while (-1 < iVar6);
  piVar3 = piVar7 + 0x10;
  iVar6 = 6;
  do {
    *piVar3 = -1;
    iVar6 = iVar6 + -1;
    piVar3 = piVar3 + -1;
  } while (-1 < iVar6);
  if ((auStack_b0[0] >> 2 & 1) != 0) {
    iVar6 = FUN_002196a0(*(undefined4 *)(iVar8 + 8),PTR_s__data_char_models_board_mpf_002c5418,0x10,
                         0,0);
    piVar7[6] = iVar6;
  }
  if ((auStack_b0[0] & 1) == 0) {
    if ((auStack_b0[0] >> 3 & 1) != 0) {
      iVar6 = FUN_002196a0(*(undefined4 *)(iVar8 + 8),
                           (&PTR_s__data_char_models_hiro_body_lo_m_00297854)
                           [*(int *)(iVar5 + 0x38) * 2],0x10,0,0);
      piVar7[4] = iVar6;
    }
    if ((auStack_b0[0] >> 4 & 1) == 0) goto LAB_001e9938;
    uVar1 = *(undefined4 *)(iVar8 + 8);
    puVar2 = (&PTR_s__data_char_models_hiro_head_lo_m_002978d4)[*(int *)(iVar5 + 0x40) * 2];
  }
  else {
    if ((auStack_b0[0] >> 3 & 1) != 0) {
      iVar6 = FUN_002196a0(*(undefined4 *)(iVar8 + 8),
                           *(undefined4 *)(*(int *)(iVar5 + 0x38) * 8 + 0x297850),0x10,0,0);
      piVar7[4] = iVar6;
    }
    if ((auStack_b0[0] >> 4 & 1) == 0) goto LAB_001e9938;
    uVar1 = *(undefined4 *)(iVar8 + 8);
    puVar2 = (&PTR_s__data_char_models_hiro_head_hi_m_002978d0)[*(int *)(iVar5 + 0x40) * 2];
  }
  iVar6 = FUN_002196a0(uVar1,puVar2,0x10,0,0);
  piVar7[5] = iVar6;
LAB_001e9938:
  if ((char)auStack_b0[0] < '\0') {
    iVar4 = FUN_002196a0(*(undefined4 *)(iVar8 + 0xc),
                         (&PTR_s__data_char_textures_hiro_head_ss_00297c08)
                         [*(int *)(iVar5 + 0x3c) * 4],0x10,0,0);
    iVar6 = *(int *)(iVar5 + 0x3c);
    uVar1 = *(undefined4 *)(iVar8 + 0xc);
    piVar7[10] = iVar4;
    iVar4 = FUN_002196a0(uVar1,(&PTR_s__data_char_textures_hiro_helm_ss_00297c0c)[iVar6 * 4],0x10,0,
                         0);
    iVar6 = *(int *)(iVar5 + 0x3c);
    uVar1 = *(undefined4 *)(iVar8 + 0xc);
    piVar7[0xb] = iVar4;
    iVar4 = FUN_002196a0(uVar1,(&PTR_s__data_char_textures_hiro_face_ss_00297c00)[iVar6 * 4],0x10,0,
                         0);
    iVar6 = *(int *)(iVar5 + 0x3c);
    piVar7[0xf] = iVar4;
    iVar6 = FUN_002196a0(*(undefined4 *)(iVar8 + 0xc),
                         (&PTR_s__data_char_textures_hiro_hair_ss_00297c04)[iVar6 * 4],0x10,0,0);
    piVar7[0x10] = iVar6;
  }
  if ((auStack_b0[0] >> 6 & 1) != 0) {
    iVar4 = FUN_002196a0(*(undefined4 *)(iVar8 + 0xc),
                         (&PTR_s__data_char_textures_m_rammstein__002979f0)
                         [*(int *)(iVar5 + 0x34) * 2],0x10,0,0);
    iVar6 = *(int *)(iVar5 + 0x34);
    piVar7[0xc] = iVar4;
    iVar6 = FUN_002196a0(*(undefined4 *)(iVar8 + 0xc),
                         (&PTR_s__data_char_textures_rammstein_bo_002979f4)[iVar6 * 2],0x10,0,0);
    piVar7[0xd] = iVar6;
  }
  if ((auStack_b0[0] >> 5 & 1) == 0) {
    return iVar9;
  }
  iVar5 = FUN_002196a0(*(undefined4 *)(iVar8 + 0xc),
                       (&PTR_s__data_char_textures_hiro1_bord_s_00297ea0)[*(int *)(iVar5 + 0x30)],
                       0x10,0,0);
  piVar7[0xe] = iVar5;
  return iVar9;
}

