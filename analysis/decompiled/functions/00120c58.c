/* Ghidra pseudocode. PS2 address: 00120c58. Not validated source. */

undefined4 FUN_00120c58(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(*(int *)(iVar1 + 0x82f4) + 0x34);
  uStack_1c = 0;
  iVar1 = (**(code **)(iVar2 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x2b0),*(float *)(iVar1 + 0x2b4) + 0.0,
                     *(int *)(iVar1 + 0x82f4) + (int)*(short *)(iVar2 + 8),&puStack_20,
                     (uint)&puStack_20 | 4,0);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)*puStack_20 == 0x12) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      puStack_20 = puStack_20 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

