/* Ghidra pseudocode. PS2 address: 0015c9d0. Not validated source. */

void FUN_0015c9d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  iVar2 = (int)param_1;
  FUN_0025bbe4(iVar2 + 0x18);
  FUN_00160530(auStack_40,param_2,0x2c4728,0x2c4730);
  if (*(int *)(iStack_3c + 0x16c) == 0) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  else {
    iVar1 = *(int *)(iVar2 + 8) + 1;
    *(int *)(iVar2 + 8) = iVar1;
    if (2 < iVar1) {
      *(undefined4 *)(iVar2 + 8) = 2;
    }
  }
  FUN_0015c650(param_1,param_2);
  FUN_0015c990(param_1,auStack_40);
  FUN_0015f350(auStack_40,2);
  return;
}

