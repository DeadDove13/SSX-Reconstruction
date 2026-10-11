/* Ghidra pseudocode. PS2 address: 00217f58. Not validated source. */

undefined8 FUN_00217f58(float param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  fStack_6c = param_4[1];
  fStack_68 = param_4[2];
  fStack_64 = param_4[3];
  fStack_70 = *param_4;
  fVar2 = param_3[1] * fStack_6c + param_3[2] * fStack_68 + param_3[3] * fStack_64 +
          *param_3 * fStack_70;
  if (fVar2 < 0.0) {
    fStack_6c = -fStack_6c;
    fStack_68 = -fStack_68;
    fStack_64 = -fStack_64;
    fStack_70 = -fStack_70;
    fVar2 = -fVar2;
  }
  fVar3 = 1.0;
  if (DAT_002c3a30 < 1.0 - fVar2) {
    fVar2 = (float)FUN_00218410();
    fVar2 = DAT_002c3a34 - fVar2;
    fVar1 = (float)FUN_00218240(fVar2);
    fVar3 = (float)FUN_00218240((fVar3 - param_1) * fVar2);
    fVar3 = fVar3 / fVar1;
    param_1 = (float)FUN_00218240(param_1 * fVar2);
    param_1 = param_1 / fVar1;
  }
  else {
    fVar3 = 1.0 - param_1;
  }
  fVar1 = param_3[2];
  fVar2 = param_3[3];
  *(undefined8 *)param_2 =
       CONCAT44(fVar3 * param_3[1] + param_1 * fStack_6c,fVar3 * *param_3 + param_1 * fStack_70);
  ((undefined8 *)param_2)[1] =
       CONCAT44(fVar3 * fVar2 + param_1 * fStack_64,fVar3 * fVar1 + param_1 * fStack_68);
  return param_2;
}

