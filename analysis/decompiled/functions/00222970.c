/* Ghidra pseudocode. PS2 address: 00222970. Not validated source. */

undefined4 FUN_00222970(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x28) != 0) && (-1 < *(short *)(param_2 + 0xfc))) {
    return *(undefined4 *)
            (*(short *)(param_2 + 0xfc) * 0x1c + *(int *)(*(int *)(param_1 + 0x28) + 0xc) +
            param_3 * 4);
  }
  return 0xffffffff;
}

