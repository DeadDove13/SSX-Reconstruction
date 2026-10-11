/* Ghidra pseudocode. PS2 address: 0020ac28. Not validated source. */

undefined8 FUN_0020ac28(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = (undefined4 *)param_1;
  uVar4 = param_2[8];
  *puVar3 = *param_2;
  puVar3[8] = uVar4;
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar4 = param_2[6];
  uVar2 = param_2[7];
  puVar3[4] = (int)uVar1;
  puVar3[5] = (int)((ulong)uVar1 >> 0x20);
  puVar3[6] = uVar4;
  puVar3[7] = uVar2;
  puVar3[10] = param_2[10];
  puVar3[9] = param_2[9];
  FUN_0023bac0(puVar3 + 0xc,param_2 + 0xc,0x240);
  return param_1;
}

