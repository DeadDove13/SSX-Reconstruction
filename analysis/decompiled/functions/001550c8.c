/* Ghidra pseudocode. PS2 address: 001550c8. Not validated source. */

void FUN_001550c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = FUN_00156b78();
  piVar1 = *(int **)(iVar2 * 0x50 + (int)param_1 + 0x1520);
  if (param_3 == 8) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_0027e0c0 + (int)param_3 * 0x10;
  }
  FUN_00156150(param_1,(int)param_1 + iVar2 * 0x50 + 0x1508,puVar3,
               *piVar1 * 0xdc + piVar1[5] * 0x14 + 0x27c920,param_4);
  return;
}

