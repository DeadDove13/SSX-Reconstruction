/* Ghidra pseudocode. PS2 address: 0024bce0. Not validated source. */

void FUN_0024bce0(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,
                 undefined4 *param_5,uint *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 auStack_d0 [2];
  undefined4 uStack_c8;
  undefined *apuStack_c0 [4];
  uint uStack_b0;
  
  uStack_b0 = param_3;
  *(undefined4 *)(&DAT_002a59e4 + DAT_002a5b38 * 0x140) = 0;
  if (((param_3 & 8) == 0) && (DAT_002a543c != 2)) goto LAB_0024c190;
  if (DAT_002a546c == 3) {
    if ((param_4 == 2) || ((param_3 & 8) == 0)) {
      auStack_d0[0] = *param_5;
      uVar6 = 0;
      uVar7 = 0x10;
      puVar4 = PTR_DAT_002a52c0;
      goto LAB_0024c168;
    }
    if (param_4 == 1) {
      FUN_0024c3a8(PTR_DAT_002a52c0,*param_6,0,0,8,param_1,param_2,*param_5);
      FUN_0024c3a8(PTR_DAT_002a52c0,param_6[2],1,0,8,param_1,param_2,param_5[4]);
      goto LAB_0024c190;
    }
    if (param_4 != 3) {
      FUN_0024af68(0x2bf348,param_4);
      goto LAB_0024c190;
    }
    FUN_0024d960(auStack_d0,param_7,*param_5,(int)param_5[1] >> 1);
    FUN_0024c3a8(PTR_DAT_002a52c0,0,0,0,8,param_1,param_2,*param_5);
    FUN_0024c3a8(PTR_DAT_002a52c0,1,0,0,8,param_1,param_2,auStack_d0[0]);
    FUN_0024c3a8(PTR_DAT_002a52c0,1,1,0,8,param_1,param_2,*param_5);
    uVar5 = 1;
    uVar6 = 0;
    uVar7 = 8;
    auStack_d0[0] = uStack_c8;
    puVar4 = PTR_DAT_002a52c0;
  }
  else {
    uVar10 = (uint)(DAT_002a546c == 2);
    apuStack_c0[0] = PTR_DAT_002a52cc;
    apuStack_c0[1] = PTR_DAT_002a52d8;
    uVar8 = 0;
    apuStack_c0[2] = PTR_DAT_002a52d0;
    apuStack_c0[3] = PTR_DAT_002a52dc;
    if ((DAT_002a543c == 2) && (uVar8 = 0, DAT_002a53dc != 0)) {
      uVar8 = (uint)(uVar10 != *param_6);
    }
    if ((param_4 == 1) || ((param_3 & 8) == 0)) {
      auStack_d0[0] = *param_5;
      puVar4 = apuStack_c0[uVar8 * 2 + *param_6];
    }
    else {
      if (param_4 == 2) {
        FUN_0024c3a8(apuStack_c0[uVar8 * 2 + *param_6],0,0,0,8,param_1,param_2,*param_5);
        iVar9 = 0;
        if (DAT_002a543c == 2) {
          uVar8 = param_6[2];
          if (DAT_002a53dc != 0) {
            iVar9 = 1;
            if (uVar10 == uVar8) {
              iVar9 = 0;
            }
            goto LAB_0024c080;
          }
        }
        else {
LAB_0024c080:
          uVar8 = param_6[2];
        }
        auStack_d0[0] = param_5[4];
        puVar4 = apuStack_c0[iVar9 * 2 + uVar8];
        uVar6 = 8;
        uVar7 = 8;
        goto LAB_0024c168;
      }
      if (param_4 != 3) {
        FUN_0024af68(0x2bf368,param_4);
        goto LAB_0024c190;
      }
      bVar2 = DAT_002a53dc != 0;
      FUN_0024d960(auStack_d0,param_7,*param_5,param_5[1]);
      FUN_0024c3a8(apuStack_c0[uVar10],0,0,0,0x10,param_1,param_2,*param_5);
      iVar3 = (uint)bVar2 * 8;
      iVar9 = iVar3 + 4;
      if (uVar10 != 0) {
        iVar9 = iVar3;
      }
      puVar4 = *(undefined **)((int)apuStack_c0 + iVar9);
    }
    uVar6 = 0;
    uVar7 = 0x10;
LAB_0024c168:
    uVar5 = 0;
  }
  FUN_0024c3a8(puVar4,0,uVar5,uVar6,uVar7,param_1,param_2,auStack_d0[0]);
LAB_0024c190:
  if ((uStack_b0 & 4) != 0) {
    if (DAT_002a546c == 3) {
      if (param_4 != 2) {
        FUN_0024c3a8(PTR_DAT_002a52c4,param_6[1],0,0,8,param_1,param_2,param_5[2]);
        FUN_0024c3a8(PTR_DAT_002a52c4,param_6[3],1,0,8,param_1,param_2,param_5[6]);
        return;
      }
      uVar1 = param_5[2];
      puVar4 = PTR_DAT_002a52c4;
    }
    else {
      if (param_4 != 1) {
        if (param_4 != 2) {
          FUN_0024af68(0x2bf388,param_4);
          return;
        }
        puVar4 = PTR_DAT_002a52d0;
        if (param_6[1] != 0) {
          puVar4 = PTR_DAT_002a52dc;
        }
        FUN_0024c3a8(puVar4,0,0,0,8,param_1,param_2,param_5[2]);
        puVar4 = PTR_DAT_002a52d0;
        if (param_6[3] != 0) {
          puVar4 = PTR_DAT_002a52dc;
        }
        FUN_0024c3a8(puVar4,0,0,8,8,param_1,param_2,param_5[6]);
        return;
      }
      puVar4 = PTR_DAT_002a52d0;
      if (param_6[1] != 0) {
        puVar4 = PTR_DAT_002a52dc;
      }
      uVar1 = param_5[2];
    }
    FUN_0024c3a8(puVar4,0,0,0,0x10,param_1,param_2,uVar1);
  }
  return;
}

