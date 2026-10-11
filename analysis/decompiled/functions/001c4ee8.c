/* Ghidra pseudocode. PS2 address: 001c4ee8. Not validated source. */

ulong FUN_001c4ee8(int *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = *param_1;
  uVar3 = param_2 ^ 0x10;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  if ((uVar3 & 0x40000000) == 0) {
    if ((uVar3 & 0xc000000) == 0) {
      lVar2 = FUN_0023a448(0x2b7628,0x2af80,uVar3 & 0x3ffffff);
    }
    else {
      lVar2 = FUN_00210840(0x28ac20,0x2af80,uVar3,0x2b7628,0,0);
    }
  }
  else {
    lVar2 = FUN_002107c8(0x298590,0x2af80,uVar3,0x2b7628,0,0);
  }
  if (lVar2 == 0) {
    uVar3 = uVar3 & 0x20000000;
  }
  else {
    if ((long)uVar3 < 0) {
      uVar3 = FUN_0023bbd0(lVar2,0,0x2af80);
      *(int *)(iVar1 + 0x30) = (int)param_2;
      goto LAB_001d231c;
    }
    uVar3 = FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,0x2af80);
  }
  *(int *)(iVar1 + 0x30) = (int)param_2;
LAB_001d231c:
  *(int *)(iVar1 + 0x3c) = (int)lVar2;
  return uVar3;
}

