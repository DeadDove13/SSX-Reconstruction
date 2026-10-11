/* Ghidra pseudocode. PS2 address: 001c59c0. Not validated source. */

void FUN_001c59c0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_stack_00000000;
  float in_stack_00000008;
  
  fVar1 = DAT_002c35f4;
  if (*(int *)(param_9 + 0x24c) == 0x31) {
    fVar1 = DAT_002c35f8;
  }
  fVar1 = -fVar1 / (param_6 - param_5);
  fVar2 = (param_3 / in_stack_00000000) * 16.0;
  fVar5 = (param_4 / in_stack_00000008) * 16.0;
  *(undefined4 *)(param_9 + 0x13c0) = 0;
  *(float *)(param_9 + 0x1348) = fVar1;
  *(float *)(param_9 + 0x1320) = fVar2;
  *(float *)(param_9 + 0x1334) = fVar5;
  *(undefined4 *)(param_9 + 0x137c) = 0x3f800000;
  *(undefined4 *)(param_9 + 0x1330) = 0;
  *(undefined4 *)(param_9 + 0x1340) = 0;
  fVar4 = 32768.0 - (float)(*(int *)(param_9 + 0x244) << 3);
  *(undefined4 *)(param_9 + 0x1324) = 0;
  fVar3 = -param_6 * fVar1;
  *(undefined4 *)(param_9 + 0x1344) = 0;
  *(undefined4 *)(param_9 + 0x1328) = 0;
  fVar6 = 32768.0 - (float)(*(int *)(param_9 + 0x240) << 3);
  *(undefined4 *)(param_9 + 0x1338) = 0;
  *(undefined4 *)(param_9 + 0x132c) = 0;
  *(undefined4 *)(param_9 + 0x133c) = 0;
  *(undefined4 *)(param_9 + 0x134c) = 0;
  *(undefined4 *)(param_9 + 0x135c) = 0x3f800000;
  *(undefined4 *)(param_9 + 0x136c) = 0x3f800000;
  *(float *)(param_9 + 0x1358) = fVar3;
  *(float *)(param_9 + 0x1374) = (param_2 + param_4) * 16.0 + fVar4;
  *(float *)(param_9 + 0x1370) = (param_1 + param_3) * 16.0 + fVar6;
  *(float *)(param_9 + 0x1378) = fVar1 * param_6 + fVar3;
  *(float *)(param_9 + 0x1350) = (param_1 * 16.0 - fVar2 * param_7) + fVar6;
  *(float *)(param_9 + 0x1354) = (param_2 * 16.0 - fVar5 * param_8) + fVar4;
  *(float *)(param_9 + 0x1360) = param_1 * 16.0 + fVar6;
  *(float *)(param_9 + 0x1364) = param_2 * 16.0 + fVar4;
  *(float *)(param_9 + 0x1368) = fVar1 * param_5 + fVar3;
  return;
}

