/* Ghidra pseudocode. PS2 address: 001840e0. Not validated source. */

void FUN_001840e0(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0023a998();
  }
  lVar2 = FUN_00236908(0x2b3658);
  lVar3 = FUN_00236908(0x2b3670);
  lVar4 = FUN_00236908(0x2b3688);
  if (lVar3 < lVar2) {
    lVar3 = lVar2;
  }
  if (lVar4 < lVar3) {
    lVar4 = lVar3;
  }
  *(int *)(param_1 + 8) = (int)lVar4;
  uVar1 = FUN_0023a448(0x2c4da0,lVar4,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

