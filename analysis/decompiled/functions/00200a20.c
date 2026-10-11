/* Ghidra pseudocode. PS2 address: 00200a20. Not validated source. */

void FUN_00200a20(int param_1,int param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x8bb44 + *(int *)(param_2 + 0x390) * 4) != -1) {
    lVar1 = FUN_001f5e68();
    if (lVar1 != 0) {
      FUN_001f57b0(DAT_002c3944,lVar1,0xffffffffffffffff);
    }
    *(undefined4 *)(param_1 + 0x8bb44 + *(int *)(param_2 + 0x390) * 4) = 0xffffffff;
  }
  return;
}

