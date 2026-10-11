/* Ghidra pseudocode. PS2 address: 00259668. Not validated source. */

undefined8 * FUN_00259668(uint param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  char *apcStack_3c0 [8];
  undefined8 auStack_3a0 [92];
  undefined8 auStack_c0 [4];
  int iStack_a0;
  uint auStack_9c [3];
  
  lVar5 = FUN_00258f98();
  if (lVar5 != 0) {
    uVar2 = FUN_00259080(lVar5,apcStack_3c0);
    if (uVar2 != 0) {
      FUN_0025a60c(auStack_3a0,0,0x2f8);
      piVar12 = (int *)lVar5;
      piVar6 = (int *)((int)piVar12 - (piVar12[1] + -4));
      iVar3 = *piVar6;
      for (; uVar2 < (uint)((int)piVar6 + iVar3 + 4);
          uVar2 = FUN_00259188(uVar2,auStack_3a0,apcStack_3c0,0)) {
      }
      piVar6 = piVar12 + 4;
      if (*apcStack_3c0[0] == 'z') {
        iVar3 = FUN_00258988(piVar6,&iStack_a0);
        piVar6 = (int *)(iVar3 + iStack_a0);
      }
      auStack_9c[0] = piVar12[2];
      piVar12 = (int *)((int)piVar12 + *piVar12 + 4);
      puVar8 = auStack_3a0;
      puVar1 = param_2;
      if ((piVar6 < piVar12) && (auStack_9c[0] <= param_1)) {
        do {
          piVar6 = (int *)FUN_00259188(piVar6,auStack_3a0,apcStack_3c0,auStack_9c);
          if (piVar12 <= piVar6) break;
        } while (auStack_9c[0] <= param_1);
      }
      do {
        puVar4 = puVar1;
        puVar7 = puVar8;
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        uVar11 = puVar7[3];
        *puVar4 = *puVar7;
        puVar4[1] = uVar9;
        puVar4[2] = uVar10;
        puVar4[3] = uVar11;
        puVar8 = puVar7 + 4;
        puVar1 = puVar4 + 4;
      } while (puVar8 != auStack_c0);
      uVar9 = puVar7[5];
      puVar4[4] = *puVar8;
      puVar4[5] = uVar9;
      return param_2;
    }
  }
  return (undefined8 *)0x0;
}

