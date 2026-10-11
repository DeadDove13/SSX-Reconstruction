/* Ghidra pseudocode. PS2 address: 001367f8. Not validated source. */

void FUN_001367f8(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_2[1];
  FUN_0025b630(param_1,0x2ab678,*(undefined4 *)((int)&PTR_DAT_00278f88 + (uVar1 >> 10 & 0x3c)),
               *(undefined4 *)((int)&PTR_DAT_00278fa0 + (uVar1 >> 2 & 0x3c)),
               *(undefined4 *)((int)&PTR_DAT_00278d38 + (uVar1 >> 0xe & 0x3c)),
               *(undefined4 *)((int)&PTR_DAT_00278d48 + (uVar1 >> 0x19 & 0x1c)),
               *(undefined4 *)((int)&PTR_DAT_00278d58 + (*param_2 >> 0x16 & 0x3c)),
               *(undefined4 *)((int)&PTR_DAT_00278d88 + (uVar1 >> 0x16 & 0x1c)));
  return;
}

