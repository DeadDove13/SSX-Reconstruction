/* Ghidra pseudocode. PS2 address: 0014bb48. Not validated source. */

undefined8 FUN_0014bb48(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_001eacb0(param_3);
  uVar1 = FUN_0014cd18(*(undefined4 *)(*(int *)(param_2 + 0x220) + 0x6cf4),0x52,0,5);
  return uVar1;
}

