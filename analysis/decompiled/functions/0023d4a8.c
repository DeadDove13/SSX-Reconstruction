/* Ghidra pseudocode. PS2 address: 0023d4a8. Not validated source. */

void FUN_0023d4a8(long param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int *unaff_s0_lo;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    unaff_s0_lo = (int *)*(undefined4 *)param_1;
  }
  if ((((!bVar2) && ((int *)unaff_s0_lo[8] <= param_2)) && (param_2 <= (int *)(unaff_s0_lo[9] + -8))
      ) && (*param_2 != -2)) {
    *param_2 = -2;
    FUN_0023c190(unaff_s0_lo,param_2[1]);
    FUN_0023ee58(unaff_s0_lo[1]);
    iVar1 = unaff_s0_lo[10];
    if (iVar1 == 2) {
      unaff_s0_lo[10] = 1;
    }
    FUN_0023ea60(unaff_s0_lo[1]);
    if (iVar1 == 2) {
      if (unaff_s0_lo[0xe] == 0) {
        FUN_0023c7f0(unaff_s0_lo,unaff_s0_lo[0xb]);
      }
      else {
        FUN_0023c7f0(unaff_s0_lo,unaff_s0_lo[0xc]);
      }
    }
  }
  return;
}

