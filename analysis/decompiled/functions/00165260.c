/* Ghidra pseudocode. PS2 address: 00165260. Not validated source. */

undefined4 FUN_00165260(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  if ((param_2[2] < param_1[5]) ||
     ((uVar1 = 0, param_2[2] <= param_1[8] &&
      (uVar1 = 1,
      param_1[10] * param_1[10] <
      (*param_2 - *param_1) * (*param_2 - *param_1) +
      (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]))))) {
    uVar1 = 0;
  }
  return uVar1;
}

