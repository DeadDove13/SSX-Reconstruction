/* Ghidra pseudocode. PS2 address: 00218d68. Not validated source. */

float FUN_00218d68(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = FUN_00218898();
  fVar3 = 0.0;
  iVar2 = FUN_00223368(0x299cc8,*(undefined4 *)(param_1 + 8));
  iVar2 = *(int *)(iVar2 + 0x28);
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 + -1;
      fVar3 = fVar3 + *(float *)(iVar1 + 0x74);
      iVar1 = FUN_002238b8(0x299cc8,iVar1 + 0x54);
    } while (iVar2 != 0);
  }
  return fVar3;
}

