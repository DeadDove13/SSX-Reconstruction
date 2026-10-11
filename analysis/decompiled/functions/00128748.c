/* Ghidra pseudocode. PS2 address: 00128748. Not validated source. */

undefined8 FUN_00128748(undefined8 param_1)

{
  int in_t0_lo;
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00122128();
  fVar2 = *(float *)(in_t0_lo + 0x1c);
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 8) = &DAT_002a98c8;
  *(int *)(iVar1 + 0x4c) = in_t0_lo;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(int *)(iVar1 + 0x38) = (int)(fVar2 * 60.0);
  uVar3 = *(undefined4 *)(in_t0_lo + 0x14);
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 0x58) = uVar3;
  uVar3 = *(undefined4 *)(in_t0_lo + 8);
  uVar4 = *(undefined4 *)(in_t0_lo + 0x18);
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 1;
  *(undefined4 *)(iVar1 + 0x5c) = uVar4;
  *(undefined4 *)(iVar1 + 0x34) = uVar3;
  FUN_00128870(param_1);
  *(uint *)(*(int *)(iVar1 + 0x28) + 0xe8) =
       *(uint *)(*(int *)(iVar1 + 0x28) + 0xe8) & 0xfffffffd | 4;
  return param_1;
}

