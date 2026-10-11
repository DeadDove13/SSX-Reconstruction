/* Ghidra pseudocode. PS2 address: 001a0460. Not validated source. */

void FUN_001a0460(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0x10;
  puVar3 = (undefined4 *)param_1;
  *puVar3 = (int)param_3;
  if (param_3 != 0) {
    uVar2 = 0;
  }
  lVar1 = FUN_002369a0(param_2,uVar2);
  FUN_001a0518(param_1,lVar1,0,0);
  if (lVar1 != 0) {
    FUN_00103710(lVar1);
  }
  puVar3[7] = 0x3f800000;
  puVar3[6] = 0x3f800000;
  return;
}

