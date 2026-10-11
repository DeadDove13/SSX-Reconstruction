/* Ghidra pseudocode. PS2 address: 0021a950. Not validated source. */

undefined8 FUN_0021a950(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1c) == -0x21524111) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_1;
    uVar1 = FUN_0021aa08();
  }
  return uVar1;
}

