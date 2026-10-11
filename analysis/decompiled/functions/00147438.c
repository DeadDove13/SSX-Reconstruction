/* Ghidra pseudocode. PS2 address: 00147438. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001471d4) */
/* WARNING: Removing unreachable block (ram,0x001471c4) */
/* WARNING: Removing unreachable block (ram,0x00147258) */
/* WARNING: Removing unreachable block (ram,0x00147274) */
/* WARNING: Removing unreachable block (ram,0x00147290) */
/* WARNING: Removing unreachable block (ram,0x001472ac) */
/* WARNING: Removing unreachable block (ram,0x001472c4) */
/* WARNING: Removing unreachable block (ram,0x001472dc) */
/* WARNING: Removing unreachable block (ram,0x001472f4) */
/* WARNING: Removing unreachable block (ram,0x0014730c) */
/* WARNING: Removing unreachable block (ram,0x00147314) */
/* WARNING: Removing unreachable block (ram,0x001472fc) */
/* WARNING: Removing unreachable block (ram,0x001472e4) */
/* WARNING: Removing unreachable block (ram,0x001472cc) */
/* WARNING: Removing unreachable block (ram,0x001472b4) */
/* WARNING: Removing unreachable block (ram,0x00147298) */
/* WARNING: Removing unreachable block (ram,0x0014727c) */
/* WARNING: Removing unreachable block (ram,0x00147260) */

undefined * FUN_00147438(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = (undefined *)0x1;
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x240) != 5) {
    FUN_00146b60(param_1,0);
    *(undefined4 *)(iVar3 + 0x240) = 5;
    FUN_002193f0(iVar3 + 0x244,0x2ac208,0x10);
    *(uint *)(iVar3 + 0x240) = *(uint *)(iVar3 + 0x240) | 0x40;
    FUN_00146af0(param_1,0);
    FUN_00146af0(param_1,5);
    uVar4 = 0;
    puVar2 = &DAT_0027a598;
    iVar3 = 0;
    if (0 < DAT_0027b810) {
      do {
        if ((-1 < (char)(&DAT_0027b868)[iVar3 * 0x68]) &&
           (uVar1 = *(uint *)(&DAT_0027b838 + iVar3 * 0x68),
           ((int)uVar4 >> (uVar1 & 0x1f) & 1U) == 0)) {
          uVar4 = uVar4 | 1 << (uVar1 & 0x1f);
          if (uVar1 == 0) {
            FUN_00146af0(param_1,0xc);
          }
          else if (uVar1 == 1) {
            FUN_00146af0(param_1,0x15);
          }
          else if (uVar1 == 2) {
            FUN_00146af0(param_1,0xf);
          }
          else if (uVar1 == 3) {
            FUN_00146af0(param_1,0x1c);
          }
          else if (uVar1 == 4) {
            FUN_00146af0(param_1,0x19);
          }
          else if (uVar1 == 5) {
            FUN_00146af0(param_1,0x1f);
          }
          else if (uVar1 == 6) {
            FUN_00146af0(param_1,0x12);
          }
          else if (uVar1 == 7) {
            FUN_00146af0(param_1,9);
          }
        }
        iVar3 = iVar3 + 1;
        puVar2 = (undefined *)0x68;
      } while (iVar3 < DAT_0027b810);
    }
  }
  return puVar2;
}

