/* Ghidra pseudocode. PS2 address: 0018c4a8. Not validated source. */

void FUN_0018c4a8(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  switch(*param_2) {
  case 0:
    *(undefined4 *)(DAT_002859e4 + 0x68) = *(undefined4 *)(param_1 + 0x118);
    break;
  case 1:
    *(undefined4 *)(DAT_002859e4 + 0x70) = *(undefined4 *)(param_1 + 0x11c);
    break;
  case 2:
    *(undefined4 *)(DAT_002859e4 + 0x29c) = *(undefined4 *)(param_1 + 0x120);
    FUN_00188f68();
    return;
  case 3:
    fVar1 = (float)DAT_002915dc * 0.0078125;
    fVar2 = (float)DAT_002915e0 * 0.0078125;
    DAT_002915ec = *(float *)(param_1 + 0x124);
    fVar3 = (float)DAT_002915e4 * 0.0078125;
    if (DAT_002915ec < 0.0) {
      DAT_002915ec = 0.0;
    }
    else if (2.0 < DAT_002915ec) {
      DAT_002915ec = 2.0;
    }
    FUN_00187e10(*(undefined4 *)(param_1 + 0x124),DAT_002859e4);
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    DAT_002915dc = FUN_00258848(fVar1 * 128.0);
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 < fVar2)) {
      fVar1 = 1.0;
    }
    DAT_002915e0 = FUN_00258848(fVar1 * 128.0);
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 1.0 < fVar3)) {
      fVar2 = 1.0;
    }
    DAT_002915e4 = FUN_00258848(fVar2 * 128.0);
    break;
  case 4:
    if (*(int *)(param_1 + 0x128) == 0) {
      DAT_00292774 = 0;
    }
    else {
      DAT_00292774 = 1;
    }
  }
  return;
}

