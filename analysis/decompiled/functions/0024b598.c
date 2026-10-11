/* Ghidra pseudocode. PS2 address: 0024b598. Not validated source. */

void FUN_0024b598(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                 uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint param_10,uint param_11
                 ,uint param_12)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = DAT_002a53cc * DAT_002a53d0;
  iVar2 = iVar1 + 0x1ff;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  iVar2 = iVar2 >> 9;
  uVar5 = param_10 & 0xfffffff | 0x20000000;
  *param_1 = uVar5;
  uVar4 = param_11 & 0xfffffff | 0x20000000;
  *param_2 = uVar4;
  uVar3 = param_12 & 0xfffffff | 0x20000000;
  *param_3 = uVar3;
  *param_4 = uVar5;
  *param_5 = uVar4;
  *param_6 = uVar3;
  *param_7 = iVar2 * 0x180 + param_10 & 0xfffffff | 0x20000000;
  *param_8 = iVar2 * 0x180 + param_11 & 0xfffffff | 0x20000000;
  *param_9 = iVar2 * 0x180 + param_12 & 0xfffffff | 0x20000000;
  return;
}

