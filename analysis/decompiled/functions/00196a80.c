/* Ghidra pseudocode. PS2 address: 00196a80. Not validated source. */

void FUN_00196a80(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 == (undefined4 *)0x0) {
    param_1[1] = 0;
  }
  else {
    uVar1 = *puVar2;
    while( true ) {
      param_1[1] = uVar1;
      FUN_0019a6c8(puVar2,3);
      puVar2 = (undefined4 *)param_1[1];
      if (puVar2 == (undefined4 *)0x0) break;
      uVar1 = *puVar2;
    }
    param_1[1] = 0;
  }
  *param_1 = 0;
  return;
}

