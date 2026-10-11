/* Ghidra pseudocode. PS2 address: 0020a1e0. Not validated source. */

void FUN_0020a1e0(undefined8 param_1,int param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x35344);
  if ((param_3 & 0x40000000) == 0) {
    if ((param_3 & 0xc000000) == 0) {
      lVar3 = FUN_0023a448(0x2bd3b0,0x5c,param_3 & 0x3ffffff);
    }
    else {
      lVar3 = FUN_00210840(0x28ac20,0x5c,param_3,0x2bd3b0,0,0);
    }
  }
  else {
    lVar3 = FUN_002107c8(0x298590,0x5c,param_3,0x2bd3b0,0,0);
  }
  if (lVar3 != 0) {
    if ((long)param_3 < 0) {
      FUN_0023bbd0(lVar3,0,0x5c);
    }
    else {
      FUN_0023bbd0(lVar3,0xffffffffdeadc0de,0x5c);
    }
  }
  uVar2 = FUN_00209828(lVar3,param_1,param_3,param_4);
  *(undefined4 *)(param_2 * 4 + iVar1) = uVar2;
  return;
}

