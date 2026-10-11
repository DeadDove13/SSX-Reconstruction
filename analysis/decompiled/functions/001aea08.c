/* Ghidra pseudocode. PS2 address: 001aea08. Not validated source. */

void FUN_001aea08(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x290) * 0x80 + DAT_002859e4 + 0xa4);
  if ((0.0 < *(float *)(iVar1 + 0x374)) &&
     (((iVar2 = *(int *)(DAT_002859e4 + 0x38), iVar2 == 0 ||
       (*(int *)(iVar2 + 0x18) == 0 || 9 < *(int *)(iVar2 + 0x18))) ||
      (lVar3 = FUN_00198a28(iVar2,iVar1), lVar3 != 0)))) {
    FUN_0011ed18(0x295e90,9);
    FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
    FUN_0011ed48(0x295e90,3);
    DAT_0028ad30 = *(undefined4 *)(iVar1 + 0x374);
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    FUN_0011ed38(0x295e90,0);
    FUN_0019f6d8(0,0,0x44200000,0x43f00000,0x28ad30);
    FUN_0011ed38(0x295e90,1);
    return;
  }
  return;
}

