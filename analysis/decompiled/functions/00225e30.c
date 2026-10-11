/* Ghidra pseudocode. PS2 address: 00225e30. Not validated source. */

undefined8 FUN_00225e30(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_c0;
  int iStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  
  iVar7 = 0;
  piVar3 = (int *)(&DAT_0029a7c0)[param_1];
  piStack_b4 = piVar3 + 0x19;
  piStack_b8 = piVar3 + 8;
  iVar8 = *piVar3 + *(char *)((int)piVar3 + 0x17) * 0x2c;
  iStack_bc = param_2;
  FUN_0022a448(param_2 + 8,piStack_b8,piStack_b4,&uStack_c0);
  piStack_b0 = piVar3 + 0x21;
  *(undefined4 *)(iVar8 + 0x18) = uStack_c0;
  iVar6 = 0;
  if (piVar3[0x21] == 0) {
    piStack_ac = piVar3 + 7;
    iVar6 = piVar3[1];
  }
  else {
    piStack_ac = piVar3 + 7;
    do {
      uStack_e0 = 3;
      iVar7 = iVar7 + 1;
      uStack_dc = *(undefined4 *)((int)piStack_b0 + iVar6);
      uStack_d8 = *(undefined4 *)((int)piVar3 + iVar6 + 0x94);
      lVar5 = 0;
      uStack_d0 = *(undefined4 *)(iVar8 + 4);
      if ('\0' < DAT_0029a88e) {
        do {
          iVar6 = (int)lVar5;
          lVar5 = (long)(iVar6 + 1);
          (*(code *)(&DAT_0029a8cc)[iVar6])(&uStack_e0);
        } while (lVar5 < DAT_0029a88e);
      }
      iVar6 = iVar7 * 4;
    } while (piStack_b0[iVar7] != 0);
    iVar6 = piVar3[1];
  }
  FUN_0023d4a8(iVar6,iStack_bc);
  bVar1 = *(byte *)((int)piStack_b8 + 2);
  cVar2 = *(char *)((int)piStack_b8 + 3);
  if (cVar2 == '\x05') {
    iVar6 = 0x92;
LAB_00226014:
    iVar6 = (uint)*(ushort *)(piVar3 + 8) * (uint)bVar1 * iVar6;
LAB_00226018:
    iVar6 = iVar6 >> 8;
  }
  else {
    if (cVar2 == '\n') {
      iVar6 = 0x88;
      goto LAB_00226014;
    }
    if (cVar2 == '\x04') {
      iVar6 = 0x33;
      goto LAB_00226014;
    }
    if (cVar2 == '\b') {
      iVar6 = 0x200;
      goto LAB_00226014;
    }
    if (cVar2 != '\x0e') {
      iVar6 = 0;
      if (cVar2 == '\x0f') {
        iVar6 = (uint)bVar1 << 3;
        goto LAB_0022601c;
      }
      goto LAB_00226018;
    }
    iVar6 = (uint)bVar1 * 0xc;
  }
LAB_0022601c:
  *(int *)(iVar8 + 0x10) = iVar6;
  lVar5 = FUN_0025a4c8(piStack_ac,piStack_b8,4);
  if (lVar5 == 0) {
    lVar5 = FUN_0025a4c8(piVar3 + 9,piStack_b4,0x40);
    if (lVar5 == 0) {
      if (piVar3[0x1d] == 0) goto LAB_0022610c;
      sVar4 = (short)piVar3[7];
    }
    else {
      sVar4 = (short)piVar3[7];
    }
  }
  else {
    sVar4 = (short)piVar3[7];
  }
  if (sVar4 != 0) {
    *(undefined1 *)(piVar3 + 5) = 2;
    return 0;
  }
  piVar3[7] = piVar3[8];
  *(undefined8 *)(piVar3 + 9) = *(undefined8 *)(piVar3 + 0x19);
  *(undefined8 *)(piVar3 + 0xb) = *(undefined8 *)(piVar3 + 0x1b);
  *(undefined8 *)(piVar3 + 0xd) = *(undefined8 *)(piVar3 + 0x1d);
  *(undefined8 *)(piVar3 + 0xf) = *(undefined8 *)(piVar3 + 0x1f);
  *(undefined8 *)(piVar3 + 0x11) = *(undefined8 *)(piVar3 + 0x21);
  *(undefined8 *)(piVar3 + 0x13) = *(undefined8 *)(piVar3 + 0x23);
  *(undefined8 *)(piVar3 + 0x15) = *(undefined8 *)(piVar3 + 0x25);
  *(undefined8 *)(piVar3 + 0x17) = *(undefined8 *)(piVar3 + 0x27);
  piVar3[0x1d] = 0;
LAB_0022610c:
  if ((char)piVar3[5] != '\x01') {
    iVar6 = FUN_0022ddc8(piVar3[3],piStack_ac,piVar3 + 9,piVar3 + 0x29);
    piVar3[2] = iVar6;
    *(undefined1 *)(piVar3 + 5) = 1;
  }
  return 0;
}

