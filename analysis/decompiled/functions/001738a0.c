/* Ghidra pseudocode. PS2 address: 001738a0. Not validated source. */

undefined8
FUN_001738a0(undefined8 param_1,undefined4 param_2,long param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_1;
  puVar5[1] = 0;
  puVar5[3] = 0;
  puVar5[5] = 0;
  puVar5[8] = 0;
  puVar5[9] = &DAT_002b1028;
  *puVar5 = param_2;
  puVar5[7] = 1;
  puVar5[2] = 1;
  puVar5[4] = 1;
  puVar5[6] = 1;
  FUN_00177718();
  puVar5[9] = &DAT_002b0f80;
  if (param_3 == 0) {
    puVar5[10] = 0;
  }
  else {
    puVar5[10] = *(undefined4 *)param_3;
  }
  uVar2 = DAT_002c284c;
  uVar1 = DAT_002c2848;
  puVar5[0x11] = 0x40400000;
  puVar5[0xf] = 0x3f800000;
  puVar5[0x10] = 0x3f800000;
  puVar5[0x12] = 0x3f800000;
  uVar3 = DAT_002c2850;
  puVar5[0x15] = uVar2;
  puVar5[0x14] = uVar1;
  puVar5[0x13] = uVar3;
  uVar3 = DAT_002c285c;
  uVar2 = DAT_002c2858;
  uVar1 = DAT_002c2854;
  puVar5[0x16] = 0x3f800000;
  puVar5[0x19] = uVar3;
  puVar5[0x17] = uVar1;
  puVar5[0x18] = uVar2;
  uVar4 = DAT_002c286c;
  uVar3 = DAT_002c2868;
  uVar2 = DAT_002c2864;
  uVar1 = DAT_002c2860;
  puVar5[0x1a] = DAT_002c2860;
  puVar5[0x1d] = uVar4;
  puVar5[0x1b] = uVar2;
  puVar5[0x1c] = uVar3;
  puVar5[0x1e] = uVar1;
  puVar5[0xb] = (undefined4 *)param_3;
  puVar5[0xd] = param_4;
  puVar5[0xe] = param_5;
  puVar5[0x22] = param_6;
  uVar2 = DAT_002c2874;
  uVar1 = DAT_002c2870;
  puVar5[0xc] = 0;
  puVar5[0x21] = 0x3f800000;
  puVar5[0x1f] = uVar1;
  puVar5[0x20] = uVar2;
  return param_1;
}

