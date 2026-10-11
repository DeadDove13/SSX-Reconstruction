/* Ghidra pseudocode. PS2 address: 00239408. Not validated source. */

uint FUN_00239408(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  undefined8 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_00238a38();
  puVar2 = (uint *)uVar1;
  puVar2[5] = param_6;
  *puVar2 = *puVar2 & 0xff0fffff | 0x500000;
  if (param_1 == 0) {
    puVar2[3] = 6;
    FUN_002396c8(uVar1);
  }
  puVar2[9] = (uint)param_1;
  puVar2[4] = param_5;
  puVar2[7] = param_4;
  puVar2[6] = param_2;
  puVar2[8] = param_3;
  FUN_002385e0(uVar1);
  return *puVar2;
}

