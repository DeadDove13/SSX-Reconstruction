/* Ghidra pseudocode. PS2 address: 00198900. Not validated source. */

undefined4 FUN_00198900(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 0x18;
  FUN_0023bac0(auStack_40,iVar1,0x18);
  if (iStack_30 == -1) {
    *param_1 = 0;
  }
  else {
    uVar2 = FUN_00195308(*(undefined4 *)(DAT_002859e4 + 0x38));
    *param_1 = uVar2;
  }
  param_1[1] = uStack_38;
  param_1[4] = uStack_2c;
  param_1[2] = uStack_34;
  return 1;
}

