/* Ghidra pseudocode. PS2 address: 0022f7a0. Not validated source. */

void FUN_0022f7a0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = (undefined1 *)(DAT_002a1c9c + param_1 * 0x54);
  if (DAT_002a1b30._5_1_ != 0) {
    iVar1 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(puVar2 + iVar1 + 0x14) = *(undefined4 *)(puVar2 + iVar1 + 0x24);
      iVar1 = iVar3 * 4;
    } while (iVar3 < (int)(uint)DAT_002a1b30._5_1_);
  }
  *puVar2 = 2;
  *(float *)(puVar2 + 0xc) = *(float *)(puVar2 + 0x10);
  puVar2[1] = 0;
  *(float *)(puVar2 + 8) = *(float *)(puVar2 + 0x10) * *(float *)(puVar2 + 4) * 1.5;
  return;
}

