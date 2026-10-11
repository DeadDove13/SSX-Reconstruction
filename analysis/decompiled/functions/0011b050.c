/* Ghidra pseudocode. PS2 address: 0011b050. Not validated source. */

void FUN_0011b050(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x194c) = 0;
  *(undefined4 *)(param_1 + 0x1944) = 0;
  iVar2 = 99;
  uVar3 = *(undefined4 *)(param_1 + 0x194c);
  *(undefined4 *)(param_1 + 0x1940) = 0;
  *(undefined4 *)(param_1 + 0x1948) = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x70) = uVar3;
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 0x6c) = uVar3;
    *(undefined4 *)(iVar1 + 100) = uVar3;
    *(undefined4 *)(iVar1 + 0x60) = uVar3;
    *(undefined4 *)(iVar1 + 0x68) = uVar3;
    iVar1 = iVar1 + 0x40;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0x1950) = 0;
  *(undefined4 *)(param_1 + 0x1960) = 0;
  *(undefined4 *)(param_1 + 0x1964) = 0;
  *(undefined4 *)(param_1 + 0x1968) = 0;
  *(undefined4 *)(param_1 + 0x196c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1970) = 0;
  *(undefined4 *)(param_1 + 0x1974) = 0;
  *(undefined4 *)(param_1 + 0x1978) = 0;
  *(undefined4 *)(param_1 + 0x197c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x1980) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

