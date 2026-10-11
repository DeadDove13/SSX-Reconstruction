/* Ghidra pseudocode. PS2 address: 00247038. Not validated source. */

undefined1 FUN_00247038(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_002d185c + param_2 * 0x60 + param_1 * 0x300);
  FUN_002669d0(iVar1,0x100);
  return *(undefined1 *)
          (iVar1 + (uint)(*(int *)(iVar1 + 0x58) < *(int *)(iVar1 + 0xd8)) * 0x80 + 0x71);
}

