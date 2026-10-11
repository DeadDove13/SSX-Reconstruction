/* Ghidra pseudocode. PS2 address: 0013a380. Not validated source. */

void FUN_0013a380(int *param_1)

{
  if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x24) == 4) {
    if (-1 < *(int *)(*param_1 + 0x24)) {
      FUN_0015da00(*(undefined4 *)(*(int *)(*param_1 + 0x24) * 0x80 + DAT_002859e4 + 0xa0),0x2abaa0)
      ;
    }
    FUN_0014cd18(*(undefined4 *)(*param_1 + 0x6cf4),3,0,5);
    FUN_0010b340(*param_1,6);
    FUN_0010b330(*param_1,0x12);
    return;
  }
  return;
}

