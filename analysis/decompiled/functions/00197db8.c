/* Ghidra pseudocode. PS2 address: 00197db8. Not validated source. */

void FUN_00197db8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uStack_20;
  
  if (param_2 == 0) {
    uStack_20 = CONCAT22(0xffff,(undefined2)uStack_20);
  }
  else {
    uStack_20 = *(undefined4 *)((int)param_2 + 0xc0);
  }
  FUN_001973f0(param_3,&uStack_20,4);
  return;
}

