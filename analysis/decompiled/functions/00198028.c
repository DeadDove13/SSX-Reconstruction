/* Ghidra pseudocode. PS2 address: 00198028. Not validated source. */

undefined4 FUN_00198028(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  iVar1 = *(int *)param_2;
  *(int *)param_2 = iVar1 + 0x1c;
  FUN_0023bac0(auStack_60,iVar1,0x1c);
  FUN_00197b58(param_1,param_2,iVar1 + 0xc);
  *(undefined4 *)((int)param_1 + 0x38) = uStack_5c;
  *(undefined4 *)((int)param_1 + 0x30) = uStack_58;
  return 1;
}

