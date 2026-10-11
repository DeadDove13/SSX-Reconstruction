/* Ghidra pseudocode. PS2 address: 00221a98. Not validated source. */

undefined8 FUN_00221a98(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  FUN_0021de18(puVar3 + 0xf);
  FUN_00221a08(puVar3 + 0x14);
  *puVar3 = 0;
  puVar3[0x2b8] = 0xffffffff;
  puVar3[1] = 0;
  iVar2 = 0x1ff;
  puVar3[2] = 0;
  puVar1 = puVar3 + 0x2b6;
  puVar3[3] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xd] = 0;
  puVar3[0x2b9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xe] = 0;
  puVar3[0x2b7] = 0;
  do {
    *puVar1 = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return param_1;
}

