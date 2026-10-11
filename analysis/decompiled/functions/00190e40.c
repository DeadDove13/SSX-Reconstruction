/* Ghidra pseudocode. PS2 address: 00190e40. Not validated source. */

undefined8 FUN_00190e40(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  iVar5 = (int)param_2;
  iVar9 = 0;
  iStack_a4 = 0;
  iStack_a8 = 0;
  *(undefined4 *)(iVar5 + 0x124) = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x110);
  if (0 < *(int *)(iVar5 + 0x18)) {
    puVar7 = (undefined8 *)(iVar5 + 0x130);
    iVar8 = 0;
    piVar6 = (int *)(iVar5 + 0x24);
    do {
      lVar3 = FUN_0018dcf0(*piVar6);
      if (lVar3 == 0) {
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        iVar4 = iStack_a8;
LAB_00190f90:
        iStack_a8 = iVar4;
        iVar4 = *(int *)(iVar5 + 0x18);
      }
      else {
        iVar4 = *(int *)(*piVar6 + 0xc);
        (**(code **)(iVar4 + 0x24))(&uStack_a0,*piVar6 + (int)*(short *)(iVar4 + 0x20));
        *puVar7 = CONCAT44(uStack_9c,uStack_a0);
        puVar7[1] = CONCAT44(uStack_94,uStack_98);
        lVar3 = FUN_0018e708(*(undefined4 *)(iVar5 + 4));
        if ((param_2 == lVar3) || (iVar1 = *(int *)(iVar5 + 0x10), *piVar6 == iVar1)) {
          iVar1 = *(int *)(iVar5 + 0x10);
          iStack_a4 = iStack_a4 + *(int *)(iVar5 + 0x13c + iVar8);
        }
        iVar2 = *(int *)(iVar5 + 0x138 + iVar8);
        iVar4 = iVar2 + 0x14;
        if (*piVar6 == iVar1) {
          iVar4 = iVar2;
        }
        if (iStack_a8 < iVar4) goto LAB_00190f90;
        iVar4 = *(int *)(iVar5 + 0x18);
      }
      iVar9 = iVar9 + 1;
      puVar7 = puVar7 + 2;
      iVar8 = iVar8 + 0x10;
      piVar6 = piVar6 + 1;
    } while (iVar9 < iVar4);
  }
  puVar10 = (undefined4 *)param_1;
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = iStack_a8;
  puVar10[3] = iStack_a4;
  return param_1;
}

