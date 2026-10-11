/* Ghidra pseudocode. PS2 address: 001c4a18. Not validated source. */

undefined4
FUN_001c4a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  FlushCache(0);
  iVar1 = (int)param_1;
  FUN_001c4ab0(param_1,param_6,*(int *)(iVar1 + 0x278) << 5,param_4,param_5,
               *(undefined4 *)(iVar1 + 0x240),*(undefined4 *)(iVar1 + 0x248),param_2);
  return 1;
}

