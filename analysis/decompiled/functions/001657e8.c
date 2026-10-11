/* Ghidra pseudocode. PS2 address: 001657e8. Not validated source. */

int FUN_001657e8(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  if (DAT_00299cc8 != 0) {
    uVar2 = *(undefined4 *)(DAT_00299cc8 + 0x28);
  }
  uVar3 = 0;
  if (DAT_00299cc8 != 0) {
    uVar3 = *(undefined4 *)(DAT_00299cc8 + 0x2c);
  }
  iVar1 = FUN_001654a8(param_1,uVar2,uVar3);
  return iVar1 + (param_3 * *(int *)((int)param_1 + 0x1c) + param_2) * 0xc;
}

