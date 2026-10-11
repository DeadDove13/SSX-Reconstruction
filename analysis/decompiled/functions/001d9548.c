/* Ghidra pseudocode. PS2 address: 001d9548. Not validated source. */

void FUN_001d9548(int param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x44) - 2U < 2) || (*(int *)(param_1 + 0x44) == 7)) {
    FUN_0019a830(param_3,0x2c5350);
    return;
  }
  lVar1 = FUN_00211e08(*(int *)(param_1 + 0x16c),*(undefined4 *)(*(int *)(param_1 + 0x16c) + 0xc));
  if ((lVar1 != 0) &&
     (lVar1 = FUN_00211dc0(*(int *)(param_1 + 0x16c),
                           *(undefined4 *)(*(int *)(param_1 + 0x16c) + 0xc)), lVar1 == 0)) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00212110(*(undefined4 *)(param_1 + 0x16c),param_2,param_3);
      return;
    }
    lVar1 = FUN_00212388(*(undefined4 *)(param_1 + 0x16c),param_2);
    if (lVar1 == 0) {
      FUN_00212110(*(undefined4 *)(param_1 + 0x16c),param_2,param_3);
    }
    else {
      uVar2 = FUN_00234e80(DAT_002852fc,0x7e);
      FUN_0019a7f8(param_3,uVar2);
    }
    return;
  }
  FUN_0019a830(param_3,0x2c5350);
  return;
}

