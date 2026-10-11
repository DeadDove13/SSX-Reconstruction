/* Ghidra pseudocode. PS2 address: 00260d88. Not validated source. */

uint FUN_00260d88(undefined8 param_1,uint *param_2,long param_3,long param_4)

{
  uint uVar1;
  uint *puVar2;
  uint auStack_10 [4];
  
  puVar2 = auStack_10;
  if (param_2 != (uint *)0x0) {
    puVar2 = param_2;
  }
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else if (param_4 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *puVar2 = (uint)*(byte *)param_3;
    uVar1 = (uint)(*(byte *)param_3 != 0);
  }
  return uVar1;
}

