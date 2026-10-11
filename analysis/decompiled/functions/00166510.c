/* Ghidra pseudocode. PS2 address: 00166510. Not validated source. */

undefined8 FUN_00166510(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  
  uVar1 = FUN_00166208(param_2[4],*param_2);
  fVar2 = (float)FUN_00218328(uVar1);
  fVar3 = (float)FUN_00166208(-fVar2 * (float)param_2[8],*param_2);
  fVar4 = DAT_002c276c;
  if (0.0 <= fVar2) {
    fVar4 = 0.0;
  }
  uStack_50 = FUN_00166208(param_2[9],param_2[10]);
  fStack_4c = fVar3 + fVar4;
  uStack_48 = uVar1;
  FUN_00166368(param_1,&uStack_50);
  return param_1;
}

