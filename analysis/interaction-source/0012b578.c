
void FUN_0012b578(void)

{
  undefined4 in_v0_lo;
  long lVar1;
  long lVar2;
  int unaff_s1_lo;
  
  *(undefined4 *)(unaff_s1_lo + 0x38) = in_v0_lo;
  if (*(float *)(unaff_s1_lo + 0x3c) <= 0.0) {
    lVar1 = FUN_00222970(0x299cc8,*(undefined4 *)(unaff_s1_lo + 0x28),4);
    if (lVar1 == -1) {
      FUN_001223f0();
    }
    else {
      lVar2 = FUN_002107c8(0x298590,0xf0,0x40000000,0x2c40e8,0,0);
      if (lVar2 != 0) {
        FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0xf0);
      }
      FUN_00122ca8(lVar2,3,lVar1,*(undefined4 *)(unaff_s1_lo + 0x28),0,0,0);
    }
  }
  return;
}

