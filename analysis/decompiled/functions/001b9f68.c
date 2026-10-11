/* Ghidra pseudocode. PS2 address: 001b9f68. Not validated source. */

void FUN_001b9f68(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00187dc8(DAT_002859e4);
  if (lVar2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xfc);
  }
  else {
    lVar2 = FUN_00187dc8(DAT_002859e4);
    if (lVar2 == 1) {
      uVar1 = *(undefined4 *)(param_1 + 0xf8);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x100);
    }
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  return;
}

