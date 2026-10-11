/* Ghidra pseudocode. PS2 address: 0025b268. Not validated source. */

undefined4 FUN_0025b268(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  if (param_2 < 0x20) {
    iVar2 = puVar4[0x75];
    if (iVar2 == 0) {
      lVar3 = FUN_0025b1f8(param_1);
      if (lVar3 != 0) {
        return 0xffffffff;
      }
      iVar2 = puVar4[0x75];
    }
    puVar4 = (undefined4 *)((int)param_2 * 4 + iVar2);
    uVar1 = *puVar4;
    *puVar4 = param_3;
  }
  else {
    *puVar4 = 0x16;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

