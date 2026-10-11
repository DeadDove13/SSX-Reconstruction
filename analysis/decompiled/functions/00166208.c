/* Ghidra pseudocode. PS2 address: 00166208. Not validated source. */

undefined * FUN_00166208(undefined *param_1,float param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0.0) {
    puVar1 = param_1;
    if (((float)param_1 != 0.0) && (puVar1 = PTR_DAT_002c2738, 0.0 <= (float)param_1)) {
      return DAT_002c273c;
    }
  }
  else {
    puVar1 = (undefined *)FUN_00218510((float)param_1 / param_2);
    if (param_2 < 0.0) {
      if (0.0 < (float)param_1) {
        puVar1 = (undefined *)((float)puVar1 + DAT_002c2740);
      }
      else {
        puVar1 = (undefined *)((float)puVar1 - DAT_002c2744);
      }
    }
  }
  return puVar1;
}

