/* Ghidra pseudocode. PS2 address: 0019ec80. Not validated source. */

void FUN_0019ec80(long param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    uVar1 = *(uint *)(*(int *)(iVar2 + 0x74) + 0xe8);
    *(uint *)(*(int *)(iVar2 + 0x74) + 0xe8) = uVar1 & 0xffff0000 | (int)uVar1 >> 0x10 | 2;
    if (param_1 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x54) + 0xc))
                (iVar2 + 0x4c + (int)*(short *)(*(int *)(iVar2 + 0x54) + 8),3);
    }
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0x54) + 0x6c))
              (iVar2 + 0x4c + (int)*(short *)(*(int *)(iVar2 + 0x54) + 0x68));
  }
  return;
}

