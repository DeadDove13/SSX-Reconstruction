/* Ghidra pseudocode. PS2 address: 001e2420. Not validated source. */

void FUN_001e2420(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(uint *)(param_1 + 0x438) = (uint)(DAT_0027ad04 == 1);
  do {
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x80) <= iVar1) {
LAB_001e2494:
      if (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x44) == 0) {
        *(undefined4 *)(*(int *)(DAT_002859e4 + 0x38) + 0x1c) = *(undefined4 *)(param_1 + 0x414);
      }
      iVar1 = *(int *)(DAT_002859e4 + 0x38);
      *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(iVar1 + 0x1c);
      FUN_00196198(iVar1,param_1 + 0x118);
      iVar1 = *(int *)(param_1 + 0x438);
      *(undefined4 *)(*(int *)(DAT_002859e4 + 0x38) + 0x20) = 1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x41c) = 1;
        *(undefined4 *)(param_1 + 0xf8) = 0x43b40000;
        *(undefined4 *)(param_1 + 0xf4) = 0x43b40000;
        *(undefined4 *)(param_1 + 0x418) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0xf4) = 0x43b40000;
        *(undefined4 *)(param_1 + 0xf8) = 0x42a00000;
        *(undefined4 *)(param_1 + 0x41c) = 2;
        *(undefined4 *)(param_1 + 0x418) = 1;
      }
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x42c) = 0;
      *(undefined4 *)(param_1 + 0x428) = 0;
      *(undefined4 *)(param_1 + 0x3fc) = 0;
      *(undefined4 *)(param_1 + 0x404) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0x44200000;
      *(undefined4 *)(param_1 + 0x10c) = 0x43a00000;
      *(undefined4 *)(param_1 + 0x100) = 0x44200000;
      if (*(int *)(param_1 + 0x418) == 2) {
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xf8);
        return;
      }
      if (*(int *)(param_1 + 0x418) == 1) {
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xf4);
        return;
      }
      *(undefined4 *)(param_1 + 0xf0) = 0x43f00000;
      return;
    }
    if (**(int **)(*(int *)(*(int *)(DAT_002859e4 + 0x14) + iVar1 * 4 + 0x90) + 0x8a0) ==
        DAT_002c5128) {
      *(int *)(param_1 + 0x414) = iVar1;
      goto LAB_001e2494;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

