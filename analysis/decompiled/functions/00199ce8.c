/* Ghidra pseudocode. PS2 address: 00199ce8. Not validated source. */

undefined4 FUN_00199ce8(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  
  FUN_0015fae0(&iStack_c0,(uint)&iStack_c0 | 4,(uint)&iStack_c0 | 8,(uint)&iStack_c0 | 0xc,
               &iStack_b0);
  piVar8 = (int *)param_1;
  if (param_2 == 0) {
    iVar1 = FUN_0015f828();
    piVar8[7] = iVar1;
    piVar8[2] = iStack_c0;
    piVar8[3] = iStack_bc;
    piVar8[4] = iStack_b8;
    piVar8[5] = iStack_b4;
    piVar8[6] = iStack_b0;
    iVar1 = *piVar8;
  }
  else {
    iVar1 = *piVar8;
  }
  iVar6 = 0;
  if (0 < iVar1) {
    puVar4 = (uint *)(piVar8 + 0xf);
    iVar7 = 0;
    do {
      if (*puVar4 == param_2) {
        uVar2 = FUN_0015f828();
        *(int *)((int)piVar8 + iVar7 + 0x24) = iStack_c0;
        *(int *)((int)piVar8 + iVar7 + 0x28) = iStack_bc;
        *(undefined4 *)((int)piVar8 + iVar7 + 0x38) = uVar2;
        *(int *)((int)piVar8 + iVar7 + 0x2c) = iStack_b8;
        *(int *)((int)piVar8 + iVar7 + 0x30) = iStack_b4;
        *(int *)((int)piVar8 + iVar7 + 0x34) = iStack_b0;
        FUN_0019a240(param_1,param_2);
        goto LAB_00199fe4;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x1c;
      puVar4 = puVar4 + 7;
    } while (iVar6 < iVar1);
  }
  piStack_ac = piVar8 + 0xb;
  if (iVar1 < 0x80) {
    piStack_a8 = piVar8 + 0xc;
    iVar6 = iVar1;
    do {
      iVar7 = iVar6;
      iVar6 = iVar7 + -1;
      if (iVar6 < 0) {
        iVar1 = FUN_0015f828();
        piVar8[*piVar8 * 7 + 0xe] = iVar1;
        iVar1 = *piVar8;
        piVar8[iVar1 * 7 + 0xd] = iStack_b0;
        piVar8[iVar1 * 7 + 9] = iStack_c0;
        iVar6 = *piVar8;
        piVar8[iVar1 * 7 + 10] = iStack_bc;
        piStack_ac[iVar1 * 7] = iStack_b8;
        piStack_a8[iVar1 * 7] = iStack_b4;
        piVar8[iVar6 * 7 + 0xf] = param_2;
        *piVar8 = iVar6 + 1;
        FUN_0019a240(param_1,param_2);
        return 1;
      }
      iVar5 = iVar1 + -1;
    } while (param_2 <= (uint)piVar8[iVar6 * 7 + 0xf]);
    if (iVar6 < iVar5) {
      piVar3 = piVar8 + iVar5 * 7 + 0x10;
      do {
        *(undefined8 *)piVar3 = *(undefined8 *)(piVar3 + -7);
        *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + -5);
        *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(piVar3 + -3);
        piVar3[6] = piVar3[-1];
        iVar5 = iVar5 + -1;
        piVar3 = piVar3 + -7;
      } while (iVar6 < iVar5);
    }
    iVar1 = FUN_0015f828();
    piVar8[iVar7 * 7 + 0xe] = iVar1;
    piVar8[iVar7 * 7 + 0xd] = iStack_b0;
    piVar8[iVar7 * 7 + 0xf] = param_2;
    piVar8[iVar7 * 7 + 9] = iStack_c0;
    iVar1 = *piVar8;
    piVar8[iVar7 * 7 + 10] = iStack_bc;
    piStack_ac[iVar7 * 7] = iStack_b8;
    piStack_a8[iVar7 * 7] = iStack_b4;
    *piVar8 = iVar1 + 1;
    FUN_0019a240(param_1,param_2);
    uVar2 = 1;
  }
  else {
LAB_00199fe4:
    uVar2 = 0;
  }
  return uVar2;
}

