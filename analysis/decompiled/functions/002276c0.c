/* Ghidra pseudocode. PS2 address: 002276c0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0022770c) */

undefined4 FUN_002276c0(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_0029a888 == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    lVar2 = FUN_00226df0();
    uVar1 = 0xfffffff8;
    if (lVar2 != 0) {
      *(char *)((int)lVar2 + 0xa4) = (char)param_3;
      FUN_00228528(*(undefined4 *)((int)lVar2 + 8),param_2 / 10,param_3);
      uVar1 = 0;
    }
  }
  return uVar1;
}

