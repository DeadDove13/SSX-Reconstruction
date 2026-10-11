/* Ghidra pseudocode. PS2 address: 001b39d0. Not validated source. */

void FUN_001b39d0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_001ab4f8();
  FUN_001ab478(0x42fa0000,param_1);
  DAT_0028b170 = 2;
  DAT_0028b248 = 0x42dc0000;
  DAT_0028b160 = 0;
  DAT_0028b258 = DAT_002c33e4;
  puVar2 = &DAT_0028b1fc;
  DAT_0028b24c = 0x430c0000;
  iVar4 = 0xf;
  DAT_0028b250 = DAT_002c33dc;
  DAT_0028b254 = DAT_002c33e0;
  DAT_0028b16c = 1;
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 8) = 4;
  DAT_0028b164 = 0;
  DAT_0028b168 = 1;
  *(undefined4 *)(iVar5 + 0x38) = 0;
  *(undefined4 *)(iVar5 + 0x34) = 0;
  *(undefined4 *)(iVar5 + 0x108) = 0;
  do {
    *puVar2 = 0xffffffff;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar4);
  puVar2 = &DAT_0028b1bc;
  iVar4 = 7;
  do {
    *puVar2 = 0xffffffff;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar4);
  FUN_0023bbd0(iVar5 + 0x54,0,0xb);
  switch(DAT_0027ba88) {
  case 2:
  case 4:
  case 8:
    uVar1 = DAT_002c5210;
    break;
  case 3:
  case 5:
    uVar1 = DAT_002c5214;
    break;
  default:
    goto switchD_001b3b14_caseD_6;
  }
  FUN_0019a8a8(0x28f670,uVar1,5);
switchD_001b3b14_caseD_6:
  FUN_0019a830(0x28f270,0x2c50d0);
  uVar3 = FUN_00234e80(DAT_002852fc,0x12);
  FUN_0019a7f8(0x28f2f0,uVar3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x44);
  FUN_0019a7f8(0x28f370,uVar3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x15);
  FUN_0019a7f8(0x28f3f0,uVar3);
  *(undefined4 *)(iVar5 + 0x100) = 0;
  *(undefined4 *)(iVar5 + 4) = 5;
  *(undefined4 *)(iVar5 + 0x104) = 0xffffffff;
  FUN_001b4580(param_1);
  return;
}

