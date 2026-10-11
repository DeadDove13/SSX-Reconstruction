/* Ghidra pseudocode. PS2 address: 001d5a98. Not validated source. */

undefined4 FUN_001d5a98(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
        ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
       ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7]))))))
      && (param_1[8] == param_2[8])) &&
     ((((param_1[9] == param_2[9] && ((float)param_1[10] == (float)param_2[10])) &&
       (param_1[0xb] == param_2[0xb])) &&
      (((param_1[0xc] == param_2[0xc] && (param_1[0xd] == param_2[0xd])) &&
       ((param_1[0xe] == param_2[0xe] &&
        ((param_1[0xf] == param_2[0xf] && ((float)param_1[0x10] == (float)param_2[0x10])))))))))) {
    uVar1 = 1;
  }
  return uVar1;
}

