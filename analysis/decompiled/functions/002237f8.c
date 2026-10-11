/* Ghidra pseudocode. PS2 address: 002237f8. Not validated source. */

int FUN_002237f8(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  short sStack_10;
  ushort uStack_e;
  
  sStack_10 = (short)param_2;
  if (sStack_10 == -1) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)((param_2 & 0xffff) * 8 + *(int *)(param_1 + 0xc));
  }
  uStack_e = (ushort)(param_2 >> 0x10);
  if ((piVar2 == (int *)0x0) || ((long)*(short *)(*piVar2 + 0x24) <= (long)(ulong)uStack_e)) {
    iVar1 = 0;
  }
  else {
    iVar1 = piVar2[3] + (uint)uStack_e * 0x110;
  }
  return iVar1;
}

