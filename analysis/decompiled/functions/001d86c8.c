/* Ghidra pseudocode. PS2 address: 001d86c8. Not validated source. */

undefined8 FUN_001d86c8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = DAT_002c366c;
  puVar2 = (undefined4 *)param_1;
  puVar2[1] = 0;
  puVar2[0x11] = 0;
  puVar2[0xb] = 0;
  puVar2[0xe] = 0;
  puVar2[0xc] = 0;
  iVar3 = 0;
  puVar2[0xd] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[10] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[0xf] = 0;
  puVar2[0x5c] = &DAT_002b7a00;
  *puVar2 = 1;
  puVar2[0x10] = uVar1;
  FUN_0023bbd0(puVar2 + 0x3a,0,0x42);
  puVar2[0x5b] = 0;
  do {
    FUN_001d9538(param_1,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return param_1;
}

