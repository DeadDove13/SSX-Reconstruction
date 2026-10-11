/* Ghidra pseudocode. PS2 address: 0023d770. Not validated source. */

void FUN_0023d770(long param_1)

{
  bool bVar1;
  long lVar2;
  int *unaff_s0_lo;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    unaff_s0_lo = (int *)*(undefined4 *)param_1;
  }
  if (!bVar1) {
    FUN_0023d1d0();
    if (unaff_s0_lo[10] == 1) {
      do {
        lVar2 = FUN_0023ebe0(0);
        if (lVar2 != 0) {
          FUN_0023e608(0);
        }
        FUN_0023e9a8(0);
      } while (unaff_s0_lo[10] == 1);
      *unaff_s0_lo = 0;
    }
    else {
      *unaff_s0_lo = 0;
    }
    DeleteSema(unaff_s0_lo[1]);
    FUN_0023a180(unaff_s0_lo[0x27],100);
  }
  return;
}

