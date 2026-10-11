/* Ghidra pseudocode. PS2 address: 0016f7a0. Not validated source. */

void FUN_0016f7a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = FUN_0016dd88();
  if (lVar1 != 0) {
    uVar2 = param_3[1];
    iVar3 = (int)lVar1;
    *(undefined8 *)(iVar3 + 0xa0) = *param_3;
    *(undefined8 *)(iVar3 + 0xa8) = uVar2;
    *(undefined4 *)(iVar3 + 0xb0) = 1;
    *(float *)(iVar3 + 0xa0) = *(float *)(iVar3 + 0xa0) * 128.0;
    *(float *)(iVar3 + 0xa4) = *(float *)(iVar3 + 0xa4) * 128.0;
    *(float *)(iVar3 + 0xa8) = *(float *)(iVar3 + 0xa8) * 128.0;
    *(float *)(iVar3 + 0xac) = *(float *)(iVar3 + 0xac) * 128.0;
  }
  return;
}

