/* Ghidra pseudocode. PS2 address: 001f0230. Not validated source. */

void FUN_001f0230(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_14;
  
  iVar2 = 0xb;
  puVar1 = &uStack_14;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  uStack_3c = *param_1;
  uStack_40 = 0x3a;
  FUN_002407d0(&uStack_40);
  return;
}

