/* Ghidra pseudocode. PS2 address: 0021a998. Not validated source. */

void FUN_0021a998(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  uVar3 = param_1 + 0xbfU & 0xffffff80;
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  puVar4 = (undefined8 *)(uVar3 + *(int *)(param_1 + 0x34));
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *puVar4 = 0x3000000005000001;
  puVar4[1] = 0;
  *(uint *)(param_1 + 0x30) = uVar3;
  *(undefined8 **)(param_1 + 0x34) = puVar4;
  FUN_00219068(uVar3,uVar1,uVar2);
  return;
}

