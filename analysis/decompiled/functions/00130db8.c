/* Ghidra pseudocode. PS2 address: 00130db8. Not validated source. */

void FUN_00130db8(void)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  piVar1 = *(int **)(*(int *)(DAT_002859e4 + 0x14) + 0x90);
  uVar3 = FUN_0019c4d0(0x28acf8);
  uVar4 = FUN_0019c4d8(0x28acf8,0);
  FUN_00106578(*piVar1,uVar3,uVar4);
  iVar2 = *(int *)*piVar1;
  (**(code **)(iVar2 + 0x4c))(*piVar1 + (int)*(short *)(iVar2 + 0x48));
  FUN_00107c80(*piVar1);
  return;
}

