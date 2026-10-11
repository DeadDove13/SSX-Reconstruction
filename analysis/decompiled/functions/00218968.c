/* Ghidra pseudocode. PS2 address: 00218968. Not validated source. */

int FUN_00218968(float param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  do {
    iVar2 = *(int *)(param_2 + 0xc);
    if (*(float *)(iVar2 + 0x78) <= param_1) {
      if (param_1 < *(float *)(iVar2 + 0x78) + *(float *)(iVar2 + 0x74)) {
        return iVar2;
      }
      iVar2 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    iVar2 = FUN_002238b8(0x299cc8,iVar2 + 0x50);
    uVar1 = *(ushort *)(iVar2 + 0x5a);
    *(int *)(param_2 + 0xc) = iVar2;
  } while ((uVar1 >> 1 & 1) == 0);
  return iVar2;
}

