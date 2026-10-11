/* Ghidra pseudocode. PS2 address: 001e9070. Not validated source. */

void FUN_001e9070(undefined8 param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  int iStack_e4;
  int aiStack_e0 [9];
  int iStack_bc;
  int aiStack_b8 [4];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint auStack_a0 [4];
  
  auStack_a0[0] = param_4;
  FUN_0023bac0(param_1,auStack_a0,4);
  iVar1 = *(int *)(param_2 + 0x394);
  piVar6 = &iStack_e4;
  iVar5 = 2;
  piVar3 = aiStack_e0 + 1;
  do {
    *piVar3 = 0;
    iVar5 = iVar5 + -1;
    piVar3 = piVar3 + -1;
  } while (-1 < iVar5);
  piVar3 = &iStack_bc;
  iVar5 = 6;
  puVar4 = &uStack_a4;
  do {
    *puVar4 = 0;
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar5);
  if ((auStack_a0[0] >> 2 & 1) != 0) {
    aiStack_e0[1] = FUN_00237128(PTR_s__data_char_models_board_mpf_002c5418,0x10);
  }
  if ((auStack_a0[0] & 1) == 0) {
    if ((auStack_a0[0] >> 3 & 1) != 0) {
      iStack_e4 = FUN_00237128((&PTR_s__data_char_models_hiro_body_lo_m_00297854)
                               [*(int *)(iVar1 + 0x38) * 2],0x10);
    }
    if ((auStack_a0[0] >> 4 & 1) == 0) goto LAB_001e91fc;
    puVar2 = (&PTR_s__data_char_models_hiro_head_lo_m_002978d4)[*(int *)(iVar1 + 0x40) * 2];
  }
  else {
    if ((auStack_a0[0] >> 3 & 1) != 0) {
      iStack_e4 = FUN_00237128(*(undefined4 *)(*(int *)(iVar1 + 0x38) * 8 + 0x297850),0x10);
    }
    if ((auStack_a0[0] >> 4 & 1) == 0) goto LAB_001e91fc;
    puVar2 = (&PTR_s__data_char_models_hiro_head_hi_m_002978d0)[*(int *)(iVar1 + 0x40) * 2];
  }
  aiStack_e0[0] = FUN_00237128(puVar2,0x10);
LAB_001e91fc:
  if ((char)auStack_a0[0] < '\0') {
    iStack_bc = FUN_00237128((&PTR_s__data_char_textures_hiro_head_ss_00297c08)
                             [*(int *)(iVar1 + 0x3c) * 4],0x10);
    aiStack_b8[0] =
         FUN_00237128((&PTR_s__data_char_textures_hiro_helm_ss_00297c0c)[*(int *)(iVar1 + 0x3c) * 4]
                      ,0x10);
    uStack_a8 = FUN_00237128((&PTR_s__data_char_textures_hiro_face_ss_00297c00)
                             [*(int *)(iVar1 + 0x3c) * 4],0x10);
    uStack_a4 = FUN_00237128((&PTR_s__data_char_textures_hiro_hair_ss_00297c04)
                             [*(int *)(iVar1 + 0x3c) * 4],0x10);
  }
  if ((auStack_a0[0] >> 6 & 1) != 0) {
    aiStack_b8[1] =
         FUN_00237128((&PTR_s__data_char_textures_m_rammstein__002979f0)[*(int *)(iVar1 + 0x34) * 2]
                      ,0x10);
    aiStack_b8[2] =
         FUN_00237128((&PTR_s__data_char_textures_rammstein_bo_002979f4)[*(int *)(iVar1 + 0x34) * 2]
                      ,0x10);
  }
  if ((auStack_a0[0] >> 5 & 1) != 0) {
    aiStack_b8[3] =
         FUN_00237128((&PTR_s__data_char_textures_hiro1_bord_s_00297ea0)[*(int *)(iVar1 + 0x30)],
                      0x10);
  }
  uStack_100 = 2;
  iVar5 = 2;
  uStack_f4 = auStack_a0[0];
  iStack_fc = param_2;
  uStack_f8 = param_3;
  FUN_001e8a90(param_1,&uStack_100);
  iVar1 = iStack_e4;
  while( true ) {
    iVar5 = iVar5 + -1;
    piVar6 = piVar6 + 1;
    if (iVar1 != 0) {
      FUN_0023a998(iVar1);
    }
    if (iVar5 < 0) break;
    iVar1 = *piVar6;
  }
  iVar5 = 6;
  iVar1 = iStack_bc;
  while( true ) {
    iVar5 = iVar5 + -1;
    piVar3 = piVar3 + 1;
    if (iVar1 != 0) {
      FUN_0023a998(iVar1);
    }
    if (iVar5 < 0) break;
    iVar1 = *piVar3;
  }
  return;
}

