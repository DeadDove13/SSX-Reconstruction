/* Ghidra pseudocode. PS2 address: 001b3710. Not validated source. */

void FUN_001b3710(undefined4 *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  FUN_001ab908();
  if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x438) == 0) {
    param_1[0xd] = 1;
    uVar1 = *param_1;
  }
  else {
    uVar1 = *param_1;
  }
  uVar2 = FUN_001a94b0(uVar1,0xffffffffffffffff);
  if (((uVar2 != 0) && ((uVar2 & 0x800) != 0)) &&
     (FUN_001a94a8(*param_1), param_1[param_1[0xe] * 2 + 3] == 0)) {
    FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),0xd,0xffffffffffffffff);
    FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),1,0xffffffffffffffff);
    return;
  }
  return;
}

