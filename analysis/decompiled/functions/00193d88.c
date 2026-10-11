/* Ghidra pseudocode. PS2 address: 00193d88. Not validated source. */

void FUN_00193d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = (int)param_2;
  *(undefined4 *)(iVar5 + 0x34) = 1;
  thunk_FUN_001973a0(param_2);
  FUN_00210ab8(param_2);
  *(undefined4 *)(iVar5 + 0x38) = param_4;
  iVar3 = 0;
  do {
    iVar4 = iVar4 + 1;
    lVar2 = FUN_001867d0(0x2c4dd8,*(undefined4 *)(&DAT_002b51f0 + iVar3));
    if (lVar2 != 0) {
      iVar1 = *(int *)((int)lVar2 + 8);
      while( true ) {
        (**(code **)(iVar1 + 0x44))((int)lVar2 + (int)*(short *)(iVar1 + 0x40),param_2);
        lVar2 = FUN_00186830(0x2c4dd8,lVar2,*(undefined4 *)(&DAT_002b51f0 + iVar3));
        if (lVar2 == 0) break;
        iVar1 = *(int *)((int)lVar2 + 8);
      }
    }
    iVar3 = iVar4 * 4;
  } while (iVar4 < 4);
  FUN_00193eb8(param_1,param_2,3);
  FUN_00193eb8(param_1,param_2,4);
  FUN_00194bf0(param_1,param_2);
  *(undefined4 *)(iVar5 + 0x34) = 0;
  return;
}

