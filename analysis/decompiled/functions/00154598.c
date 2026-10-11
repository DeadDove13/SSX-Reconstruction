/* Ghidra pseudocode. PS2 address: 00154598. Not validated source. */

uint FUN_00154598(int param_1,uint param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  uStack_30 = DAT_002aed90;
  uStack_28 = DAT_002aed98;
  uStack_20 = DAT_002aeda0;
  uStack_18 = DAT_002aeda8;
  uStack_10 = DAT_002aedb0;
  return *(int *)((int)&uStack_30 + *(int *)(param_1 + 0x14f0) * 4) >> (param_2 & 0x1f) & 1;
}

