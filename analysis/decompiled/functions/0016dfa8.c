/* Ghidra pseudocode. PS2 address: 0016dfa8. Not validated source. */

void FUN_0016dfa8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0016dd88();
  uVar3 = *(undefined4 *)(iVar1 + 0x8c);
  uVar2 = *(undefined4 *)(iVar1 + 0x84);
  uVar4 = *(undefined4 *)(iVar1 + 0x88);
  *param_3 = *(undefined4 *)(iVar1 + 0x80);
  param_3[1] = uVar2;
  param_3[2] = uVar4;
  param_3[3] = uVar3;
  return;
}

