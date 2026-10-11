/* Ghidra pseudocode. PS2 address: 001ec0d8. Not validated source. */

void FUN_001ec0d8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x2c);
  if (0 < *(short *)(*(int *)(param_1 + 0x18) + 0x28)) {
    do {
      uVar1 = FUN_001eb548(param_2,*(int *)(param_1 + 0x20) + *(int *)(iVar2 + 4) * 0x10);
      *(undefined4 *)(iVar2 + 4) = uVar1;
      if (-1 < *(int *)(iVar2 + 8)) {
        uVar1 = FUN_001eb548(param_2,*(int *)(param_1 + 0x20) + *(int *)(iVar2 + 8) * 0x10);
        *(undefined4 *)(iVar2 + 8) = uVar1;
      }
      lVar3 = (long)((int)lVar3 + 1);
      iVar2 = iVar2 + 0x1c;
    } while (lVar3 < *(short *)(*(int *)(param_1 + 0x18) + 0x28));
  }
  return;
}

