/* Ghidra pseudocode. PS2 address: 00239120. Not validated source. */

uint FUN_00239120(undefined8 param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint *puVar3;
  
  uVar1 = FUN_00238a38();
  puVar3 = (uint *)uVar1;
  puVar3[5] = param_3;
  puVar3[4] = param_2;
  *puVar3 = *puVar3 & 0xff0fffff | 0x800000;
  puVar3[6] = 1;
  lVar2 = FUN_002396d0();
  puVar3[9] = (uint)lVar2;
  if (lVar2 == 0) {
    puVar3[3] = 2;
    FUN_002396c8(uVar1);
  }
  FUN_0025c0c8(puVar3[9] + 0xc,param_1,0x40);
  FUN_002385e0(uVar1);
  return *puVar3;
}

