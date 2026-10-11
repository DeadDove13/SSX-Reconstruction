/* Ghidra pseudocode. PS2 address: 0022d150. Not validated source. */

int FUN_0022d150(int param_1,int param_2,ushort param_3,undefined2 param_4)

{
  int *piVar1;
  int iVar2;
  
  if ((param_3 & 0x3f) != 0) {
    param_3 = param_3 + 0x40 & 0xffc0;
  }
  FUN_002250c0();
  DAT_0029af80 = DAT_0029af80 + 1;
  if (DAT_0029af80 == 0) {
    DAT_0029af80 = 1;
  }
  iVar2 = 0;
  piVar1 = &DAT_0029af88;
  do {
    iVar2 = iVar2 + 1;
    if (*piVar1 == 0) {
      DAT_0029af84 = DAT_0029af84 + '\x01';
      piVar1[1] = param_1;
      *piVar1 = DAT_0029af80;
      piVar1[2] = param_2;
      *(ushort *)(piVar1 + 3) = param_3;
      *(undefined2 *)((int)piVar1 + 0xe) = param_4;
      FUN_002250a0();
      return DAT_0029af80;
    }
    piVar1 = piVar1 + 4;
  } while (iVar2 < 8);
  return 0;
}

