/* Ghidra pseudocode. PS2 address: 002038a0. Not validated source. */

void FUN_002038a0(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_001f8290();
  if (DAT_002c5530 == 0) {
    uVar1 = FUN_00202b28(uVar1);
    lVar2 = FUN_001f7358(4,uVar1);
    lVar3 = 0x7f;
    if (lVar2 < 0x80) {
      lVar3 = lVar2;
    }
    if (lVar3 < 0) {
      lVar3 = 0;
    }
    *(float *)(param_1 + 0x8b6ec) = ((float)(int)lVar3 / 127.0) * *(float *)(param_1 + 0x8b6e4);
  }
  return;
}

