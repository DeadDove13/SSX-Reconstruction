/* Ghidra pseudocode. PS2 address: 00154998. Not validated source. */

void FUN_00154998(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_00156b78();
  iVar2 = (int)param_1;
  puVar5 = (undefined4 *)(iVar2 + 0x1520 + iVar1 * 0x50);
  FUN_00156b88(param_1,*(undefined4 *)*puVar5);
  iVar1 = iVar1 * 0x50 + iVar2;
  iVar2 = *(int *)*puVar5 * 0x18 + iVar2;
  uVar3 = *(undefined8 *)(iVar2 + 0x14);
  uVar4 = *(undefined8 *)(iVar2 + 0x1c);
  *(undefined8 *)(iVar1 + 0x1528) = *(undefined8 *)(iVar2 + 0xc);
  *(undefined8 *)(iVar1 + 0x1530) = uVar3;
  *(undefined8 *)(iVar1 + 0x1538) = uVar4;
  FUN_00156fe0(param_1);
  return;
}

