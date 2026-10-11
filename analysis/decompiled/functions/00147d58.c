/* Ghidra pseudocode. PS2 address: 00147d58. Not validated source. */

void FUN_00147d58(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_001eab58();
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0x4c;
  *(undefined4 *)(param_1 + 0x1d8) = 0xdeadbef7;
  FUN_001973f0(param_2,param_1 + 0x1d4,0x4c);
  piVar2 = (int *)(param_1 + 0x224);
  if (0 < *(int *)(param_1 + 0x1e4)) {
    iVar1 = *piVar2;
    while( true ) {
      iVar3 = iVar3 + 1;
      FUN_001973f0(param_2,iVar1,4);
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      FUN_001973f0(param_2,iVar1 + 4,4);
      if (*(int *)(param_1 + 0x1e4) <= iVar3) break;
      iVar1 = *piVar2;
    }
  }
  return;
}

