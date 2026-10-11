/* Ghidra pseudocode. PS2 address: 00239628. Not validated source. */

void FUN_00239628(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = DAT_002a3370;
  DAT_002a3368 = DAT_002a3368 + 1;
  if (DAT_002a3370 != (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
    if ((DAT_002a3370[1] == 0) && (uVar3 = 0xfffffffe, param_1 != 0)) {
      uVar3 = 1;
    }
    DAT_002a3370[2] = uVar3;
    puVar1 = DAT_002a3370 + 10;
    DAT_002a3370 = (undefined4 *)0x0;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(*puVar2,puVar2[2],puVar2[5]);
    }
    DAT_002a3368 = DAT_002a3368 + -1;
    if (DAT_002a3368 == 0) {
      FUN_002385e0(0);
    }
  }
  return;
}

