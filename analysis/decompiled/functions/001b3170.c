/* Ghidra pseudocode. PS2 address: 001b3170. Not validated source. */

void FUN_001b3170(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  FUN_001ab548();
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar1 = 0x40400000;
    fVar2 = (float)*(int *)(*(int *)(DAT_002859e4 + 0x58) + 0xc) + 85.0 + 3.0 + 6.0;
    FUN_0011ed18(0x295e90,5);
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
    FUN_0011ed48(0x295e90,3);
    FUN_0019f6d8(DAT_002c33c8,fVar2,uVar1,480.0 - fVar2,0x28ad30);
    return;
  }
  return;
}

