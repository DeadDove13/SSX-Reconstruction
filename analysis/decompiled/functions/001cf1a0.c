/* Ghidra pseudocode. PS2 address: 001cf1a0. Not validated source. */

void FUN_001cf1a0(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)param_1;
  if (puVar8[1] != 0) {
    piVar1 = (int *)*puVar8;
    if (puVar8[2] != 0) {
      iVar2 = puVar8[3];
      puVar3 = (undefined8 *)*piVar1;
      if (((long)iVar2 & 1U) != 0) {
        *puVar3 = 0;
        *piVar1 = (int)(puVar3 + 1);
      }
      puVar3 = (undefined8 *)puVar8[2];
      *puVar3 = 0x1400000000000001;
      puVar8[2] = puVar3 + 1;
      puVar3[1] = 0;
      puVar8[2] = puVar3 + 2;
      puVar3[2] = 0x4a;
      puVar8[2] = puVar3 + 3;
      puVar3[3] = 0;
      puVar8[2] = puVar3 + 4;
      puVar3[4] = (long)iVar2 | 0x3400000000008000;
      puVar8[2] = puVar3 + 5;
      puVar3[5] = 0x521;
      puVar8[2] = puVar3 + 6;
    }
    puVar4 = (ulong *)puVar8[1];
    iVar2 = *piVar1;
    puVar4[1] = 0;
    *piVar1 = iVar2 + 0x10;
    uVar6 = DAT_002913b8;
    uVar5 = puVar8[1];
    iVar7 = (iVar2 - (int)puVar4 >> 3) - (iVar2 - (int)puVar4 >> 0x1f) >> 1;
    puVar4[2] = 0;
    puVar4[3] = ((long)(iVar7 + -2) | 0x50000000U) << 0x20;
    *puVar4 = (long)(iVar7 + -1) | 0x10000000;
    FUN_001d39e8(uVar6,uVar5,iVar2,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

