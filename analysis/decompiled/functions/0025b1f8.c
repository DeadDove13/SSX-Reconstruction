/* Ghidra pseudocode. PS2 address: 0025b1f8. Not validated source. */

undefined4 FUN_0025b1f8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  
  uVar1 = 0;
  if (*(int *)((int)param_1 + 0x1d4) == 0) {
    lVar3 = FUN_00259d50(param_1,0x80);
    *(int *)((int)param_1 + 0x1d4) = (int)lVar3;
    if (lVar3 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      puVar2 = (undefined4 *)((int)lVar3 + 0x7c);
      iVar4 = 0x1f;
      do {
        *puVar2 = 0;
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + -1;
      } while (-1 < iVar4);
      uVar1 = 0;
    }
  }
  return uVar1;
}

