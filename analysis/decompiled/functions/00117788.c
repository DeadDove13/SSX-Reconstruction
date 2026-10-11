/* Ghidra pseudocode. PS2 address: 00117788. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001178d8) */
/* WARNING: Removing unreachable block (ram,0x0011791c) */

void FUN_00117788(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar5 = (int)param_1;
  FUN_00116378(iVar5 + 0x970);
  if (*(int *)(param_2 + 0x260) == 2) {
    fVar7 = *(float *)(iVar5 + 0x96c);
  }
  else if (DAT_002c16a4 < ABS(*(float *)(param_2 + 0x18c))) {
    if (*(int *)(param_2 + 0x34c) == 2) {
      if (DAT_002c16a8 < *(float *)(param_2 + 0xe0)) {
        fVar7 = *(float *)(iVar5 + 0x96c) + DAT_002c16ac;
        if (1.0 < fVar7) {
          fVar7 = 1.0;
        }
        *(float *)(iVar5 + 0x96c) = fVar7;
        fVar7 = *(float *)(iVar5 + 0x96c);
      }
      else {
        fVar7 = *(float *)(iVar5 + 0x96c);
      }
    }
    else {
      fVar7 = *(float *)(iVar5 + 0x96c);
    }
  }
  else {
    fVar7 = *(float *)(iVar5 + 0x96c);
  }
  if (0.0 < fVar7) {
    if (*(float *)(iVar5 + 0x968) < fVar7 * DAT_002c16b0 + 0.5) {
      FUN_001173e0(fVar7 * DAT_002c16b0 * 0.5,param_1,*(int *)(param_2 + 0x8584) + 0x470,
                   param_2 + 0x250,param_2 + 0x220,param_2 + 0xd0);
    }
    *(float *)(iVar5 + 0x96c) = *(float *)(iVar5 + 0x96c) - DAT_002c16b4;
    fVar7 = *(float *)(iVar5 + 0x968);
  }
  else {
    fVar7 = *(float *)(iVar5 + 0x968);
  }
  iVar3 = *(int *)(iVar5 + 0x960) + -1;
  *(float *)(iVar5 + 0x968) = fVar7 * DAT_002c16b8;
  fVar7 = DAT_002c16bc;
  if (-1 < iVar3) {
    iVar2 = *(int *)(iVar5 + 0x964);
    iVar4 = iVar3;
    while( true ) {
      iVar1 = ((iVar2 + iVar4) % 0x1e) * 0x50 + iVar5;
      fVar6 = *(float *)(iVar1 + 0x40) + fVar7;
      *(float *)(iVar1 + 0x40) = fVar6;
      if (2.0 < fVar6) break;
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) {
        return;
      }
      iVar2 = *(int *)(iVar5 + 0x964);
    }
    *(int *)(iVar5 + 0x960) = iVar3 - iVar4;
    *(int *)(iVar5 + 0x964) = (iVar2 + iVar4 + 1) % 0x1e;
  }
  return;
}

