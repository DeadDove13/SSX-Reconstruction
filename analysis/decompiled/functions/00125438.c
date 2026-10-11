/* Ghidra pseudocode. PS2 address: 00125438. Not validated source. */

undefined8 FUN_00125438(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  uStack_b8 = *(undefined4 *)(param_2 + 0x68);
  uStack_b4 = *(undefined4 *)(param_2 + 0x6c);
  uStack_c0 = (undefined4)*(undefined8 *)(param_2 + 0x60);
  uStack_bc = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
  uStack_b0 = *(undefined8 *)(param_2 + 0x70);
  uStack_a8 = *(undefined8 *)(param_2 + 0x78);
  fVar2 = *(float *)(param_2 + 0x78);
  fVar3 = *(float *)(param_2 + 0x7c);
  fVar4 = *(float *)(param_2 + 0x74);
  fStack_50 = *(float *)(param_2 + 0x130);
  fStack_7c = fVar3 * fStack_50 - fVar4 * *(float *)(param_2 + 0x138);
  fStack_80 = fVar2 * *(float *)(param_2 + 0x138) - fVar3 * *(float *)(param_2 + 0x134);
  fStack_78 = fVar4 * *(float *)(param_2 + 0x134) - fVar2 * fStack_50;
  fStack_3c = *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x70);
  fStack_38 = fStack_3c * fStack_78;
  fStack_40 = fStack_3c * fStack_80;
  fStack_3c = fStack_3c * fStack_7c;
  fStack_68 = fVar4 * fStack_7c - fVar2 * fStack_80;
  fStack_70 = fVar2 * fStack_78 - fVar3 * fStack_7c;
  fStack_6c = fVar3 * fStack_80 - fVar4 * fStack_78;
  fStack_50 = fStack_50 + fStack_40;
  fStack_28 = fStack_68 + fStack_68;
  fStack_30 = fStack_70 + fStack_70;
  fStack_2c = fStack_6c + fStack_6c;
  fStack_90 = fStack_50 + fStack_30;
  fStack_48 = *(float *)(param_2 + 0x138) + fStack_38;
  uStack_84 = 0;
  fStack_4c = *(float *)(param_2 + 0x134) + fStack_3c;
  fStack_88 = fStack_48 + fStack_28;
  fStack_8c = fStack_4c + fStack_2c;
  fStack_60 = fStack_90;
  fStack_5c = fStack_8c;
  fStack_58 = fStack_88;
  FUN_001110c0(0xbf800000,auStack_a0,&fStack_90);
  FUN_0012f1f8(&uStack_c0,auStack_a0);
  puVar1 = (undefined4 *)param_1;
  *puVar1 = uStack_c0;
  puVar1[1] = uStack_bc;
  puVar1[2] = uStack_b8;
  puVar1[3] = uStack_b4;
  *(undefined8 *)(puVar1 + 4) = uStack_b0;
  *(undefined8 *)(puVar1 + 6) = uStack_a8;
  return param_1;
}

