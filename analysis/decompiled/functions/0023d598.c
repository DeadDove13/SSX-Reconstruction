/* Ghidra pseudocode. PS2 address: 0023d598. Not validated source. */

undefined4 FUN_0023d598(long param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  long unaff_s0;
  int *unaff_s1_lo;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    unaff_s0 = param_1;
    unaff_s1_lo = (int *)*(undefined4 *)param_1;
  }
  if (bVar4) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(int *)((int)unaff_s0 + 8) != 0) {
      FUN_0023ee58(unaff_s1_lo[1]);
      uVar1 = *(uint *)((int)unaff_s0 + 0xc);
      uVar6 = unaff_s1_lo[0x10];
      puVar2 = (undefined4 *)unaff_s1_lo[0x13];
      do {
        puVar7 = puVar2;
        puVar2 = (undefined4 *)puVar7[3];
        if ((puVar2 == (undefined4 *)0x0) || (puVar2[1] == 1)) break;
        uVar3 = puVar2[0x18];
        if (uVar3 < uVar6) {
          if ((uVar6 <= uVar1) || (bVar4 = false, uVar1 < uVar3)) {
            bVar4 = true;
          }
        }
        else {
          bVar4 = false;
          if (uVar6 <= uVar1) {
            bVar4 = uVar1 < uVar3;
          }
        }
        uVar6 = uVar3;
      } while (!bVar4);
      FUN_0023ea60(unaff_s1_lo[1]);
      uVar5 = *puVar7;
    }
  }
  return uVar5;
}

