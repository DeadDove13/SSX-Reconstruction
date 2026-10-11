/* Ghidra pseudocode. PS2 address: 001c3a88. Not validated source. */

void FUN_001c3a88(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    iVar2 = (int)param_1;
    WaitSema(*(undefined4 *)(iVar2 + 0x2a8));
    WaitSema(*(undefined4 *)(iVar2 + 0x2ac));
    if (*(int *)(iVar2 + 0x280) == 5) {
      *(undefined4 *)(iVar2 + 0x284 + *(int *)(iVar2 + 0x28c) * 4) = 0;
      *(undefined4 *)(iVar2 + 0x280) = 0;
      FUN_001c3bf0(param_1,1,0);
    }
    if ((*(int *)(iVar2 + 0x280) == 0) &&
       (*(int *)(iVar2 + 0x284 + *(int *)(iVar2 + 0x290) * 4) == 2)) {
      *(undefined4 *)(iVar2 + 0x28c) = *(undefined4 *)(iVar2 + 0x290);
      *(undefined4 *)(iVar2 + 0x284 + *(int *)(iVar2 + 0x28c) * 4) = 3;
      *(undefined4 *)(iVar2 + 0x280) = 1;
      FlushCache(0);
      uVar1 = *(undefined4 *)(iVar2 + 0x294);
LAB_001c3bd8:
      REG_DMAC_1_VIF1_TADR = uVar1;
      REG_DMAC_1_VIF1_CHCR = 0x185;
    }
    else if (*(int *)(iVar2 + 0x280) == 2) {
      FUN_001cda20(param_1);
      FUN_001cdda8(param_1);
      *(undefined4 *)(iVar2 + 0x280) = 3;
      FlushCache(0);
      uVar1 = *(undefined4 *)(iVar2 + 0x146c);
      goto LAB_001c3bd8;
    }
    SignalSema(*(undefined4 *)(iVar2 + 0x2ac));
  } while( true );
}

