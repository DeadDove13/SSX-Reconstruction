/* Ghidra pseudocode. PS2 address: 00228138. Not validated source. */

undefined4 FUN_00228138(ulong param_1,undefined2 param_2,long param_3)

{
  int iVar1;
  
  if (DAT_0029a888 == '\0') {
    return 0xfffffff6;
  }
  if (param_1 < 8) {
    iVar1 = (&DAT_0029a7e8)[(int)param_1];
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  if (param_3 == 1) {
    *(undefined2 *)(iVar1 + 0x98) = param_2;
    *(undefined2 *)(iVar1 + 0x9a) = 1;
    *(undefined2 *)(iVar1 + 0x9c) = 0xffff;
    *(undefined2 *)(iVar1 + 0x9e) = 0;
  }
  else if (*(short *)(iVar1 + 0x9a) == 1) {
    *(short *)(iVar1 + 0x9e) = (short)param_3;
    *(undefined2 *)(iVar1 + 0x9c) = param_2;
  }
  else {
    *(short *)(iVar1 + 0x9a) = (short)param_3;
    *(undefined2 *)(iVar1 + 0x98) = param_2;
  }
  return 0;
}

