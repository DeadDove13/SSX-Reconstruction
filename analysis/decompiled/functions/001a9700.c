/* Ghidra pseudocode. PS2 address: 001a9700. Not validated source. */

undefined8 FUN_001a9700(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  puVar1 = puVar4 + 10;
  puVar4[0x31] = 0x44200000;
  puVar4[6] = &DAT_002b6168;
  puVar4[0x32] = 0x43f00000;
  *puVar4 = 0;
  puVar4[0x2f] = 0;
  puVar4[0x30] = 0;
  iVar2 = 0;
  do {
    *puVar1 = 0;
    iVar3 = iVar2 + 1;
    FUN_001aaed0(param_1,iVar2);
    puVar1 = puVar1 + 5;
    iVar2 = iVar3;
  } while (iVar3 < 5);
  puVar1 = puVar4 + 0x20;
  iVar2 = 0;
  do {
    *puVar1 = 0;
    iVar3 = iVar2 + 1;
    FUN_001ab130(param_1,iVar2);
    puVar1 = puVar1 + 5;
    iVar2 = iVar3;
  } while (iVar3 < 3);
  puVar4[0x33] = 0;
  DAT_002c522c = FUN_00234e80(DAT_002852fc,0xb4);
  DAT_002c5228 = FUN_00234e80(DAT_002852fc,0xb5);
  DAT_002c5224 = FUN_00234e80(DAT_002852fc,0x77);
  DAT_002c5220 = FUN_00234e80(DAT_002852fc,0x78);
  DAT_002c521c = FUN_00234e80(DAT_002852fc,0x79);
  return param_1;
}

