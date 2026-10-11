/* Ghidra pseudocode. PS2 address: 00191248. Not validated source. */

undefined8 FUN_00191248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_00190b68(param_1,param_2,iVar1 + 0x594);
  *(int *)(iVar1 + 0x530) = (int)param_4;
  *(undefined **)(iVar1 + 0xc) = &DAT_002b4698;
  FUN_001908d8(iVar1 + 0x534,param_4,0);
  FUN_001908d8(iVar1 + 0x554,param_4,1);
  FUN_001908d8(iVar1 + 0x574,param_4,2);
  FUN_001911e8(iVar1 + 0x594,param_3,param_4);
  *(undefined4 *)(iVar1 + 0x5ac) = 0;
  FUN_00190c08(param_1,iVar1 + 0x534,0xffffffffffffffff);
  FUN_00190c08(param_1,iVar1 + 0x554,0xffffffffffffffff);
  FUN_00190c08(param_1,iVar1 + 0x574,0xffffffffffffffff);
  return param_1;
}

