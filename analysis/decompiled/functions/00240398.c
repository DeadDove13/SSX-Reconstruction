/* Ghidra pseudocode. PS2 address: 00240398. Not validated source. */

ushort * FUN_00240398(int param_1,ulong param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(ushort *)(param_1 + 10) != 0) {
    puVar2 = (ushort *)(param_1 + 0x10);
    do {
      puVar1 = (ushort *)(param_1 + (uint)*puVar2 * 4);
      iVar3 = iVar3 + 1;
      if (*puVar1 == param_2) {
        return puVar1;
      }
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 10));
  }
  return (ushort *)0x0;
}

