/* Ghidra pseudocode. PS2 address: 001f4500. Not validated source. */

void FUN_001f4500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  puVar4[2] = 0;
  lVar2 = FUN_00225530(puVar4 + 1);
  if (lVar2 == 7) {
    uVar3 = FUN_002259a8(puVar4[1]);
    puVar4[4] = (int)uVar3;
    uVar3 = FUN_0023a448(0x2bc798,uVar3,param_3);
    puVar4[3] = (int)uVar3;
    FUN_002259e0(uVar3,puVar4[1]);
    FUN_0023a998(param_2);
    uVar1 = FUN_001f44f8(param_1);
    puVar4[5] = uVar1;
    *puVar4 = 1;
  }
  else if (lVar2 == 8) {
    puVar4[3] = (int)param_2;
    puVar4[4] = param_4;
    puVar4[2] = 1;
    uVar1 = FUN_001f44f8(param_1);
    *puVar4 = 1;
    puVar4[5] = uVar1;
  }
  else {
    FUN_0023a998(param_2);
    *puVar4 = 0;
  }
  return;
}

