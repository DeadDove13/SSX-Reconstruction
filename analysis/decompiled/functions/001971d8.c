/* Ghidra pseudocode. PS2 address: 001971d8. Not validated source. */

long FUN_001971d8(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)param_1;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 0xc9) = 0;
    puVar1[1] = 0;
    FUN_00196fe8(param_2,param_1);
  }
  return param_1;
}

