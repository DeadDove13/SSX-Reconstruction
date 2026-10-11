/* Ghidra pseudocode. PS2 address: 00197c30. Not validated source. */

undefined8 FUN_00197c30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uStack_40;
  undefined4 uStack_30;
  
  FUN_001978a0(param_2,&uStack_40,4);
  uVar1 = 0;
  if (uStack_40._2_2_ != -1) {
    uStack_30 = uStack_40;
    uVar1 = FUN_002237f8(0x299cc8,uStack_40);
  }
  return uVar1;
}

