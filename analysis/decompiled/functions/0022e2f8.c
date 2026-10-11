/* Ghidra pseudocode. PS2 address: 0022e2f8. Not validated source. */

undefined4 FUN_0022e2f8(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2 * 2;
  iVar1 = (&DAT_002a1b10)[param_1];
  if (*(short *)(iVar1 + 0xc + iVar5) == 0) {
    uVar3 = 0;
    if ((param_2 == *(char *)(iVar1 + 0x12)) && (uVar3 = 0, *(char *)(iVar1 + 0x13) == '\0')) {
      if (*(short *)(iVar1 + 8 + iVar5) == *(short *)(iVar1 + 0x14)) {
        uVar3 = 0;
      }
      else {
        if (*(code **)(iVar1 + 0x24) != (code *)0x0) {
          (**(code **)(iVar1 + 0x24))
                    (*(undefined4 *)
                      (iVar1 + ((int)((uint)*(ushort *)(iVar1 + 0x14) << 0x10) >> 0xc) + 0x40));
        }
        *(short *)(iVar1 + 0x14) = *(short *)(iVar1 + 0x14) + 1;
        if ((int)((uint)*(ushort *)(iVar1 + 0x10) << 0x10) <=
            (int)((uint)*(ushort *)(iVar1 + 0x14) << 0x10)) {
          *(undefined2 *)(iVar1 + 0x14) = 0;
        }
        uVar3 = 0;
      }
    }
  }
  else {
    puVar4 = (ushort *)(iVar1 + 8 + iVar5);
    iVar6 = iVar1 + ((int)((uint)*puVar4 << 0x10) >> 0xc) + 0x38;
    *param_3 = *(undefined4 *)(iVar6 + 4);
    if (param_2 == *(char *)(iVar1 + 0x12)) {
      if (*puVar4 != *(ushort *)(iVar1 + 0x14)) {
        if (*(code **)(iVar1 + 0x24) != (code *)0x0) {
          (**(code **)(iVar1 + 0x24))
                    (*(undefined4 *)
                      (iVar1 + ((int)((uint)*(ushort *)(iVar1 + 0x14) << 0x10) >> 0xc) + 0x40));
        }
        *(short *)(iVar1 + 0x14) = *(short *)(iVar1 + 0x14) + 1;
        if ((int)((uint)*(ushort *)(iVar1 + 0x10) << 0x10) <=
            (int)((uint)*(ushort *)(iVar1 + 0x14) << 0x10)) {
          *(undefined2 *)(iVar1 + 0x14) = 0;
        }
      }
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) - *(int *)(iVar6 + 4);
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + *(int *)(iVar6 + 4);
    }
    puVar4 = (ushort *)(iVar1 + 8 + iVar5);
    *puVar4 = *puVar4 + 1;
    if ((int)((uint)*(ushort *)(iVar1 + 0x10) << 0x10) <= (int)((uint)*puVar4 << 0x10)) {
      *puVar4 = 0;
    }
    psVar2 = (short *)(iVar1 + 0xc + iVar5);
    *psVar2 = *psVar2 + -1;
    if ((*psVar2 == 0) && (param_2 == *(char *)(iVar1 + 0x12))) {
      *(undefined1 *)(iVar1 + 0x13) = 0;
    }
    uVar3 = *(undefined4 *)(iVar6 + param_2 * 4 + 8);
  }
  return uVar3;
}

