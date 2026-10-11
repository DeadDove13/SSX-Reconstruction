/* Ghidra pseudocode. PS2 address: 001e94d0. Not validated source. */

undefined8 FUN_001e94d0(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 7;
  *(undefined **)((int)param_1 + 4) = &DAT_002bbd20;
  puVar1 = (undefined4 *)((int)param_1 + 0x2b0);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -0x18;
  } while (-1 < iVar2);
  return param_1;
}

