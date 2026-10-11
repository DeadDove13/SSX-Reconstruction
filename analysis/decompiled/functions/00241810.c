/* Ghidra pseudocode. PS2 address: 00241810. Not validated source. */

void FUN_00241810(int param_1,short *param_2)

{
  uint uVar1;
  long lVar2;
  short *psVar3;
  int iVar4;
  int aiStack_60 [4];
  
  iVar4 = 0;
  psVar3 = param_2;
  for (uVar1 = (uint)(*(byte *)(param_1 + 3) >> 2); uVar1 != 0; uVar1 = uVar1 - 1) {
    lVar2 = FUN_00243898(*(undefined4 *)(*psVar3 * 4 + DAT_002c5b30),
                         *(undefined1 *)((int)param_2 + *(byte *)(psVar3 + 3) + 0x62),aiStack_60);
    if (lVar2 != 0) {
      iVar4 = iVar4 + aiStack_60[0];
    }
    psVar3 = psVar3 + 4;
  }
  FUN_002417e0(iVar4);
  return;
}

