/* Ghidra pseudocode. PS2 address: 00146910. Not validated source. */

undefined4 * FUN_00146910(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x21;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0xffffffff;
    puVar1 = puVar1 + 4;
  } while (iVar2 != -1);
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = &DAT_002ac280;
  param_1[0x8c] = 0;
  param_1[0x90] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = &DAT_002ac258;
  param_1[0x8f] = 0;
  param_1[0x8d] = 0;
  FUN_00219328(param_1 + 0x91);
  FUN_0023bbd0(param_1 + 0x96,0,0x88);
  return param_1;
}

