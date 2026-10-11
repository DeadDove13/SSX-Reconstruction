/* Ghidra pseudocode. PS2 address: 0016b9a0. Not validated source. */

void FUN_0016b9a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_f0 [128];
  undefined1 *apuStack_70 [4];
  
  FUN_0016b2d8();
  iVar7 = (int)param_1;
  iVar5 = 0;
  if (0 < *(int *)(*(int *)(iVar7 + 0x16c) + 0x10)) {
    do {
      iVar6 = iVar5 + 1;
      FUN_001d9548(param_1,iVar5,auStack_f0);
      iVar5 = iVar6;
    } while (iVar6 < *(int *)(*(int *)(iVar7 + 0x16c) + 0x10));
  }
  apuStack_70[0] = auStack_f0;
  FUN_0016b800(param_1,apuStack_70,1,0);
  bVar4 = *(int *)(iVar7 + 0xc) == 0;
  if (*(int *)(iVar7 + 0x18) == 0) {
    bVar4 = bVar4 | 2;
  }
  if (*(int *)(iVar7 + 0x14) == 0) {
    bVar4 = bVar4 | 8;
  }
  uVar1 = FUN_00234e80(DAT_002852fc,0x7b);
  uVar2 = FUN_00234e80(DAT_002852fc,0x7c);
  uVar3 = FUN_00234e80(DAT_002852fc,0x79);
  FUN_0016b3d8(param_1,bVar4,uVar1,uVar2,0,uVar3);
  return;
}

