/* Ghidra pseudocode. PS2 address: 00202430. Not validated source. */

void FUN_00202430(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x8b6f4)) {
    iVar2 = param_1 + 0x8b6f8;
    iVar3 = param_2;
    do {
      FUN_0025bbe4(iVar3,iVar2);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x40;
      iVar3 = iVar3 + 0x40;
    } while (iVar1 < *(int *)(param_1 + 0x8b6f4));
  }
  iVar1 = *(int *)(param_1 + 0x8b6f4);
  if (iVar1 < 0x10) {
    param_2 = iVar1 * 0x40 + param_2;
    do {
      iVar3 = iVar1 + 1;
      FUN_0025b630(param_2,0x2bcc08,iVar1);
      param_2 = param_2 + 0x40;
      iVar1 = iVar3;
    } while (iVar3 < 0x10);
  }
  return;
}

