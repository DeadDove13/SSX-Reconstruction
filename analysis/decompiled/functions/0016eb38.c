/* Ghidra pseudocode. PS2 address: 0016eb38. Not validated source. */

uint FUN_0016eb38(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = FUN_0016dd88();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0016dd88(param_1,param_2);
    uVar2 = *(uint *)(iVar1 + 0x98) & 1;
  }
  return uVar2;
}

