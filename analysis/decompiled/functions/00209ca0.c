/* Ghidra pseudocode. PS2 address: 00209ca0. Not validated source. */

undefined4 FUN_00209ca0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  if (DAT_0029a888 == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    lVar2 = FUN_00226df0(*(undefined4 *)(param_1 + 4));
    if (lVar2 == 0) {
      uVar1 = 0xfffffff8;
    }
    else {
      iVar3 = (int)lVar2;
      *(undefined1 *)(iVar3 + 0xa7) = 1;
      *(short *)(iVar3 + 0xac) = (short)param_2;
      *(short *)(iVar3 + 0xae) = (short)param_3;
      FUN_00228a60(*(undefined4 *)(iVar3 + 8),param_2,param_3);
      uVar1 = 0;
    }
  }
  return uVar1;
}

