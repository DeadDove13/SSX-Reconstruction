/* Ghidra pseudocode. PS2 address: 0023d9e0. Not validated source. */

uint FUN_0023d9e0(long param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int *unaff_s1_lo;
  uint *puVar6;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    unaff_s1_lo = (int *)*(undefined4 *)param_1;
  }
  uVar3 = 0;
  if (!bVar2) {
    FUN_0023ee58(unaff_s1_lo[1]);
    puVar4 = (uint *)unaff_s1_lo[0x16];
    puVar6 = (uint *)0x0;
    if (puVar4 != (uint *)0x0) {
      DAT_002c5bec = DAT_002c5bec + 0x100;
      unaff_s1_lo[0x16] = puVar4[3];
      if (DAT_002c5bec == 0) {
        DAT_002c5bec = 0x100;
      }
      *puVar4 = (byte)*puVar4 | DAT_002c5bec;
      puVar6 = puVar4;
    }
    FUN_0023ea60(unaff_s1_lo[1]);
    uVar3 = 0;
    if (puVar6 != (uint *)0x0) {
      if (param_3 == 0) {
        iVar5 = 0;
        uVar3 = *param_2;
        puVar4 = param_2;
        while (uVar3 != param_4) {
          puVar1 = puVar4 + 1;
          puVar4 = (uint *)((int)puVar4 + *puVar1);
          iVar5 = iVar5 + *puVar1;
          uVar3 = *puVar4;
        }
        param_3 = iVar5 + puVar4[1];
      }
      puVar6[0x16] = param_3;
      puVar6[0x15] = (uint)param_2;
      puVar6[0x17] = param_4;
      puVar6[4] = 1;
      FUN_0023c228(unaff_s1_lo,puVar6);
      FUN_0023ee58(unaff_s1_lo[1]);
      iVar5 = unaff_s1_lo[10];
      if (iVar5 == 0) {
        unaff_s1_lo[10] = 1;
      }
      FUN_0023ea60(unaff_s1_lo[1]);
      if (iVar5 == 0) {
        FUN_0023c660(unaff_s1_lo,0);
        uVar3 = *puVar6;
      }
      else {
        uVar3 = *puVar6;
      }
    }
  }
  return uVar3;
}

