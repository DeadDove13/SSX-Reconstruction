/* Ghidra pseudocode. PS2 address: 00197a98. Not validated source. */

undefined4 FUN_00197a98(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 8);
  if ((iVar1 == 0) || (iVar2 = *(int *)(iVar4 + 0x10), iVar2 == 0)) {
    iVar2 = *(int *)(iVar4 + 0x10);
    iVar1 = *(int *)(iVar4 + 8);
  }
  *(int *)(iVar4 + 0x1c) = iVar2;
  *(int *)(iVar4 + 0x18) = iVar1;
  FUN_001978a0(param_1,auStack_30,0xc);
  if ((*(int *)(iVar4 + 0x18) == 0) || (iVar1 = *(int *)(iVar4 + 0x1c), iVar1 == 0)) {
    iVar1 = *(int *)(iVar4 + 0x1c);
    uVar3 = *(undefined4 *)(iVar4 + 0x18);
  }
  else {
    uVar3 = *(undefined4 *)(iVar4 + 0x18);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  *(undefined4 *)(iVar4 + 8) = uVar3;
  return uStack_28;
}

