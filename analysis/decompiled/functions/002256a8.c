/* Ghidra pseudocode. PS2 address: 002256a8. Not validated source. */

void FUN_002256a8(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  cVar2 = *(char *)(param_1 + 0x17);
  if ('\0' < *(char *)(param_1 + 0x17)) {
    do {
      *(byte *)(param_1 + 0x17) = cVar2 - 1U;
      iVar1 = (int)((uint)(byte)(cVar2 - 1U) << 0x18) >> 0x16;
      lVar4 = 0;
      uStack_ac = *(undefined4 *)(param_1 + 0x34 + iVar1);
      uStack_a8 = *(undefined4 *)(param_1 + 0x44 + iVar1);
      if ('\0' < DAT_0029a88e) {
        puVar5 = &DAT_0029a8cc;
        pcVar3 = DAT_0029a8cc;
        uStack_b0 = param_2;
        while( true ) {
          lVar4 = (long)((int)lVar4 + 1);
          puVar5 = puVar5 + 1;
          (*pcVar3)(&uStack_b0);
          if (DAT_0029a88e <= lVar4) break;
          pcVar3 = (code *)*puVar5;
        }
      }
      cVar2 = *(char *)(param_1 + 0x17);
    } while ('\0' < *(char *)(param_1 + 0x17));
  }
  return;
}

