/* Ghidra pseudocode. PS2 address: 001f5970. Not validated source. */

int FUN_001f5970(int param_1,int param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  param_1 = param_1 + 0x329c0;
  while ((lVar1 = FUN_001f4f18(param_1), lVar1 == 0 || (param_2 = param_2 + -1, param_2 != 0))) {
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0xa0;
    if (0x3f < iVar2) {
      (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
                (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),0,0x2c54f8,
                 0x2bc860,0x229);
      return -1;
    }
  }
  return iVar2;
}

