/* Ghidra pseudocode. PS2 address: 00160688. Not validated source. */

ulong FUN_00160688(char *param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = (ulong)*param_1;
  iVar4 = -1;
  if (param_2 != 0) {
    iVar4 = param_2;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar2 = 0;
    while (iVar4 != 0) {
      param_1 = param_1 + 1;
      uVar1 = (long)(int)((int)uVar1 << 0x17 ^ uVar2) ^ uVar3;
      uVar3 = (ulong)*param_1;
      iVar4 = iVar4 + -1;
      if (uVar3 == 0) {
        return uVar1;
      }
      uVar2 = (int)uVar1 >> 7;
    }
  }
  return uVar1;
}

