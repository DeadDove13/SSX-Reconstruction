/* Ghidra pseudocode. PS2 address: 002676c0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0026787c) */

void FUN_002676c0(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int aiStack_80 [8];
  
  iVar5 = 0;
  lVar2 = (**(code **)(param_1 + 4))
                    (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
  if (lVar2 != 0) {
    iVar5 = *(int *)(param_1 + 0x2c);
  }
  if (0 < *(int *)(param_1 + 0xc)) {
    FUN_002669d0(*(undefined4 *)(param_1 + 8));
  }
  if (0 < iVar5) {
    FUN_002669d0(lVar2,iVar5);
  }
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  if ((*(uint *)(param_1 + 0x34) & 4) == 0) {
    uVar3 = FUN_00266d00(0x2d73c0);
  }
  else {
    uVar3 = FUN_00266d30(0x2d73c0,*(uint *)(param_1 + 0x34) >> 0x10);
  }
  EI();
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar6 = (int)uVar3;
  *(undefined4 *)(iVar6 + 0x20) = 0x8000000a;
  *(undefined4 *)(iVar6 + 0x1c) = uVar1;
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(iVar6 + 0x18) = 0;
    *(undefined4 *)(iVar6 + 0x10) = 0;
    if (0 < iVar5) {
      aiStack_80[1] = *(undefined4 *)(param_1 + 0x28);
      aiStack_80[0] = (int)lVar2;
      aiStack_80[3] = 0;
      aiStack_80[2] = iVar5;
    }
    uVar7 = (uint)(0 < iVar5);
    iVar5 = *(int *)(param_1 + 0x20);
    aiStack_80[uVar7 * 4] = iVar6;
    aiStack_80[uVar7 * 4 + 1] = iVar5;
    aiStack_80[uVar7 * 4 + 2] = 0x40;
    aiStack_80[uVar7 * 4 + 3] = 0;
    while (lVar2 = sceSifSetDma(aiStack_80,uVar7 + 1), lVar2 == 0) {
      for (iVar5 = 0xfffff; iVar5 != -1; iVar5 = iVar5 + -1) {
      }
    }
  }
  else {
    do {
      lVar4 = FUN_00266830(0xffffffff80000008,uVar3,0x40,lVar2,*(undefined4 *)(param_1 + 0x28),iVar5
                          );
    } while (lVar4 == 0);
  }
  return;
}

