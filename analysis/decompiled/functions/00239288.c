/* Ghidra pseudocode. PS2 address: 00239288. Not validated source. */

uint FUN_00239288(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  
  uVar2 = FUN_00238a38();
  iVar1 = DAT_002a3380;
  puVar3 = (uint *)uVar2;
  *puVar3 = *puVar3 & 0xff0fffff | 0x300000;
  puVar3[4] = param_2;
  puVar3[5] = param_3;
  puVar3[9] = param_1;
  do {
    if (iVar1 == 0) {
LAB_00239308:
      FUN_002385e0(uVar2);
      return *puVar3;
    }
    if (*(uint *)(iVar1 + 4) == param_1) {
      puVar3[3] = 3;
      FUN_002396c8(uVar2);
      goto LAB_00239308;
    }
    iVar1 = *(int *)(iVar1 + 0xc);
  } while( true );
}

