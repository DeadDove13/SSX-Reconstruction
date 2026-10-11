/* Ghidra pseudocode. PS2 address: 001e5cb8. Not validated source. */

void FUN_001e5cb8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if (DAT_002852a4 <= iVar4) {
      uVar1 = *(undefined4 *)((int)param_1 + 0x174);
      iVar4 = 0;
LAB_001e5d18:
      lVar3 = FUN_001aad78(uVar1,iVar4);
      if (lVar3 == 1) {
        FUN_001e5608(param_1,5);
        return;
      }
      if (lVar3 == 2) {
        FUN_001e5608(param_1,2);
        return;
      }
      return;
    }
    iVar2 = FUN_00182670(0x285290,iVar4);
    if (iVar2 == DAT_002c5128) {
      uVar1 = *(undefined4 *)((int)param_1 + 0x174);
      goto LAB_001e5d18;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

