/* Ghidra pseudocode. PS2 address: 00101e30. Not validated source. */

void FUN_00101e30(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = DAT_002859e4;
  *(undefined4 *)(param_1 + 4) = 2;
  FUN_0015da00(*(undefined4 *)(iVar1 + 0xa0),
               *(undefined4 *)(*(int *)(param_1 + 8) * 0x18 + 0x277ad0));
  uVar2 = FUN_0023b170();
  uVar3 = FUN_0023b070();
  FUN_0018ac08(0x2a6d28,uVar2,uVar3);
  return;
}

