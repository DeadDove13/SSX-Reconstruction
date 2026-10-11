/* Ghidra pseudocode. PS2 address: 0010e158. Not validated source. */

undefined8
FUN_0010e158(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_5;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return param_5;
}

