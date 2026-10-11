/* Ghidra pseudocode. PS2 address: 00101d88. Not validated source. */

void FUN_00101d88(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0xe4) != 0) {
    *(undefined4 *)(param_2 + 0x438) = 1;
    FUN_00147438(0x2795b8);
    lVar2 = FUN_00101818(param_1);
    if (lVar2 != 0) {
      FUN_001f3640(DAT_002c56e8,0x2a6b70,5,*(undefined4 *)(param_2 + 0x444),0x41000);
    }
  }
  iVar1 = DAT_002859e4;
  *(undefined4 *)((int)param_1 + 4) = 1;
  FUN_0015da00(*(undefined4 *)(iVar1 + 0xa0),
               (&PTR_s_PreLoad_00277acc)[*(int *)((int)param_1 + 8) * 6]);
  return;
}

