/* Ghidra pseudocode. PS2 address: 0022ab00. Not validated source. */

int FUN_0022ab00(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = DAT_0029ac5c + DAT_0029ac58;
  if ((uVar1 < DAT_0029ac5c) || (uVar1 < DAT_0029ac58)) {
    iVar5 = 1;
  }
  uVar2 = uVar1 + DAT_0029ac54 + iVar5;
  uVar3 = uVar2 + DAT_0029ac50 + (uint)(uVar2 < DAT_0029ac54);
  DAT_0029ac5c = DAT_0029ac5c + 1;
  uVar4 = uVar3 + DAT_0029ac4c + (uint)(uVar3 < DAT_0029ac50);
  DAT_0029ac48 = uVar4 + DAT_0029ac48 + (uint)(uVar4 < DAT_0029ac4c);
  DAT_0029ac4c = uVar4;
  DAT_0029ac50 = uVar3;
  DAT_0029ac54 = uVar2;
  DAT_0029ac58 = uVar1;
  if ((((DAT_0029ac5c == 0) && (DAT_0029ac58 = uVar1 + 1, DAT_0029ac58 == 0)) &&
      (DAT_0029ac54 = uVar2 + 1, DAT_0029ac54 == 0)) &&
     ((DAT_0029ac50 = uVar3 + 1, DAT_0029ac50 == 0 && (DAT_0029ac4c = uVar4 + 1, DAT_0029ac4c == 0))
     )) {
    DAT_0029ac48 = DAT_0029ac48 + 1;
  }
  return DAT_0029ac48;
}

