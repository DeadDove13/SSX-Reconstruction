/* Ghidra pseudocode. PS2 address: 0025ff28. Not validated source. */

long FUN_0025ff28(undefined8 param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar1 = FUN_00259d50(param_1,param_2 * 0x58 + 0xc);
  lVar2 = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined4 *)lVar1;
    puVar3[1] = param_2;
    *puVar3 = 0;
    puVar3[2] = puVar3 + 3;
    FUN_0025a60c(puVar3 + 3,0,param_2 * 0x58);
    lVar2 = lVar1;
  }
  return lVar2;
}

