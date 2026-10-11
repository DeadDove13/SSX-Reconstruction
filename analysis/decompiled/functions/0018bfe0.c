/* Ghidra pseudocode. PS2 address: 0018bfe0. Not validated source. */

undefined8 FUN_0018bfe0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x3f;
  iVar4 = (int)param_1;
  iVar1 = iVar4 + 0x144;
  FUN_0018ddc0();
  *(undefined **)(iVar4 + 0x114) = &DAT_002b4590;
  FUN_0018f938(iVar4 + 0x118,0x2b40b0);
  FUN_0018fa10(iVar4 + 0x130,10);
  do {
    iVar3 = iVar3 + -1;
    FUN_0018f6e0(iVar1);
    iVar1 = iVar1 + 0x20;
  } while (iVar3 != -1);
  iVar1 = 0;
  FUN_0018e4d0(param_1,iVar4 + 0x118,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar4 + 0x130,0xffffffffffffffff);
  if (0 < DAT_002915c0) {
    piVar2 = (int *)(iVar4 + 0x144);
    iVar3 = 0;
    do {
      iVar4 = DAT_002915c8;
      *piVar2 = iVar1;
      piVar2[4] = iVar4 + iVar3;
      iVar1 = iVar1 + 1;
      FUN_0018e4d0(param_1,piVar2,0xffffffffffffffff);
      piVar2 = piVar2 + 8;
      iVar3 = iVar3 + 0x94;
    } while (iVar1 < DAT_002915c0);
  }
  return param_1;
}

