/* Ghidra pseudocode. PS2 address: 0018ccb0. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0018ccb0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_0018ddc0();
  *(undefined **)(iVar1 + 0x114) = &DAT_002b4490;
  FUN_0018f938(iVar1 + 0x118,0x2b4240);
  FUN_0018f938(iVar1 + 0x130,0x28abc0);
  FUN_0018fa10(iVar1 + 0x148,10);
  FUN_0018f5a0(iVar1 + 0x15c,0x2b4250);
  FUN_0018f760(iVar1 + 0x170,2,0x2b4260,0);
  FUN_0018f760(iVar1 + 400,1,0x2b4270,0);
  FUN_0018f450(iVar1 + 0x1b0,iVar1 + 0x40c,0x2b40c0);
  FUN_0018f450(iVar1 + 0x1c8,iVar1 + 0x218,0x2b41e8);
  FUN_0018f450(iVar1 + 0x1e0,iVar1 + 0x1230,0x2b4280);
  FUN_0018f760(iVar1 + 0x1f8,0,0x2b4290,0);
  FUN_0018ca88(iVar1 + 0x218);
  FUN_0018c210(iVar1 + 0x40c);
  FUN_0018d0d0(iVar1 + 0x1230);
  FUN_0025b630(0x28abc0,0x2b42a0,DAT_002b42b8,_PTR_DAT_002b42c0);
  *(char **)(iVar1 + 0x140) = s_0123456789012345678901234567890_0028abc0;
  FUN_0018e4d0(param_1,iVar1 + 0x118,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar1 + 0x130,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar1 + 0x148,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar1 + 0x15c,0xffffffffffffffff);
  if (*(int *)(DAT_002859e4 + 0x38) != 0) {
    FUN_0018e4d0(param_1,iVar1 + 0x170,0xffffffffffffffff);
  }
  FUN_0018e4d0(param_1,iVar1 + 400,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar1 + 0x1b0,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar1 + 0x1c8,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar1 + 0x1e0,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar1 + 0x1f8,0xffffffffffffffff);
  FUN_0018cf28(param_1);
  return param_1;
}

