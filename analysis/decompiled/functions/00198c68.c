/* Ghidra pseudocode. PS2 address: 00198c68. Not validated source. */

void FUN_00198c68(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_00210840(0x28ac20,0x4000,0x4000000,0x2b5188,0,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x4000);
  }
  *(int *)(param_1 + 0x5d68) = (int)lVar1;
  lVar1 = FUN_00210840(0x28ac20,0x4000,0x4000000,0x2b5198,0,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0x4000);
  }
  *(int *)(param_1 + 0x5d70) = (int)lVar1;
  *(undefined4 *)(param_1 + 0x5d94) = 0;
  *(undefined4 *)(param_1 + 0x5d7c) = 0;
  *(undefined4 *)(param_1 + 0x5d6c) = 0;
  *(undefined4 *)(param_1 + 0x5d84) = 0;
  *(undefined4 *)(param_1 + 0x5d88) = 0;
  *(undefined4 *)(param_1 + 0x5d74) = 0;
  *(undefined4 *)(param_1 + 0x5d78) = 0;
  *(undefined4 *)(param_1 + 0x5d80) = 0;
  *(undefined4 *)(param_1 + 0x5d98) = 0;
  *(undefined4 *)(param_1 + 0x5d9c) = 0;
  *(undefined4 *)(param_1 + 0x5da0) = 0;
  *(undefined4 *)(param_1 + 0x5da4) = 0;
  *(undefined4 *)(param_1 + 0x5d8c) = 0;
  *(undefined4 *)(param_1 + 0x5d90) = 0;
  return;
}

