/* Ghidra pseudocode. PS2 address: 00255cd8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00255df8) */

void FUN_00255cd8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int iStack_750;
  undefined4 uStack_74c;
  undefined1 *puStack_748;
  undefined *puStack_744;
  undefined1 *puStack_740;
  int iStack_110;
  int *piStack_10c;
  undefined4 *puStack_108;
  int *piStack_104;
  
  iStack_110 = (*(code *)PTR_FUN_002a5d2c)();
  iVar5 = *(int *)(iStack_110 + 4);
  piStack_10c = (int *)(iStack_110 + 4);
  puStack_108 = (undefined4 *)(iVar5 + 4);
  if (*(int *)(iVar5 + 4) != 0) {
    uStack_74c = 0;
    puStack_744 = &DAT_00255d90;
    *piStack_10c = (int)&iStack_750;
    puVar1 = (undefined4 *)*puStack_108;
    iStack_750 = iVar5;
    puStack_748 = (undefined1 *)&iStack_750;
    piStack_104 = &iStack_750;
    puStack_740 = (undefined1 *)&iStack_750;
    while (puVar1 != (undefined4 *)0x0) {
      uVar2 = puVar1[2];
      pcVar3 = (code *)puVar1[1];
      *puStack_108 = *puVar1;
      (*pcVar3)(uVar2,2);
      puVar1 = (undefined4 *)*puStack_108;
    }
    *piStack_10c = *piStack_104;
  }
  if (*(int *)(iStack_110 + 8) != 0) {
    piVar4 = (int *)*piStack_10c;
    iVar5 = *piVar4;
    if (iVar5 != 0) goto LAB_00255e3c;
  }
  FUN_00255b18();
  piVar4 = (int *)*piStack_10c;
  iVar5 = *piVar4;
LAB_00255e3c:
  *piStack_10c = iVar5;
                    /* WARNING: Could not recover jumptable at 0x00255e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)piVar4[3])();
  return;
}

