/* Ghidra pseudocode. PS2 address: 0018bf30. Not validated source. */

undefined4 FUN_0018bf30(int param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00285b40 + param_1 * 0x4c + -0x4c;
  if (param_2 != 0) {
    FUN_0025c0c8(param_2,iVar2,0x40);
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x48);
  if (param_3 != 0) {
    *(undefined4 *)param_3 = uVar1;
    uVar1 = *(undefined4 *)(iVar2 + 0x48);
  }
  return uVar1;
}

