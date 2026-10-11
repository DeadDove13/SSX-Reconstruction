/* Ghidra pseudocode. PS2 address: 001eaed8. Not validated source. */

void FUN_001eaed8(void)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_002cfdf0;
  puVar4 = &DAT_00298070;
  iVar3 = 0;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    lVar2 = FUN_0023a448(0x2c5480,uVar1,0);
    if (lVar2 != 0) {
      FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,uVar1);
    }
    *puVar5 = (int)lVar2;
    FUN_001eae80(iVar3);
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar3 < 6);
  return;
}

