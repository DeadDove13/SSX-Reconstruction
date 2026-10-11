/* Ghidra pseudocode. PS2 address: 001478c8. Not validated source. */

void FUN_001478c8(int param_1,long param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  
  iVar2 = (int)param_2 * 2 + param_1;
  puVar4 = (ushort *)(&DAT_00279920 + param_3 * 6 + *(int *)(*(int *)(param_1 + 0x220) + 0x344) * 2)
  ;
  if (*puVar4 != *(ushort *)(iVar2 + 0x230)) {
    *(ushort *)(iVar2 + 0x230) = *puVar4;
    piVar3 = (int *)(param_1 + 0x224 + (int)param_2 * 4);
    if (*piVar3 == 0) {
      uVar1 = *puVar4;
    }
    else {
      FUN_00147828();
      uVar1 = *puVar4;
    }
    iVar2 = FUN_001469b8(0x2795b8,uVar1 & 0x3f,uVar1 >> 6);
    *piVar3 = iVar2;
    if (param_2 == 0) {
      *(uint *)(param_1 + 0x208) =
           *(uint *)(*(int *)(*(int *)(param_1 + 0x224) + 8) + 0xc) >> 7 & 0xff;
    }
  }
  return;
}

