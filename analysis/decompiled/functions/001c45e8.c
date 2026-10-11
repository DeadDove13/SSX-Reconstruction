/* Ghidra pseudocode. PS2 address: 001c45e8. Not validated source. */

void FUN_001c45e8(int param_1,ulong param_2,long param_3,ulong param_4,long param_5,int param_6,
                 long param_7,ulong param_8,int param_9)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1458);
  puVar1[0xb] = 0x52;
  puVar1[0xc] = 2;
  puVar1[0xd] = 0x53;
  puVar1[0xf] = 0x3f;
  puVar1[0x11] = 0x1300000000000000;
  *(undefined8 **)(param_1 + 0x1458) = puVar1 + 0x14;
  puVar1[3] = 0x5000000600000000;
  uVar2 = *(undefined4 *)(param_1 + 8);
  *puVar1 = 0x10000008;
  puVar1[4] = 0x1000000000008005;
  puVar1[5] = 0xe;
  puVar1[6] = param_2 | param_7 << 0x38 | param_3 << 0x20 | param_7 << 0x18 |
              (long)(param_6 >> 6) << 0x10 | (long)(param_6 >> 6) << 0x30;
  puVar1[7] = 0x50;
  puVar1[8] = param_8 | (long)param_9 << 0x30 | param_8 << 0x20 | (long)param_9 << 0x10;
  puVar1[9] = 0x51;
  puVar1[10] = param_4 | param_5 << 0x20;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  FUN_001d39e8(uVar2,puVar1,puVar1 + 0x12,0);
  return;
}

