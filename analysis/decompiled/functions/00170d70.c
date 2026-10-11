/* Ghidra pseudocode. PS2 address: 00170d70. Not validated source. */

void FUN_00170d70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar1 = param_1[1];
  iVar4 = *param_1 >> 4;
  if (0x28 < iVar4) {
    iVar4 = 0x28;
  }
  iVar5 = iVar1;
  if (0x1e0 < iVar1) {
    iVar5 = 0x1e0;
  }
  if (0 < iVar4) {
    iVar2 = 0;
    do {
      FUN_001c4a18(0x2913b0,iVar2,0,0x10,iVar5,param_2);
      iVar3 = iVar3 + 1;
      param_2 = param_2 + (iVar1 >> 4) * 0x400;
      FUN_0023e608(0);
      iVar2 = iVar3 * 0x10;
    } while (iVar3 < iVar4);
  }
  return;
}

