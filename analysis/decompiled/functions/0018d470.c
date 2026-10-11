/* Ghidra pseudocode. PS2 address: 0018d470. Not validated source. */

void FUN_0018d470(int param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  switch(*param_2) {
  case 0:
    fVar2 = (float)*(int *)(param_1 + 0x118) * DAT_002c29e8;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    else if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    FUN_001fac48(fVar2,DAT_002c56e8);
    return;
  case 1:
    fVar2 = (float)*(int *)(param_1 + 0x11c) * DAT_002c29ec;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    else if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    FUN_001fad00(fVar2,DAT_002c56e8);
    return;
  case 2:
    fVar2 = (float)*(int *)(param_1 + 0x120) * DAT_002c29f0;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    else if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    FUN_001faca0(fVar2,DAT_002c56e8);
    return;
  default:
    break;
  case 7:
    fVar2 = (float)*(int *)(param_1 + 0x134) * DAT_002c29e4;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    else if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    FUN_001fabc8(fVar2,DAT_002c56e8);
    return;
  case 9:
    FUN_00204108(DAT_002c56e8,*(undefined4 *)(param_1 + 0x140));
    iVar1 = DAT_002c56e8;
    fVar4 = *(float *)(DAT_002c56e8 + 0x8b6d8);
    *(int *)(param_1 + 0x120) = (int)*(float *)(DAT_002c56e8 + 0x8b6e0);
    fVar3 = *(float *)(iVar1 + 0x8b6dc);
    fVar2 = *(float *)(iVar1 + 0x8b6e4);
    *(int *)(param_1 + 0x134) = (int)fVar4;
    *(int *)(param_1 + 0x118) = (int)fVar3;
    *(int *)(param_1 + 0x11c) = (int)fVar2;
    break;
  case 0xb:
    FUN_002071b8(DAT_002c56e8,*(undefined4 *)(param_1 + 0x144));
    FUN_001fcda0(DAT_002c56e8);
    return;
  }
  return;
}

