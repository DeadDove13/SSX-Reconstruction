/* Ghidra pseudocode. PS2 address: 0019e5e0. Not validated source. */

undefined8
FUN_0019e5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  
  FUN_0019cc48(param_1,param_2,0x101,param_3,param_4,param_5,1);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined **)(iVar1 + 0x38) = &DAT_002b54a0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return param_1;
}

