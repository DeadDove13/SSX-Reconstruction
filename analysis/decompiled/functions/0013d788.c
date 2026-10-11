/* Ghidra pseudocode. PS2 address: 0013d788. Not validated source. */

void FUN_0013d788(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x370) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x374) = 0;
  if (-1 < *(int *)(iVar1 + 0x24)) {
    FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),0xc);
    return;
  }
  return;
}

