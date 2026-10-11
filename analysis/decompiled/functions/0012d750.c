/* Ghidra pseudocode. PS2 address: 0012d750. Not validated source. */

undefined8 FUN_0012d750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00122180();
  iVar1 = 3;
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 8) = &DAT_002a9178;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 3;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 0x1f;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 0x1f;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 0x1f;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_001978a0(param_3,iVar2 + 0x2c,0xc);
  *(undefined4 *)(iVar2 + 0x778) = 0;
  return param_1;
}

