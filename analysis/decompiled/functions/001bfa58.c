/* Ghidra pseudocode. PS2 address: 001bfa58. Not validated source. */

undefined8 FUN_001bfa58(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_130 [256];
  
  FUN_0021a378();
  FUN_00185ef0((int)param_1 + 0x30,param_2);
  iVar1 = DAT_002859e4;
  *(undefined **)((int)param_1 + 0x38) = &DAT_002b6db0;
  uVar2 = FUN_0018ada0(0x28530c,*(undefined4 *)(iVar1 + 8));
  FUN_0025b630(auStack_130,0x2b6d10,uVar2);
  FUN_0021a398(param_1,auStack_130,1,0);
  return param_1;
}

