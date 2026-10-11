/* Ghidra pseudocode. PS2 address: 00191b78. Not validated source. */

void FUN_00191b78(undefined8 param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  iStack_80 = *param_2;
  iStack_7c = param_2[1];
  iStack_78 = param_2[2];
  iStack_74 = param_2[3];
  uStack_70 = DAT_002cc230;
  uStack_6c = DAT_002cc234;
  uStack_68 = DAT_002cc238;
  uStack_60 = CONCAT44(DAT_002cc234,DAT_002cc230);
  uStack_58 = DAT_002cc238;
  FUN_001915b0(&iStack_80,&uStack_60,1);
  fVar1 = 0.5;
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  fVar2 = 5.0;
  FUN_0011ed48(0x295e90,0);
  FUN_00168720(0x28ad30,0x2cc210);
  FUN_0019fe18((float)*param_2 + 4.0,(float)param_2[1] + 4.0,
               (float)*param_2 + (float)param_2[2] * fVar1,(float)(param_2[1] + param_2[3]) - 4.0,
               0x28ad30);
  FUN_0019fe18((float)*param_2 + (float)param_2[2] * fVar1,(float)(param_2[1] + param_2[3]) - 4.0,
               (float)(*param_2 + param_2[2]) - 4.0,(float)param_2[1] + 4.0,0x28ad30);
  FUN_0019fe18((float)*param_2 + 4.0,(float)param_2[1] + fVar2,
               (float)*param_2 + (float)param_2[2] * fVar1,(float)(param_2[1] + param_2[3]) - 3.0,
               0x28ad30);
  FUN_0019fe18((float)*param_2 + (float)param_2[2] * fVar1,(float)(param_2[1] + param_2[3]) - 3.0,
               (float)(*param_2 + param_2[2]) - 4.0,(float)param_2[1] + fVar2,0x28ad30);
  return;
}

