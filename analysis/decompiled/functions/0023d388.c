/* Ghidra pseudocode. PS2 address: 0023d388. Not validated source. */

int FUN_0023d388(long param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long unaff_s3;
  int *unaff_s4_lo;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    unaff_s3 = param_1;
    unaff_s4_lo = (int *)*(undefined4 *)param_1;
  }
  if ((bVar1) || (iVar7 = (int)unaff_s3, *(int *)(iVar7 + 8) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar7 + 0xc);
    uVar6 = *(uint *)(iVar2 + 4) & 0xffffff;
    *(uint *)(iVar2 + 4) = uVar6;
    FUN_0023ee58(unaff_s4_lo[1]);
    iVar5 = *(int *)(iVar7 + 8) - uVar6;
    *(int *)(iVar7 + 8) = iVar5;
    FUN_0023ea60(unaff_s4_lo[1]);
    piVar3 = (int *)(iVar2 + uVar6);
    if (0 < iVar5) {
      uVar6 = piVar3[1];
      uVar4 = *(int *)(iVar7 + 4) << 0x18;
      if ((uVar6 & 0xff000000) == uVar4) {
        *(int **)(iVar7 + 0xc) = piVar3;
      }
      else {
        iVar5 = *piVar3;
        while( true ) {
          if (iVar5 == -1) {
            piVar3 = (int *)unaff_s4_lo[8];
          }
          else {
            piVar3 = (int *)((int)piVar3 + (uVar6 & 0xffffff));
          }
          uVar6 = piVar3[1];
          if ((uVar6 & 0xff000000) == uVar4) break;
          iVar5 = *piVar3;
        }
        *(int **)(iVar7 + 0xc) = piVar3;
      }
    }
  }
  return iVar2;
}

