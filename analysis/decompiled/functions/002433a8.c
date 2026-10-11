/* Ghidra pseudocode. PS2 address: 002433a8. Not validated source. */

int FUN_002433a8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = DAT_002a4fcc + DAT_002a4fc8;
  iVar5 = 0;
  if ((uVar1 < DAT_002a4fcc) || (uVar1 < DAT_002a4fc8)) {
    iVar5 = 1;
  }
  uVar2 = uVar1 + DAT_002a4fc4 + iVar5;
  uVar3 = uVar2 + DAT_002a4fc0 + (uint)(uVar2 < DAT_002a4fc4);
  DAT_002a4fcc = DAT_002a4fcc + 1;
  uVar4 = uVar3 + DAT_002a4fbc + (uint)(uVar3 < DAT_002a4fc0);
  DAT_002a4fb8 = uVar4 + DAT_002a4fb8 + (uint)(uVar4 < DAT_002a4fbc);
  DAT_002a4fbc = uVar4;
  DAT_002a4fc0 = uVar3;
  DAT_002a4fc4 = uVar2;
  DAT_002a4fc8 = uVar1;
  if ((((DAT_002a4fcc == 0) && (DAT_002a4fc8 = uVar1 + 1, DAT_002a4fc8 == 0)) &&
      (DAT_002a4fc4 = uVar2 + 1, DAT_002a4fc4 == 0)) &&
     ((DAT_002a4fc0 = uVar3 + 1, DAT_002a4fc0 == 0 && (DAT_002a4fbc = uVar4 + 1, DAT_002a4fbc == 0))
     )) {
    DAT_002a4fb8 = DAT_002a4fb8 + 1;
  }
  return DAT_002a4fb8;
}

