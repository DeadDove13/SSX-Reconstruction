/* Ghidra pseudocode. PS2 address: 00243638. Not validated source. */

uint FUN_00243638(int param_1,undefined2 param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint unaff_s4_lo;
  int iVar5;
  long lVar6;
  
  iVar4 = param_1 / 2;
  if (10 < param_1 / 2) {
    iVar4 = 10;
  }
  lVar6 = -1;
  iVar5 = 0;
  bVar1 = false;
  do {
    uVar2 = FUN_002433a8();
    uVar2 = (uVar2 >> 0x10) * param_1 >> 0x10;
    lVar3 = FUN_00243508(uVar2,iVar4,param_2);
    if (lVar3 == -1) {
      bVar1 = true;
      lVar3 = lVar6;
LAB_002436f0:
      lVar6 = lVar3;
      unaff_s4_lo = uVar2;
    }
    else if (lVar6 < lVar3) goto LAB_002436f0;
    iVar5 = iVar5 + 1;
    if (0x1f < iVar5) {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_002435b0(unaff_s4_lo);
      return uVar2;
    }
  } while( true );
}

