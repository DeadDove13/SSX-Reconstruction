/* Ghidra pseudocode. PS2 address: 00127240. Not validated source. */

undefined8 FUN_00127240(undefined8 param_1)

{
  undefined4 uVar1;
  int in_t0_lo;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00122128();
  iVar2 = (int)param_1;
  iVar3 = iVar2 + 0x70;
  *(undefined **)(iVar2 + 8) = &DAT_002a9c80;
  FUN_00132d30(iVar3);
  fVar5 = *(float *)(in_t0_lo + 0xc);
  *(int *)(iVar2 + 0x60) = (int)*(short *)(in_t0_lo + 8);
  uVar4 = *(undefined4 *)(in_t0_lo + 0x1c);
  uVar6 = *(undefined4 *)(in_t0_lo + 0x20);
  uVar1 = 0;
  uVar7 = *(undefined4 *)(in_t0_lo + 0x18);
  *(int *)(iVar2 + 0x58) = (int)(fVar5 * 60.0);
  *(undefined4 *)(iVar2 + 0x40) = uVar7;
  *(undefined4 *)(iVar2 + 0x44) = uVar4;
  *(undefined4 *)(iVar2 + 0x48) = uVar6;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(float *)(iVar2 + 0x50) = *(float *)(in_t0_lo + 0x14) * 100.0;
  *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(in_t0_lo + 0x10);
  if (*(int *)(iVar2 + 0x60) == 1) {
    uVar1 = *(undefined4 *)(iVar2 + 0x58);
  }
  *(undefined4 *)(iVar2 + 0x5c) = uVar1;
  *(int *)(iVar2 + 0xf4) = iVar2;
  FUN_00132f40(iVar3,*(int *)(iVar2 + 0x28) + 0xd0,*(int *)(iVar2 + 0x28) + 0xdc);
  FUN_00132090(*(undefined4 *)(DAT_002859e4 + 0x28),iVar3);
  return param_1;
}

