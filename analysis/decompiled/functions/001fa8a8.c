/* Ghidra pseudocode. PS2 address: 001fa8a8. Not validated source. */

void FUN_001fa8a8(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 8;
  FUN_001f9c28();
  iVar3 = (int)param_1;
  puVar2 = (undefined4 *)(iVar3 + 0xa4228);
  do {
    iVar4 = iVar4 + -1;
    FUN_00103778(*puVar2);
    *puVar2 = 0;
    FUN_00103778(puVar2[0xb4]);
    puVar2[0xb4] = 0;
    FUN_00103778(puVar2[0x168]);
    puVar2[0x168] = 0;
    puVar2 = puVar2 + 0x14;
  } while (-1 < iVar4);
  FUN_001f8b30(param_1,0);
  FUN_001fcd40(param_1);
  FUN_00207008(param_1);
  FUN_0020a540(param_1,2);
  FUN_001f3b60(param_1);
  FUN_001f4ae8(param_1,5);
  FUN_001f4ae8(param_1,6);
  FUN_001f4ae8(param_1,4);
  FUN_001f4ae8(param_1,3);
  FUN_001f4ae8(param_1,2);
  while (lVar1 = FUN_001f5e68(param_1,*(undefined4 *)(iVar3 + 0xa4220)), lVar1 != 0) {
    FUN_0023e608(0);
    (**(code **)(*(int *)(iVar3 + 0x32000) + 0x54))
              (DAT_002c391c,iVar3 + *(short *)(*(int *)(iVar3 + 0x32000) + 0x50));
  }
  FUN_001f4ae8(param_1,1);
  FUN_00209428(param_1);
  FUN_001fd400(param_1);
  return;
}

