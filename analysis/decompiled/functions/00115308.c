/* Ghidra pseudocode. PS2 address: 00115308. Not validated source. */

void FUN_00115308(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x16c) != 0) {
    fVar5 = 0.0;
    if (*(int *)(iVar2 + 0x144) != 0) {
      fVar5 = DAT_002c1528;
    }
    iVar1 = *(int *)(iVar2 + 0x6cf4);
    fVar4 = fVar5 * DAT_002c152c + 0.5;
    fVar3 = (float)(int)fVar4;
    if (fVar4 < fVar3) {
      fVar3 = fVar3 - 1.0;
    }
    *(float *)(iVar1 + 0x18) = fVar5 - fVar3 * DAT_002c1530;
    if (*(int *)(iVar1 + 8) - 0xaaU < 2) {
      FUN_001110b8(DAT_002c1534);
      FUN_001129e8(DAT_002c1538,param_1,iVar2 + 0x130);
    }
  }
  return;
}

