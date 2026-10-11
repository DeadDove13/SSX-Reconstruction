/* Ghidra pseudocode. PS2 address: 001ef2f8. Not validated source. */

void FUN_001ef2f8(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = (int)param_2;
  iVar3 = 0;
  if (0 < (int)param_1[0x1984]) {
    iVar4 = 0;
    iVar2 = param_1[0x1961];
    while( true ) {
      iVar3 = iVar3 + 1;
      iVar2 = iVar4 + iVar2;
      iVar1 = *(int *)(iVar2 + 4);
      iVar4 = iVar4 + 0x14;
      (**(code **)(iVar1 + 0x14))(iVar2 + *(short *)(iVar1 + 0x10),param_2);
      if ((int)param_1[0x1984] <= iVar3) break;
      iVar2 = param_1[0x1961];
    }
  }
  return;
}

