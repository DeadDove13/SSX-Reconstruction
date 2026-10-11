/* Ghidra pseudocode. PS2 address: 00218e78. Not validated source. */

void FUN_00218e78(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int aiStack_40 [4];
  
  FUN_001978a0(param_2,param_1,0xc);
  FUN_001978a0(param_2,aiStack_40,4);
  iVar2 = (int)param_1;
  *(int *)(iVar2 + 0xc) = DAT_00299ccc + aiStack_40[0];
  iVar1 = FUN_00223368(0x299cc8,*(undefined4 *)(iVar2 + 8));
  *(uint *)(iVar2 + 0x10) = (uint)*(ushort *)(iVar1 + 0x24);
  uVar3 = FUN_00218d68(param_1);
  *(undefined4 *)(iVar2 + 0x14) = uVar3;
  return;
}

