/* Ghidra pseudocode. PS2 address: 001eeb08. Not validated source. */

void FUN_001eeb08(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_001ee960(param_1,*(undefined4 *)((int)param_1 + 0x6618),param_2);
  puVar2 = DAT_00292808;
  uVar3 = DAT_002913b8;
  puVar1 = DAT_00292808 + 6;
  DAT_00292808 = DAT_00292808 + 10;
  *puVar1 = (long)(int)(param_3[1] * 128.0) | 0x3f80000000000000U |
            (long)(int)(param_3[3] * 128.0) << 0x10 | (long)(int)(param_3[2] * 128.0) << 8 |
            (long)(int)(*param_3 * 128.0) << 0x18;
  puVar2[3] = 0x5000000200000000;
  puVar2[4] = 0x1000000000008001;
  puVar2[5] = 0xe;
  puVar2[7] = 1;
  *puVar2 = 0x10000003;
  puVar2[1] = 0;
  puVar2[2] = 0;
  FUN_001d39e8(uVar3,puVar2,puVar2 + 8,1);
  FUN_001ee798(param_1,1);
  puVar4 = DAT_00292808;
  fVar5 = param_4[3];
  fVar8 = param_4[2];
  fVar6 = param_4[1];
  fVar7 = *param_4;
  puVar2 = DAT_00292808 + 3;
  DAT_00292808 = DAT_00292808 + 10;
  *puVar2 = 0x5000000200000000;
  puVar4[4] = 0x1000000000008001;
  puVar4[5] = 0xe;
  puVar4[6] = (long)(int)(fVar6 * 128.0) | 0x3f80000000000000U |
              (long)(int)(fVar5 * 128.0) << 0x10 | (long)(int)(fVar8 * 128.0) << 8 |
              (long)(int)(fVar7 * 128.0) << 0x18;
  puVar4[7] = 1;
  *puVar4 = 0x10000003;
  puVar4[2] = 0x1000000000000000;
  puVar4[1] = 0;
  FUN_001d39e8(uVar3,puVar4,puVar4 + 8,1);
  FUN_001ee798(param_1,0);
  FUN_001ee798(param_1,2);
  FUN_001ee798(param_1,3);
  FUN_001ee798(param_1,4);
  return;
}

