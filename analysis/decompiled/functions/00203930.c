/* Ghidra pseudocode. PS2 address: 00203930. Not validated source. */

void FUN_00203930(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  iVar1 = *(int *)((int)param_2 + 0x80);
  uVar3 = 0x40;
  if (*(int *)(iVar1 + 0x34c) == 2) {
    uVar3 = FUN_00202b28(iVar1,0x40);
    uVar2 = FUN_001f7358(5,uVar3);
    uVar3 = FUN_001f7358(6,uVar3);
  }
  *(undefined4 *)((int)param_2 + 100) = uVar2;
  FUN_00204520(param_2,uVar3);
  return;
}

