/* Ghidra pseudocode. PS2 address: 001789b8. Not validated source. */

void FUN_001789b8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 8;
  FUN_00170030(param_1,1,0xff);
  FUN_0016eca0(param_1,0x2837d8,0,0xffffffffffffffff);
  FUN_0016e990(param_1,0x19a,8);
  FUN_0016e990(param_1,0x198,8);
  FUN_0016e990(param_1,0x130,8);
  FUN_0016e990(param_1,0x132,8);
  FUN_0016e990(param_1,0x183,9);
  FUN_0016e990(param_1,0x184,9);
  FUN_0016e990(param_1,0x185,9);
  FUN_0016e990(param_1,0x194,0xc);
  FUN_0016e990(param_1,0x192,0xc);
  FUN_0016e990(param_1,399,0xc);
  FUN_0016e990(param_1,0x186,0xc);
  FUN_0016e990(param_1,0x188,0xc);
  FUN_0016e990(param_1,0x187,0xc);
  FUN_0016e990(param_1,0x18a,0xc);
  FUN_0016e990(param_1,0x189,0xc);
  piVar3 = &DAT_002837b0;
  do {
    if (*piVar3 != -1) {
      FUN_0016e990(param_1,*piVar3,9);
    }
    iVar4 = iVar4 + -1;
    piVar3 = piVar3 + 1;
  } while (-1 < iVar4);
  iVar5 = 3;
  FUN_00178190(param_1);
  iVar4 = (int)param_1;
  *(undefined **)(iVar4 + 0xb28) = &DAT_002838a0;
  *(undefined **)(iVar4 + 0xb2c) = &DAT_00283ab8;
  piVar3 = (int *)(iVar4 + 0xb78);
  do {
    iVar1 = *piVar3;
    iVar5 = iVar5 + -1;
    piVar3 = piVar3 + 1;
    *(undefined4 *)(iVar1 + 0x10) = 1;
  } while (-1 < iVar5);
  FUN_00178458(param_1);
  FUN_001786e8(param_1);
  if (DAT_002c4a00 == 2) {
    FUN_00178d10(param_1,0);
  }
  else {
    *(undefined4 *)(iVar4 + 0xb34) = 0;
    *(undefined4 *)(iVar4 + 0xb30) = 1;
    *(undefined4 *)(iVar4 + 0xb5c) = 1;
  }
  uVar2 = FUN_0016f348(param_1,0);
  *(undefined4 *)(iVar4 + 0xb64) = uVar2;
  return;
}

