/* Ghidra pseudocode. PS2 address: 00117108. Not validated source. */

void FUN_00117108(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)param_1;
  FUN_00115ae0(iVar1 + 0x970);
  if (*(int *)(param_2 + 0x260) != 2) {
    if (*(float *)(iVar1 + 0x968) < DAT_002c1684) {
      FUN_001173e0(DAT_002c1688,param_1,*(int *)(param_2 + 0x8584) + 0x470,param_3,param_5,param_4);
    }
    fVar2 = *(float *)(iVar1 + 0x96c) + 0.5;
    if (2.0 < fVar2) {
      fVar2 = 2.0;
    }
    *(float *)(iVar1 + 0x96c) = fVar2;
  }
  return;
}

