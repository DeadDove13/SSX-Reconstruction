/* Ghidra pseudocode. PS2 address: 00235c58. Not validated source. */

uint FUN_00235c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  
  FUN_0023ee58(DAT_002c5be4);
  puVar1 = DAT_002c5bd8;
  puVar4 = (uint *)0x0;
  if (DAT_002c5bd8 != (uint *)0x0) {
    puVar1 = (uint *)DAT_002c5bd8[1];
    puVar4 = DAT_002c5bd8;
  }
  DAT_002c5bd8 = puVar1;
  FUN_0023ea60(DAT_002c5be4);
  uVar2 = 0;
  if (puVar4 != (uint *)0x0) {
    uVar2 = DAT_002c5be0 + 0x100;
    if (uVar2 == 0) {
      uVar2 = 0x100;
    }
    DAT_002c5be0 = uVar2;
    puVar4[2] = 0;
    lVar3 = 0x8000;
    if (param_4 < 0x8001) {
      lVar3 = param_4;
    }
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[8] = (uint)param_1;
    puVar4[9] = (uint)param_2;
    puVar4[10] = (uint)param_4;
    puVar4[0xb] = (uint)param_3;
    *puVar4 = (byte)*puVar4 | uVar2;
    uVar2 = FUN_00239330(param_1,param_2,param_3,lVar3,100,puVar4);
    puVar4[7] = uVar2;
    if (puVar4[7] == 0) {
      uVar2 = 0;
    }
    else {
      FUN_00238ea0(puVar4[7],0x2362a8);
      uVar2 = *puVar4;
    }
  }
  return uVar2;
}

