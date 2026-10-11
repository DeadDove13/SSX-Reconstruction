/* Ghidra pseudocode. PS2 address: 00183a08. Not validated source. */

void FUN_00183a08(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0018adc8(param_1 + 0x14);
  lVar2 = FUN_0025bcf8(uVar1);
  if (lVar2 != 0) {
    FUN_00219260(param_1 + 0x64c,uVar1,0);
    return;
  }
  return;
}

