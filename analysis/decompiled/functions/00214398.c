/* Ghidra pseudocode. PS2 address: 00214398. Not validated source. */

int FUN_00214398(byte *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = (int)param_2 + -1;
  if (param_2 != 0) {
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 * 0x100 + (uint)bVar1;
    } while (iVar3 != -1);
  }
  return iVar2;
}

