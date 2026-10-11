/* Ghidra pseudocode. PS2 address: 001703d0. Not validated source. */

long FUN_001703d0(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_001703b8();
  iVar2 = (int)param_1;
  if (lVar1 != 0) {
    *(undefined4 *)(iVar2 + 0xb24) = 0;
  }
  *(int *)(iVar2 + 0xb24) = *(int *)(iVar2 + 0xb24) + 1;
  if (*(int *)(iVar2 + 0xb38) == 0) {
    FUN_0016dea0(param_1,0x708);
  }
  if (*(int *)(*(int *)(iVar2 + 0xb3c) + 0x4d0) == 0) {
    if (param_2 == -1) {
      FUN_00170590(param_1,lVar1,0,0);
    }
    else {
      FUN_00170590(param_1,lVar1,param_2,0);
    }
  }
  return lVar1;
}

