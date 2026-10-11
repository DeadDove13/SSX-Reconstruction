/* Ghidra pseudocode. PS2 address: 00266e20. Not validated source. */

void FUN_00266e20(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00266d00(param_2);
  iVar2 = (int)uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  *(undefined4 *)(iVar2 + 0x20) = 0x8000000c;
  FUN_00266870(0xffffffff80000008,uVar3,0x40,*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  return;
}

