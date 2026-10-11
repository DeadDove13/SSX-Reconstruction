/* Ghidra pseudocode. PS2 address: 00190c78. Not validated source. */

void FUN_00190c78(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = (int)param_1;
  piVar2 = (int *)(iVar4 + 0x24);
  do {
    if (*(int *)(iVar4 + 0x18) <= iVar3) {
      *(int *)(iVar4 + 0x10) = (int)param_2;
LAB_00190cd0:
      FUN_00190c08(param_1,param_2,0);
      return;
    }
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
    if (iVar1 == *(int *)(iVar4 + 0x10)) {
      FUN_0018e558(iVar4 + 0x14);
      *(int *)(iVar4 + 0x10) = (int)param_2;
      goto LAB_00190cd0;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

