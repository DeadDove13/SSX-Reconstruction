
void FUN_0012ba20(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_s1_lo;
  int unaff_s2_lo;
  
  puVar3 = (undefined4 *)(unaff_s2_lo + 0x310);
  do {
    uVar2 = FUN_00197d48();
    unaff_s1_lo = unaff_s1_lo + 1;
    iVar1 = *(int *)(unaff_s2_lo + 0x3c);
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
  } while (unaff_s1_lo < iVar1);
  if (*(int *)(unaff_s2_lo + 0x40) != 0) {
    FUN_0012bce8();
  }
  return;
}

