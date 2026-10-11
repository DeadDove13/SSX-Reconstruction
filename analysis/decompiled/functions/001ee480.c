/* Ghidra pseudocode. PS2 address: 001ee480. Not validated source. */

void FUN_001ee480(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x6610);
  iVar5 = 0;
  while( true ) {
    iVar3 = 0;
    if (0 < iVar2) {
      iVar4 = 0;
      iVar2 = *(int *)(param_1 + 0x6584);
      while( true ) {
        iVar3 = iVar3 + 1;
        iVar2 = iVar4 + iVar2;
        iVar1 = *(int *)(iVar2 + 4);
        iVar4 = iVar4 + 0x14;
        (**(code **)(iVar1 + 0x2c))
                  (iVar2 + *(short *)(iVar1 + 0x28),iVar5,param_1 + iVar5 * 0x250 + 0x3e30);
        if (*(int *)(param_1 + 0x6610) <= iVar3) break;
        iVar2 = *(int *)(param_1 + 0x6584);
      }
    }
    if (4 < iVar5 + 1) break;
    iVar2 = *(int *)(param_1 + 0x6610);
    iVar5 = iVar5 + 1;
  }
  return;
}

