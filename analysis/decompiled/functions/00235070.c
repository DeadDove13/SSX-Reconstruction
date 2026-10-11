/* Ghidra pseudocode. PS2 address: 00235070. Not validated source. */

undefined8 FUN_00235070(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = REG_RCNT1_TARGET;
  iVar1 = REG_RCNT1_COUNT;
  puVar5 = &DAT_002a4750;
  iVar4 = 7;
  REG_RCNT1_TARGET = ((uint)DAT_002c5994 + iVar3) - iVar1;
  REG_RCNT1_COUNT = 0;
  uVar2 = REG_RCNT1_MODE;
  REG_RCNT1_MODE = uVar2 | 0x400;
  DAT_002c5a9c = DAT_002c5a9c + 1;
  DAT_002c5aa0 = DAT_002c5aa0 + 1;
  do {
    iVar4 = iVar4 + -1;
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)();
    }
    puVar5 = puVar5 + 1;
  } while (-1 < iVar4);
  return 0;
}

