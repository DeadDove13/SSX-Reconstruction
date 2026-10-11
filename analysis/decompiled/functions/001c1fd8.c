/* Ghidra pseudocode. PS2 address: 001c1fd8. Not validated source. */

void FUN_001c1fd8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_3 + 0x4bc) = param_1;
  iVar2 = 7;
  *(undefined4 *)(param_3 + 0x4c0) = param_2;
  iVar1 = param_3 + 0x10;
  do {
    iVar2 = iVar2 + -1;
    *(float *)(iVar1 + 4) =
         (*(float *)(param_3 + 0x4bc) + *(float *)(param_3 + 0x4bc)) - *(float *)(param_3 + 0x4c0);
    *(float *)(iVar1 + 8) = *(float *)(param_3 + 0x4c0) - *(float *)(param_3 + 0x4bc);
    iVar1 = iVar1 + 0x90;
  } while (-1 < iVar2);
  return;
}

