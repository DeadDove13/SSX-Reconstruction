/* Ghidra pseudocode. PS2 address: 0019d518. Not validated source. */

void FUN_0019d518(long param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  uVar1 = *(uint *)(*(int *)(iVar2 + 0x58) + 0xe8);
  *(uint *)(*(int *)(iVar2 + 0x58) + 0xe8) = uVar1 & 0xffff0000 | (int)uVar1 >> 0x10 | 2;
  if (param_1 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x38) + 0xc))
              (iVar2 + 0x30 + (int)*(short *)(*(int *)(iVar2 + 0x38) + 8),3);
  }
  return;
}

