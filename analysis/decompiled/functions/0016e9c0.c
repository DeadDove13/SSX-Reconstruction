/* Ghidra pseudocode. PS2 address: 0016e9c0. Not validated source. */

void FUN_0016e9c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  
  FUN_0016e858(param_1,param_2,0xb);
  iVar1 = FUN_0016ddf0(param_1);
  *(undefined4 *)(iVar1 + 0xc4) = param_3;
  *(undefined4 *)(iVar1 + 200) = param_4;
  *(undefined4 *)(iVar1 + 0xcc) = param_5;
  *(undefined4 *)(iVar1 + 0xd0) = param_6;
  *(undefined4 *)(iVar1 + 0xdc) = param_7;
  *(undefined4 *)(iVar1 + 0xe0) = param_8;
  *(undefined4 *)(iVar1 + 0xbc) = 1;
  *(undefined4 *)(iVar1 + 0xe4) = param_9;
  *(undefined4 *)(iVar1 + 0xd4) = param_11;
  *(undefined4 *)(iVar1 + 0xd8) = param_12;
  *(undefined4 *)(iVar1 + 0xe8) = param_10;
  return;
}

