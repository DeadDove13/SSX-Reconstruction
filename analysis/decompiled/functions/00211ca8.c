/* Ghidra pseudocode. PS2 address: 00211ca8. Not validated source. */

undefined4 FUN_00211ca8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154 + param_2 * 0x14);
  if (iVar1 < -7) {
    if (((-0xb < iVar1) || (-0x2711 < iVar1)) || (iVar1 < -0x2712)) {
      return 0xfffffff6;
    }
  }
  else if (0 < iVar1) {
    return 0xfffffff6;
  }
  return *(undefined4 *)(param_2 * 0x14 + param_1 + 0x154);
}

