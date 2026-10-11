/* Ghidra pseudocode. PS2 address: 00219fc0. Not validated source. */

undefined4 FUN_00219fc0(int param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = param_2 * 0x58;
  if (*(int *)(&DAT_00298bb8 + iVar1) == 0) {
    uVar2 = FUN_00239c50(*(undefined4 *)(param_1 + 0x14),&DAT_00298bbc + iVar1);
    *(int *)(&DAT_00298bb4 + iVar1) = (int)uVar2;
    uVar2 = FUN_00236510(uVar2);
    if ((param_3 & 0x40000000) == 0) {
      if ((param_3 & 0xc000000) == 0) {
        lVar3 = FUN_0023a448(0x2bdc90,uVar2,param_3 & 0x3ffffff);
      }
      else {
        lVar3 = FUN_00210840(0x28ac20,uVar2,param_3,0x2bdc90,0,0);
      }
    }
    else {
      lVar3 = FUN_002107c8(0x298590,uVar2,param_3,0x2bdc90,0,0);
    }
    if (lVar3 != 0) {
      if ((long)param_3 < 0) {
        FUN_0023bbd0(lVar3,0,uVar2);
      }
      else {
        FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,uVar2);
      }
    }
    FUN_00236370(*(undefined4 *)(&DAT_00298bb4 + param_2 * 0x58),lVar3);
    *(undefined4 *)(&DAT_00298bb4 + param_2 * 0x58) = 0;
    *(int *)(&DAT_00298bb8 + param_2 * 0x58) = (int)lVar3;
  }
  return *(undefined4 *)(&DAT_00298bb8 + param_2 * 0x58);
}

