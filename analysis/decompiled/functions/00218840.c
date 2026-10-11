/* Ghidra pseudocode. PS2 address: 00218840. Not validated source. */

void FUN_00218840(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 8) = param_2;
  iVar1 = FUN_00223368(0x299cc8);
  *(uint *)(iVar2 + 0x10) = (uint)*(ushort *)(iVar1 + 0x24);
  uVar3 = FUN_00218d68(param_1);
  *(undefined4 *)(iVar2 + 0x14) = uVar3;
  uVar3 = FUN_00218898(param_1);
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  return;
}

