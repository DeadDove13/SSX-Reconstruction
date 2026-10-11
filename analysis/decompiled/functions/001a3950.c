/* Ghidra pseudocode. PS2 address: 001a3950. Not validated source. */

void FUN_001a3950(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      if (*(uint *)(DAT_002859e4 + 0x290) == *(int *)(DAT_002859e4 + 0x298) - 1U) {
        iVar1 = DAT_00295f50 * 0x30;
        fVar3 = (float)DAT_002915f0;
        fVar2 = (float)DAT_002915f4;
        *(undefined8 *)(&DAT_00295ec0 + iVar1) = *(undefined8 *)(&DAT_00295e90 + iVar1);
        *(undefined8 *)(&DAT_00295ec8 + iVar1) = *(undefined8 *)(&DAT_00295e98 + iVar1);
        *(undefined8 *)(&DAT_00295ed0 + iVar1) = *(undefined8 *)(&DAT_00295ea0 + iVar1);
        *(undefined8 *)(&DAT_00295ed8 + iVar1) = *(undefined8 *)(&DAT_00295ea8 + iVar1);
        *(undefined8 *)(&DAT_00295ee0 + iVar1) = *(undefined8 *)(&DAT_00295eb0 + iVar1);
        *(undefined8 *)(&DAT_00295ee8 + iVar1) = *(undefined8 *)(&DAT_00295eb8 + iVar1);
        DAT_00295f50 = DAT_00295f50 + 1;
        FUN_001319b0(0,0,fVar3,fVar2,0x295e90);
        iVar1 = DAT_00295f50 * 0x30;
        *(undefined4 *)(&DAT_00295e90 + iVar1) = 1;
        *(undefined4 *)(&DAT_00295eb0 + iVar1) = 0;
        *(undefined4 *)(&DAT_00295eb4 + iVar1) = 0;
        *(undefined4 *)(&DAT_00295eb8 + iVar1) = 0x44200000;
        *(undefined4 *)(&DAT_00295ebc + iVar1) = 0x43f00000;
        *(undefined4 *)(&DAT_00295ea4 + iVar1) = 0;
        *(undefined4 *)(&DAT_00295ea8 + iVar1) = 0x447a0000;
        FUN_001c59c0(*(undefined4 *)(&DAT_00295e94 + iVar1),*(undefined4 *)(&DAT_00295e98 + iVar1),
                     *(undefined4 *)(&DAT_00295e9c + iVar1),*(undefined4 *)(&DAT_00295ea0 + iVar1),0
                     ,0x447a0000,0,0,0x2913b0);
        (**(code **)(param_1[6] + 0x44))((int)param_1 + (int)*(short *)(param_1[6] + 0x40));
        FUN_00131848(0x295e90);
      }
    }
    else if ((iVar1 >> (*(uint *)(DAT_002859e4 + 0x290) & 0x1f) & 1U) != 0) {
      (**(code **)(param_1[6] + 0x44))((int)param_1 + (int)*(short *)(param_1[6] + 0x40));
    }
  }
  return;
}

