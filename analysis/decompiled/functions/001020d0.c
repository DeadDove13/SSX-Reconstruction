/* Ghidra pseudocode. PS2 address: 001020d0. Not validated source. */

void FUN_001020d0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  uVar2 = FUN_00101418(param_2);
  iVar5 = (int)param_2;
  puVar3 = (undefined4 *)(iVar5 + 200);
  if (0 < *(int *)(iVar5 + 0x8c)) {
    uVar1 = *puVar3;
    while( true ) {
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
      FUN_00107af0(uVar1,uVar2);
      if (*(int *)(iVar5 + 0x8c) <= iVar4) break;
      uVar1 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 4) = 5;
  FUN_0015da00(*(undefined4 *)(DAT_002859e4 + 0xa0),
               (&PTR_s_RaceInBlocks2_00277adc)[*(int *)(param_1 + 8) * 6]);
  return;
}

