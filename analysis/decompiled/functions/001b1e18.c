/* Ghidra pseudocode. PS2 address: 001b1e18. Not validated source. */

void FUN_001b1e18(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_001ab4f8();
  FUN_001ab478(0x431b0000,param_1);
  uVar1 = DAT_002852fc;
  DAT_0028b248 = 0x42dc0000;
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x38) = 0;
  *(undefined4 *)(iVar4 + 0x34) = 0;
  DAT_0028b24c = 0x43910000;
  DAT_0028b160 = 0;
  *(undefined4 *)(iVar4 + 8) = 1;
  uVar1 = FUN_00234e80(uVar1,0x70);
  *(undefined4 *)(iVar4 + 0x10) = uVar1;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  puVar3 = &DAT_0028b1fc;
  iVar2 = 0xf;
  do {
    *puVar3 = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar2);
  iVar2 = 7;
  puVar3 = &DAT_0028b1bc;
  do {
    *puVar3 = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(iVar4 + 0x1cc) = 0;
  switch(DAT_0027ba88) {
  case 2:
  case 4:
  case 8:
    FUN_001b1f60(param_1);
    return;
  case 3:
  case 5:
    FUN_001b2100(param_1);
    return;
  default:
    return;
  }
}

