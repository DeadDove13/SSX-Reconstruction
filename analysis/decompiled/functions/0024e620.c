/* Ghidra pseudocode. PS2 address: 0024e620. Not validated source. */

void FUN_0024e620(int *param_1,uint param_2,long param_3,int param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10 << (param_2 & 0x1f);
  iVar2 = *param_1;
  if (param_5 != 0) {
    iVar2 = *param_1 >> 1;
  }
  if (param_3 < 1) {
    iVar1 = iVar2 << 1;
    if (-1 < param_3) goto LAB_0024e69c;
    iVar2 = (iVar2 + -1) - ((~(uint)param_3 << (param_2 & 0x1f)) + param_4);
    if (iVar2 < -iVar3) {
      iVar2 = iVar2 + iVar3 * 2;
    }
  }
  else {
    iVar2 = iVar2 + 1 + ((uint)param_3 - 1 << (param_2 & 0x1f)) + param_4;
    iVar1 = iVar2 * 2;
    if (iVar2 < iVar3) goto LAB_0024e69c;
    iVar2 = iVar2 + iVar3 * -2;
  }
  iVar1 = iVar2 << 1;
LAB_0024e69c:
  if (param_5 == 0) {
    iVar1 = iVar2;
  }
  *param_1 = iVar1;
  return;
}

