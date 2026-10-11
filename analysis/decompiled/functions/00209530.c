/* Ghidra pseudocode. PS2 address: 00209530. Not validated source. */

void FUN_00209530(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x8b6c0 + (int)param_2 * 4);
  (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
            (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),*piVar3 == 0,
             0x2bd2d8,0x2bd1f8,0x1c0);
  lVar2 = FUN_0023a448(0x2bd2f8,0x198,0);
  if (lVar2 != 0) {
    FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0x198);
  }
  iVar1 = FUN_00208b00(lVar2,param_2,param_3,param_4,param_5,param_6);
  *piVar3 = iVar1;
  return;
}

