/* Ghidra pseudocode. PS2 address: 001c2ee8. Not validated source. */

void FUN_001c2ee8(undefined8 param_1)

{
  undefined4 *puVar1;
  
  FUN_00265040(2);
  puVar1 = (undefined4 *)param_1;
  RemoveIntcHandler(2,puVar1[0xa8]);
  FUN_00265110(1);
  RemoveDmacHandler(0,puVar1[0xa9]);
  TerminateThread(puVar1[0xac]);
  DeleteThread(puVar1[0xac]);
  DeleteSema(puVar1[0xaa]);
  DeleteSema(puVar1[0xab]);
  FUN_001cfbb0(*puVar1);
  FUN_00103778(*puVar1);
  FUN_001d2f50(puVar1[2]);
  FUN_00103778(puVar1[2]);
  FUN_001cf540(0x296620);
  if (puVar1[0x514] != 0) {
    FUN_00103710();
  }
  FUN_001cb5f0(param_1);
  return;
}

