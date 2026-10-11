/* Ghidra pseudocode. PS2 address: 0017c308. Not validated source. */

void FUN_0017c308(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_002c4b08 == 0) {
    DAT_002c7ff0 = 0x3f800000;
    DAT_002c7ffc = 0;
    DAT_002c7ff4 = 0x40000000;
    DAT_002c4b08 = 1;
    DAT_002c7ff8 = 0;
  }
  iVar3 = (int)param_1;
  if (DAT_002c4b0c == 0) {
    DAT_002c8008 = 0x40000000;
    DAT_002c8000 = 0x3f800000;
    DAT_002c800c = 0;
    DAT_002c4b0c = 1;
    DAT_002c8004 = 0x40000000;
    iVar1 = *(int *)(iVar3 + 0xb3c);
  }
  else {
    iVar1 = *(int *)(iVar3 + 0xb3c);
  }
  iVar1 = FUN_00155290(0x27a598,*(undefined4 *)(iVar1 + 0x46c));
  *(int *)(iVar3 + 0xb8c) = 9 - iVar1;
  iVar1 = 0;
  puVar4 = &DAT_00283e60;
  do {
    uVar2 = *puVar4;
    if (iVar1 == *(int *)(iVar3 + 0xb8c)) {
      FUN_0016e100(param_1,uVar2);
      FUN_0016e340(0x3fc00000,param_1,uVar2);
      FUN_0016f7a0(param_1,uVar2,0x2c8000);
    }
    else {
      FUN_0016e100(param_1,uVar2);
      FUN_0016e340(0x3f800000,param_1,uVar2);
      FUN_0016f7a0(param_1,uVar2,0x2c7ff0);
    }
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar1 < 10);
  uVar2 = FUN_00155178(0x27a598,*(undefined4 *)(*(int *)(iVar3 + 0xb3c) + 0x46c));
  *(undefined4 *)(iVar3 + 0xb88) = uVar2;
  return;
}

