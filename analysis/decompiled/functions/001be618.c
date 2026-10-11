/* Ghidra pseudocode. PS2 address: 001be618. Not validated source. */

void FUN_001be618(undefined8 param_1,char *param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*param_2 == '\x02') {
    uVar1 = 4;
  }
  FUN_001be688(param_1,param_2 + 0x10,*(undefined2 *)(param_2 + 4),*(undefined2 *)(param_2 + 6),
               *(uint *)(param_2 + 0xc) >> 0x1c,uVar1,param_4,param_3 + 0x10);
  return;
}

