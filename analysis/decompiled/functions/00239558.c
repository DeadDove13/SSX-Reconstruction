/* Ghidra pseudocode. PS2 address: 00239558. Not validated source. */

uint FUN_00239558(undefined8 param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_00238a38();
  puVar2 = (uint *)uVar1;
  puVar2[5] = param_3;
  puVar2[4] = param_2;
  *puVar2 = *puVar2 & 0xff0fffff | 0x700000;
  FUN_002385e0(uVar1);
  return *puVar2;
}

