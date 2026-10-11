/* Ghidra pseudocode. PS2 address: 0012f4b8. Not validated source. */

void FUN_0012f4b8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0x11;
  puVar2 = param_1 + 2;
  uVar1 = *puVar2;
  while( true ) {
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
    FUN_0012f460(*param_1,param_1[1],uVar1,param_2);
    if (iVar3 < 0) break;
    uVar1 = *puVar2;
  }
  return;
}

