/* Ghidra pseudocode. PS2 address: 0018fa60. Not validated source. */

undefined8 FUN_0018fa60(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *puVar2 = 0;
  puVar2[3] = uVar1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  return param_1;
}

