/* Ghidra pseudocode. PS2 address: 00226370. Not validated source. */

void FUN_00226370(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  FUN_002250c0();
  do {
    piVar1 = (int *)(&DAT_0029a7c0)[iVar8];
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x16) != '\0')) {
      if ((char)piVar1[5] == '\x02') {
        lVar4 = FUN_0022e7b8(piVar1[3]);
        if (0 < lVar4) goto LAB_00226600;
        piVar1[7] = piVar1[8];
        *(undefined8 *)(piVar1 + 9) = *(undefined8 *)(piVar1 + 0x19);
        *(undefined8 *)(piVar1 + 0xb) = *(undefined8 *)(piVar1 + 0x1b);
        *(undefined8 *)(piVar1 + 0xd) = *(undefined8 *)(piVar1 + 0x1d);
        *(undefined8 *)(piVar1 + 0xf) = *(undefined8 *)(piVar1 + 0x1f);
        *(undefined8 *)(piVar1 + 0x11) = *(undefined8 *)(piVar1 + 0x21);
        *(undefined8 *)(piVar1 + 0x13) = *(undefined8 *)(piVar1 + 0x23);
        *(undefined8 *)(piVar1 + 0x15) = *(undefined8 *)(piVar1 + 0x25);
        *(undefined8 *)(piVar1 + 0x17) = *(undefined8 *)(piVar1 + 0x27);
        piVar1[0x1d] = 0;
        FUN_0022e6a8(piVar1[3]);
        iVar3 = FUN_0022ddc8(piVar1[3],piVar1 + 7,piVar1 + 9,piVar1 + 0x29);
        piVar1[2] = iVar3;
        *(undefined1 *)(piVar1 + 5) = 1;
      }
      bVar2 = false;
      if ((int)((uint)*(byte *)((int)piVar1 + 0x17) << 0x18) <
          (int)((uint)*(byte *)((int)piVar1 + 0x15) << 0x18)) {
        iVar3 = *piVar1 + *(char *)((int)piVar1 + 0x17) * 0x2c;
        bVar2 = false;
        if (((*(int *)(iVar3 + 0x10) != 0) &&
            (bVar2 = true, -1 < (int)((uint)*(ushort *)(iVar3 + 0x28) << 0x10))) &&
           (bVar2 = false, *(short *)(iVar3 + 0x28) != 0)) {
          uVar5 = FUN_0023db48(piVar1[1]);
          iVar7 = 4000000;
          if (*(int *)(iVar3 + 0x10) == 0) {
            trap(7);
          }
          if (uVar5 < 0x3d0901) {
            iVar7 = (int)uVar5;
          }
          if ((uint)((iVar7 * 1000) / *(int *)(iVar3 + 0x10)) < (uint)(int)*(short *)(iVar3 + 0x28))
          {
            lVar4 = FUN_0023db90(piVar1[1]);
            bVar2 = true;
            if (lVar4 != 2) goto LAB_0022657c;
          }
          *(undefined2 *)(iVar3 + 0x28) = 0;
          bVar2 = false;
        }
      }
LAB_0022657c:
      if (!bVar2) {
        iVar3 = 10;
        if ((char)piVar1[5] == '\x01') {
          iVar3 = FUN_0022e768(piVar1[3]);
          lVar4 = 0;
          if (iVar3 == 0) goto LAB_00226600;
          iVar7 = piVar1[1];
        }
        else {
          lVar4 = 0;
          iVar7 = piVar1[1];
        }
        while( true ) {
          iVar3 = iVar3 + -1;
          lVar6 = FUN_0023d388(iVar7);
          if (lVar6 != 0) {
            lVar4 = FUN_00226178(iVar8,lVar6);
          }
          if ((lVar4 == 0) || (iVar3 < 1)) break;
          iVar7 = piVar1[1];
        }
      }
    }
LAB_00226600:
    iVar8 = iVar8 + 1;
    if (7 < iVar8) {
      FUN_002250a0();
      return;
    }
  } while( true );
}

