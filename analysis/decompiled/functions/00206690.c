/* Ghidra pseudocode. PS2 address: 00206690. Not validated source. */

float FUN_00206690(undefined8 param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar1 = (float)FUN_00206610();
  uVar2 = FUN_00206570(param_1);
  uVar3 = FUN_00206610(param_1);
  fVar4 = (float)FUN_002522e0(uVar2,uVar3);
  return fVar1 - fVar4;
}

