/* Ghidra pseudocode. PS2 address: 002344a0. Not validated source. */

void FUN_002344a0(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*param_2 != 0) {
    bVar1 = *param_2;
    while( true ) {
      iVar2 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      *(ushort *)(iVar2 + param_1) = (ushort)bVar1;
      if (param_2[iVar3] == 0) break;
      bVar1 = param_2[iVar3];
    }
  }
  *(undefined2 *)(iVar3 * 2 + param_1) = 0;
  return;
}

