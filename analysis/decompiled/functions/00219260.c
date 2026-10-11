/* Ghidra pseudocode. PS2 address: 00219260. Not validated source. */

uint FUN_00219260(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint *puVar2;
  
  puVar2 = param_1 + 1;
  FUN_0025bbe4(puVar2);
  lVar1 = FUN_0023a350(puVar2,100);
  *param_1 = (uint)(lVar1 != 0);
  if (lVar1 != 0) {
    lVar1 = FUN_0023a288(puVar2,param_3,100,param_1 + 0x22);
    *param_1 = (uint)(lVar1 != 0);
  }
  return *param_1;
}

