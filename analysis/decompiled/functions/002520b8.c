/* Ghidra pseudocode. PS2 address: 002520b8. Not validated source. */

void FUN_002520b8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lStack_20;
  undefined8 uStack_18;
  
  uVar2 = param_1 >> 0x20 & 0x7fffffff;
  if (uVar2 < 0x3fe921fc) {
    uStack_18 = 0;
    iVar3 = 1;
  }
  else {
    if (0x7fefffff < uVar2) {
      FUN_00257518(param_1,param_1);
      return;
    }
    uVar1 = FUN_00252568(param_1,&lStack_20);
    iVar3 = (uVar1 & 1) * -2 + 1;
    param_1 = lStack_20;
  }
  FUN_00254250(param_1,uStack_18,iVar3);
  return;
}

