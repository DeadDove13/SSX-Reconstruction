/* Ghidra pseudocode. PS2 address: 00147440. Not validated source. */

undefined * FUN_00147440(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = (int)param_1;
  puVar1 = (undefined *)0x1;
  if (*(int *)(iVar3 + 0x240) != 6) {
    FUN_00146b60(param_1,0);
    uVar5 = 0;
    *(undefined4 *)(iVar3 + 0x240) = 6;
    iVar4 = 0;
    FUN_002193f0(iVar3 + 0x244,0x2ac208,0x10);
    puVar1 = &DAT_0027a598;
    *(uint *)(iVar3 + 0x240) = *(uint *)(iVar3 + 0x240) | 0x40;
    if (0 < DAT_0027b810) {
      do {
        if (-1 < (char)(&DAT_0027b868)[iVar4 * 0x68]) {
          lVar2 = FUN_00154c60(0x27a598);
          if (((int)uVar5 >> ((uint)lVar2 & 0x1f) & 1U) == 0) {
            uVar5 = uVar5 | 1 << ((uint)lVar2 & 0x1f);
            if (lVar2 == 0) {
              FUN_00146af0(param_1,0xb);
            }
            else if (lVar2 == 1) {
              FUN_00146af0(param_1,0x14);
            }
            else if (lVar2 == 2) {
              FUN_00146af0(param_1,0xe);
            }
            else if (lVar2 == 3) {
              FUN_00146af0(param_1,0x1b);
            }
            else if (lVar2 == 4) {
              FUN_00146af0(param_1,0x18);
            }
            else if (lVar2 == 5) {
              FUN_00146af0(param_1,0x1e);
            }
            else if (lVar2 == 6) {
              FUN_00146af0(param_1,0x11);
            }
            else if (lVar2 == 7) {
              FUN_00146af0(param_1,8);
            }
          }
        }
        iVar4 = iVar4 + 1;
        puVar1 = (undefined *)0x68;
      } while (iVar4 < DAT_0027b810);
    }
  }
  return puVar1;
}

