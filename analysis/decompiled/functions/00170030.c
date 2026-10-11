/* Ghidra pseudocode. PS2 address: 00170030. Not validated source. */

void FUN_00170030(undefined8 param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  
  *(uint *)((int)param_1 + 0xb20) = param_3;
  FUN_0016ff58();
  FUN_0016e858(param_1,0x362,0xe);
  FUN_0016e858(param_1,0x363,0xe);
  if (param_2 == 1) {
    FUN_0016e858(param_1,0x319,8);
    FUN_0016e858(param_1,0x318,8);
    if (param_3 != 0) {
      puVar1 = &DAT_00280ec8;
      do {
        if ((param_3 & 1) != 0) {
          FUN_0016e858(param_1,*puVar1,10);
        }
        param_3 = (int)param_3 >> 1;
        puVar1 = puVar1 + 1;
      } while (param_3 != 0);
    }
  }
  FUN_0016e990(param_1,0x348,0x11);
  FUN_0016e990(param_1,0x324,0x11);
  FUN_0016e990(param_1,0x168,0x12);
  FUN_0016e990(param_1,0x169,0x12);
  FUN_0016e990(param_1,0x161,0x12);
  return;
}

