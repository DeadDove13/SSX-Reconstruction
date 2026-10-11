/* Ghidra pseudocode. PS2 address: 00166448. Not validated source. */

undefined8 FUN_00166448(undefined8 param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  
  uVar1 = FUN_00166208(param_2[1],-*param_2);
  fVar2 = (float)FUN_00218328(uVar1);
  fVar3 = (float)FUN_00166208(fVar2 * param_2[2],*param_2);
  fVar4 = DAT_002c2768;
  if (0.0 <= fVar2) {
    fVar4 = 0.0;
  }
  uStack_50 = FUN_00166208(param_2[6],-param_2[10]);
  fStack_4c = fVar3 + fVar4;
  uStack_48 = uVar1;
  FUN_00166368(param_1,&uStack_50);
  return param_1;
}

