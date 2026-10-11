/* Ghidra pseudocode. PS2 address: 00223790. Not validated source. */

int FUN_00223790(int param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == 0xffff) {
    return 0;
  }
  iVar1 = *(int *)((int)param_2 * 8 + *(int *)(param_1 + 0xc));
  return *(int *)(iVar1 + 0x10) +
         (uint)*(ushort *)
                (param_4 * 4 +
                 *(int *)(iVar1 + 8) + *(short *)(*(int *)(iVar1 + 4) + param_3 * 0x30 + 0xe) * 4 +
                2) * 0x1c0;
}

