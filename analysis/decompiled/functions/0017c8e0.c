/* Ghidra pseudocode. PS2 address: 0017c8e0. Not validated source. */

undefined8 FUN_0017c8e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_0017c018();
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0xbb0) = 0;
  *(undefined4 *)(iVar2 + 0xbc4) = 0;
  *(undefined **)(iVar2 + 4) = &DAT_002b14b8;
  *(undefined4 *)(iVar2 + 0xba0) = param_3;
  *(undefined4 *)(iVar2 + 0xbb4) = 0;
  *(undefined4 *)(iVar2 + 3000) = 0;
  *(undefined4 *)(iVar2 + 0xbc8) = 0;
  *(undefined4 *)(iVar2 + 0xbd8) = 0;
  *(undefined4 *)(iVar2 + 0xbe0) = 0;
  *(undefined4 *)(iVar2 + 0xbe8) = 0;
  *(undefined4 *)(iVar2 + 0xbf4) = 0;
  *(undefined **)(iVar2 + 0xbf8) = &DAT_002b1028;
  *(char **)(iVar2 + 0xbd4) = "BOARDNAME";
  *(undefined4 *)(iVar2 + 0xbf0) = 1;
  *(undefined4 *)(iVar2 + 0xbdc) = 1;
  *(undefined4 *)(iVar2 + 0xbe4) = 1;
  *(undefined4 *)(iVar2 + 0xbec) = 1;
  FUN_00177718(iVar2 + 0xbd4);
  iVar1 = *(int *)(iVar2 + 0xb3c);
  *(undefined **)(iVar2 + 0xc04) = &DAT_002c4a28;
  *(undefined4 *)(iVar2 + 0xbfc) = 0;
  *(undefined4 *)(iVar2 + 0xc00) = 0;
  *(undefined4 *)(iVar2 + 0xc08) = 0;
  *(undefined **)(iVar2 + 0xbf8) = &DAT_002b0fb8;
  FUN_001e9528(iVar1 + 0x40,iVar1 + 0x10,iVar1 + 0x28);
  *(undefined4 *)(iVar2 + 0xbec) = 0;
  *(undefined4 *)(iVar2 + 0xb38) = 5;
  *(undefined4 *)(iVar2 + 0xb90) = 0;
  *(undefined4 *)(iVar2 + 0xbbc) = 0;
  return param_1;
}

