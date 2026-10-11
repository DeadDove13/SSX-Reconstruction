/* Ghidra pseudocode. PS2 address: 00198a28. Not validated source. */

undefined4 FUN_00198a28(undefined8 param_1,long param_2)

{
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  if ((param_2 != 0) &&
     (FUN_0015fae0(auStack_40,(uint)auStack_40 | 4,(uint)auStack_40 | 8,(uint)auStack_40 | 0xc,
                   aiStack_30), *(int *)((int)param_2 + 0x390) == aiStack_30[0])) {
    return 1;
  }
  return 0;
}

