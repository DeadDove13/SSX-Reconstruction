/* Ghidra pseudocode. PS2 address: 001374f0. Not validated source. */

undefined4 FUN_001374f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  
  lVar1 = FUN_00137fd0(param_1,auStack_40,0,param_2,0);
  if (lVar1 != 0) {
    lVar1 = FUN_00137dd8(param_1,auStack_40);
    FUN_00137c30(param_1,auStack_40,0 < lVar1);
  }
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x34) = 0xffffffff;
  FUN_0023bbd0(iVar2 + 0x4c,0,0xc);
  FUN_001375a0(param_1,param_2,0,0,1);
  return 0;
}

