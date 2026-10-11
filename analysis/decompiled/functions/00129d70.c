/* Ghidra pseudocode. PS2 address: 00129d70. Not validated source. */

undefined8
FUN_00129d70(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  FUN_00122128(param_2,param_3,0xc,param_4);
  iVar1 = 0xf;
  iVar2 = (int)param_2;
  *(undefined **)(iVar2 + 8) = &DAT_002a9600;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 0xf;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 0xf;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(undefined4 *)(iVar2 + 0x50) = param_5;
  FUN_0012a310(param_2);
  FUN_0012a628(param_1,param_2);
  *(undefined4 *)(iVar2 + 0x44) = 4;
  *(undefined4 *)(iVar2 + 0x40) = 4;
  return param_2;
}

