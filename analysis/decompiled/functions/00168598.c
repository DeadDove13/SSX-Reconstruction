/* Ghidra pseudocode. PS2 address: 00168598. Not validated source. */

void FUN_00168598(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  DAT_002c48ac = DAT_002c48ac + -1;
  iVar1 = DAT_002c48ac * 0xc;
  iVar2 = DAT_002c48ac * 3;
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x490) = *(undefined4 *)(&DAT_00280e54 + iVar1);
  *(undefined4 *)(iVar4 + 0x494) = *(undefined4 *)(iVar1 + 0x280e58);
  uVar3 = FUN_00167648(param_1,(&DAT_00280e50)[iVar2]);
  *(undefined4 *)(iVar4 + 0x48c) = uVar3;
  return;
}

