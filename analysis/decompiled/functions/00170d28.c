/* Ghidra pseudocode. PS2 address: 00170d28. Not validated source. */

void FUN_00170d28(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0023d388();
  while (lVar1 != 0) {
    FUN_0023d4a8(param_1,lVar1);
    lVar1 = FUN_0023d388(param_1);
  }
  return;
}

