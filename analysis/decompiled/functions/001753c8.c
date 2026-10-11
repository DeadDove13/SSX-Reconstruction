/* Ghidra pseudocode. PS2 address: 001753c8. Not validated source. */

undefined8 FUN_001753c8(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uVar6;
  
  iVar10 = (int)param_1;
  if (*(int *)(iVar10 + 0xf4) == 0) {
    uVar6 = FUN_001746e0(param_1,param_2);
    if ((param_2 & 0x880) == 0) {
      return uVar6;
    }
    iVar3 = *(int *)(iVar10 + 0x1c);
    if (iVar3 == 1) {
      lVar5 = FUN_0023a448(0x2b0b40,0x5410,0x10);
      if (lVar5 != 0) {
        FUN_0023bbd0(lVar5,0xffffffffdeadc0de,0x5410);
      }
      uVar4 = *(undefined4 *)(iVar10 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 0x10);
      uVar6 = 1;
LAB_00175654:
      uVar9 = 0;
    }
    else {
      if (1 < iVar3) {
        iVar8 = *(int *)(iVar10 + 0x10);
        if (iVar3 != 2) goto LAB_0017566c;
        uVar7 = FUN_001703b8(iVar8,1);
        DAT_0027bc00 = (uint)((uVar7 & 0x880) != 0);
        lVar5 = FUN_0023a448(0x2b0b40,0x5410,0x10);
        if (lVar5 != 0) {
          FUN_0023bbd0(lVar5,0xffffffffdeadc0de,0x5410);
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x44);
        uVar2 = *(undefined4 *)(iVar10 + 0x10);
        uVar6 = 0;
        goto LAB_00175654;
      }
      if (iVar3 != 0) {
        iVar8 = *(int *)(iVar10 + 0x10);
        goto LAB_0017566c;
      }
      lVar5 = FUN_0023a448(0x2b0b40,0x5410,0x10);
      if (lVar5 != 0) {
        FUN_0023bbd0(lVar5,0xffffffffdeadc0de,0x5410);
      }
      uVar4 = *(undefined4 *)(iVar10 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 0x10);
      uVar6 = 1;
      uVar9 = 1;
    }
    uVar4 = FUN_0016ad28(lVar5,uVar4,uVar2,uVar6,uVar9);
    *(undefined4 *)(iVar10 + 0xf4) = uVar4;
    iVar8 = *(int *)(iVar10 + 0x10);
LAB_0017566c:
    *(undefined4 *)(iVar8 + 0x14) = 1;
    return 0;
  }
  FUN_0016af18();
  iVar3 = *(int *)(iVar10 + 0x1c);
  if (iVar3 == 1) {
    iVar3 = *(int *)(iVar10 + 0xf4);
LAB_0017546c:
    if (*(int *)(iVar3 + 0x180) == 0) {
      iVar3 = *(int *)(iVar10 + 0xf4);
      goto LAB_001754a8;
    }
    FUN_001dc310();
    iVar3 = *(int *)(iVar10 + 0xf4);
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar3 + 0x170) + 0xc))
                (iVar3 + *(short *)(*(int *)(iVar3 + 0x170) + 8),3);
    }
    *(undefined4 *)(iVar10 + 0xf4) = 0;
  }
  else {
    if (iVar3 < 2) {
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar10 + 0xf4);
        goto LAB_001754a8;
      }
      iVar3 = *(int *)(iVar10 + 0xf4);
      goto LAB_0017546c;
    }
    if (iVar3 != 2) {
      iVar3 = *(int *)(iVar10 + 0xf4);
      goto LAB_001754a8;
    }
    lVar5 = FUN_0016aef0(*(undefined4 *)(iVar10 + 0xf4));
    if (lVar5 == 0) {
      iVar3 = *(int *)(iVar10 + 0xf4);
      goto LAB_0017546c;
    }
    FUN_001dc310(*(undefined4 *)(iVar10 + 0xf4));
    iVar3 = *(int *)(iVar10 + 0xf4);
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar3 + 0x170) + 0xc))
                (iVar3 + *(short *)(*(int *)(iVar3 + 0x170) + 8),3);
    }
    *(undefined4 *)(iVar10 + 0xf4) = 0;
    if (*(undefined4 **)(iVar10 + 0x48) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar10 + 0x48) = 1;
    }
  }
  iVar3 = *(int *)(iVar10 + 0xf4);
LAB_001754a8:
  uVar6 = 0;
  if (iVar3 == 0) {
    FUN_0016e100(*(undefined4 *)(iVar10 + 0x10),0x35a);
    FUN_0016eb08(*(undefined4 *)(iVar10 + 0x10),0x35a);
    FUN_0016e100(*(undefined4 *)(iVar10 + 0x10),0x359);
    FUN_0016e100(*(undefined4 *)(iVar10 + 0x10),0x358);
    FUN_0016e100(*(undefined4 *)(iVar10 + 0x10),0x35b);
    FUN_0016eae0(*(undefined4 *)(iVar10 + 0x10),0x35b);
    piVar1 = *(int **)(iVar10 + 0x48);
    *(undefined4 *)(*(int *)(iVar10 + 0x10) + 0x14) = 0;
    if ((piVar1 == (int *)0x0) || (uVar6 = 4, *piVar1 == 0)) {
      uVar6 = 0;
    }
  }
  return uVar6;
}

