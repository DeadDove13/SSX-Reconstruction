/* Ghidra pseudocode. PS2 address: 002394c8. Not validated source. */

uint FUN_002394c8(long param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_00238a38();
  puVar2 = (uint *)uVar1;
  puVar2[5] = param_3;
  puVar2[4] = param_2;
  *puVar2 = *puVar2 & 0xff0fffff | 0x600000;
  if (param_1 == 0) {
    puVar2[3] = 6;
    FUN_002396c8(uVar1);
  }
  puVar2[9] = (uint)param_1;
  FUN_002385e0(uVar1);
  return *puVar2;
}

