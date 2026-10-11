/* Ghidra pseudocode. PS2 address: 00235a70. Not validated source. */

uint FUN_00235a70(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_0023ee58(DAT_002c5be4);
  puVar1 = DAT_002c5bd8;
  puVar3 = (uint *)0x0;
  if (DAT_002c5bd8 != (uint *)0x0) {
    puVar1 = (uint *)DAT_002c5bd8[1];
    puVar3 = DAT_002c5bd8;
  }
  DAT_002c5bd8 = puVar1;
  FUN_0023ea60(DAT_002c5be4);
  uVar2 = 0;
  if (puVar3 != (uint *)0x0) {
    uVar2 = DAT_002c5be0 + 0x100;
    if (uVar2 == 0) {
      uVar2 = 0x100;
    }
    DAT_002c5be0 = uVar2;
    puVar3[10] = param_2;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    *puVar3 = (byte)*puVar3 | uVar2;
    puVar3[5] = 1;
    uVar2 = FUN_002391d0(param_1,1,100,puVar3);
    puVar3[7] = uVar2;
    if (puVar3[7] == 0) {
      uVar2 = 0;
    }
    else {
      FUN_00238ea0(puVar3[7],0x2357a8);
      uVar2 = *puVar3;
    }
  }
  return uVar2;
}

