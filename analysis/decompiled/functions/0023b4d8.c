/* Ghidra pseudocode. PS2 address: 0023b4d8. Not validated source. */

undefined4 FUN_0023b4d8(short *param_1)

{
  short sVar1;
  short *psVar2;
  long lVar3;
  bool bVar4;
  
  sVar1 = *param_1;
  if (sVar1 == 0x4253) {
    if ((param_1[1] & 0x8000U) != 0) {
      return 2;
    }
    DAT_002c5a2c = 2;
    return 0;
  }
  if (sVar1 != 0x4246) {
    if (sVar1 != 0x424d) {
      DAT_002c5a2c = 4;
      return 0;
    }
    if ((param_1[1] & 0x200U) == 0) {
      return 2;
    }
    lVar3 = FUN_0023b9ec((int)param_1 + *(int *)(param_1 + 2) + 0x10,4);
    if (lVar3 == 0x42454e44) {
      return 1;
    }
    DAT_002c5a2c = 3;
    return 0;
  }
  bVar4 = false;
  if ((param_1[1] & 0x4000U) == 0) {
    return 0;
  }
  psVar2 = *(short **)(param_1 + 8);
  lVar3 = FUN_0023bfe8(psVar2,0x18,0);
  if (lVar3 != 0) {
    sVar1 = *psVar2;
    if (sVar1 == 0x4246) {
      bVar4 = true;
      goto LAB_0023b578;
    }
    if (sVar1 == 0x4253) {
      bVar4 = true;
      goto LAB_0023b578;
    }
  }
  DAT_002c5a2c = 1;
LAB_0023b578:
  if (!bVar4) {
    return 0;
  }
  psVar2 = *(short **)(param_1 + 10);
  lVar3 = FUN_0023bfe8(psVar2,0x18,0);
  if ((lVar3 != 0) && ((sVar1 = *psVar2, sVar1 == 0x4246 || (sVar1 == 0x4253)))) {
    return 1;
  }
  DAT_002c5a2c = 1;
  return 0;
}

