/* Ghidra pseudocode. PS2 address: 00219818. Not validated source. */

undefined4 FUN_00219818(undefined8 param_1,int param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)(&DAT_00298bb8 + param_2 * 0x58) == 0) {
    lVar1 = FUN_00236510(*(undefined4 *)(&DAT_00298bb4 + param_2 * 0x58));
    if (lVar1 == 0) {
      uVar3 = FUN_0023b460(*(undefined4 *)(&DAT_00298bb4 + param_2 * 0x58));
      if ((param_3 & 0x40000000) == 0) {
        if ((param_3 & 0xc000000) == 0) {
          lVar2 = FUN_0023a448(0x2bdc90,uVar3,param_3 & 0x3ffffff);
        }
        else {
          lVar2 = FUN_00210840(0x28ac20,uVar3,param_3,0x2bdc90,0,0);
        }
      }
      else {
        lVar2 = FUN_002107c8(0x298590,uVar3,param_3,0x2bdc90,0,0);
      }
      if (lVar2 != 0) {
        if ((long)param_3 < 0) {
          FUN_0023bbd0(lVar2,0,uVar3);
        }
        else {
          FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,uVar3);
        }
      }
      FUN_0023bac0(lVar2,*(undefined4 *)(&DAT_00298bb4 + param_2 * 0x58),uVar3);
    }
    else {
      if ((param_3 & 0x40000000) == 0) {
        if ((param_3 & 0xc000000) == 0) {
          lVar2 = FUN_0023a448(0x2bdc90,lVar1,param_3 & 0x3ffffff);
        }
        else {
          lVar2 = FUN_00210840(0x28ac20,lVar1,param_3,0x2bdc90,0,0);
        }
      }
      else {
        lVar2 = FUN_002107c8(0x298590,lVar1,param_3,0x2bdc90,0,0);
      }
      if (lVar2 != 0) {
        if ((long)param_3 < 0) {
          FUN_0023bbd0(lVar2,0,lVar1);
        }
        else {
          FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,lVar1);
        }
      }
      FUN_00236370(*(undefined4 *)(&DAT_00298bb4 + param_2 * 0x58),lVar2);
    }
    FUN_0023a998(*(undefined4 *)(&DAT_00298bb4 + param_2 * 0x58));
    *(undefined4 *)(&DAT_00298bb4 + param_2 * 0x58) = 0;
    *(int *)(&DAT_00298bb8 + param_2 * 0x58) = (int)lVar2;
  }
  return *(undefined4 *)(&DAT_00298bb8 + param_2 * 0x58);
}

