/* Ghidra pseudocode. PS2 address: 001ae918. Not validated source. */

void FUN_001ae918(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  float fVar4;
  float fVar5;
  
  if ((*(int *)(param_1 + *(int *)(DAT_002859e4 + 0x290) * 4 + 0x2c) < 1) &&
     (psVar3 = (short *)(&DAT_0028adb0 + *(int *)(DAT_002859e4 + 0x290) * 0x20), *psVar3 != 0)) {
    fVar5 = *(float *)(param_1 + 0x28);
    fVar4 = *(float *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(DAT_002859e4 + 0x58);
    iVar2 = FUN_001a0a88(uVar1,psVar3,0);
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    DAT_0028ad3c = 0;
    DAT_0028ad34 = 0x3f800000;
    FUN_001a1578(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x1c) - (float)(iVar2 / 2),
                 fVar4 + fVar5 * -40.0,uVar1,psVar3);
  }
  return;
}

