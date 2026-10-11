/* Ghidra pseudocode. PS2 address: 0023ccf8. Not validated source. */

uint FUN_0023ccf8(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int *unaff_s0_lo;
  uint *puVar5;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    unaff_s0_lo = (int *)*(undefined4 *)param_1;
  }
  uVar4 = 0;
  if (!bVar3) {
    FUN_0023ee58(unaff_s0_lo[1]);
    puVar1 = (uint *)unaff_s0_lo[0x16];
    puVar5 = (uint *)0x0;
    if (puVar1 != (uint *)0x0) {
      DAT_002c5bec = DAT_002c5bec + 0x100;
      unaff_s0_lo[0x16] = puVar1[3];
      if (DAT_002c5bec == 0) {
        DAT_002c5bec = 0x100;
      }
      *puVar1 = (byte)*puVar1 | DAT_002c5bec;
      puVar5 = puVar1;
    }
    FUN_0023ea60(unaff_s0_lo[1]);
    if (puVar5 == (uint *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar5[4] = 0;
      FUN_0025c0c8(puVar5 + 5,param_2,0x3f);
      puVar5[0x16] = param_3;
      puVar5[0x17] = param_4;
      FUN_0023c228(unaff_s0_lo,puVar5);
      FUN_0023ee58(unaff_s0_lo[1]);
      iVar2 = unaff_s0_lo[10];
      if (iVar2 == 0) {
        unaff_s0_lo[10] = 1;
      }
      FUN_0023ea60(unaff_s0_lo[1]);
      if (iVar2 == 0) {
        if (unaff_s0_lo[0xe] == 0) {
          FUN_0023c660(unaff_s0_lo,unaff_s0_lo[0xb]);
          uVar4 = *puVar5;
        }
        else {
          FUN_0023c660(unaff_s0_lo,unaff_s0_lo[0xc]);
          uVar4 = *puVar5;
        }
      }
      else {
        uVar4 = *puVar5;
      }
    }
  }
  return uVar4;
}

