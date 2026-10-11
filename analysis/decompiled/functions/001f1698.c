/* Ghidra pseudocode. PS2 address: 001f1698. Not validated source. */

void FUN_001f1698(void)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  
  if ((*(int *)(DAT_002859e4 + 0x38) == 0) || (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) == 0))
  {
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    auStack_1c[0] = 0;
    FUN_001ef968(&uStack_30,(uint)&uStack_30 | 4,(uint)&uStack_30 | 8,(uint)&uStack_30 | 0xc,
                 &uStack_20,0x1e,0xffffffffffffffff,auStack_1c);
  }
  return;
}

