/* Ghidra pseudocode. PS2 address: 00239330. Not validated source. */

uint FUN_00239330(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  
  uVar2 = FUN_00238a38();
  puVar3 = (uint *)uVar2;
  puVar3[5] = param_6;
  puVar3[4] = param_5;
  *puVar3 = *puVar3 & 0xff0fffff | 0x400000;
  if (param_1 == 0) {
    puVar3[3] = 6;
    FUN_002396c8(uVar2);
  }
  iVar1 = *(int *)((uint)param_1 + 4);
  puVar3[8] = param_3;
  puVar3[6] = param_2;
  puVar3[9] = (uint)param_1;
  if (iVar1 < (int)(param_2 + param_4)) {
    param_4 = iVar1 - param_2;
  }
  puVar3[7] = param_4;
  FUN_002385e0(uVar2);
  return *puVar3;
}

