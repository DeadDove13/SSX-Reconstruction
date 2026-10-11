/* Ghidra pseudocode. PS2 address: 001603d8. Not validated source. */

undefined4 FUN_001603d8(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = FUN_00189b78(DAT_002859e4,*(undefined4 *)(param_1 + 0xc));
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 1;
    if (*(int *)((int)lVar2 + 0x6cf4) != 0) {
      fVar3 = (float)FUN_00150e78();
      uVar1 = 0;
      if (1.0 <= fVar3) {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

