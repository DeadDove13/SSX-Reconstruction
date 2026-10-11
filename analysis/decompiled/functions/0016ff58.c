/* Ghidra pseudocode. PS2 address: 0016ff58. Not validated source. */

void FUN_0016ff58(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0016e990(param_1,0x2000348,0x12);
  uVar1 = 0;
  iVar2 = 0;
  do {
    FUN_0016e858(param_1,uVar1 | 0x1b0,iVar2);
    FUN_0016e858(param_1,uVar1 | 0x364,iVar2);
    FUN_0016e858(param_1,uVar1 | 0x1b1,iVar2);
    iVar3 = iVar2 + 1;
    FUN_0016e858(param_1,uVar1 | 0x365,iVar2);
    uVar1 = iVar3 * 0x1000000;
    iVar2 = iVar3;
  } while (iVar3 < 2);
  FUN_0016e858(param_1,0x358,0xf);
  FUN_0016e858(param_1,0x35b,0xf);
  FUN_0016e858(param_1,0x359,0xf);
  FUN_0016e990(param_1,0x35a,0xf);
  return;
}

