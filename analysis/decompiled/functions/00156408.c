/* Ghidra pseudocode. PS2 address: 00156408. Not validated source. */

void FUN_00156408(undefined8 param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar4 = 0;
  iVar5 = (int)param_1;
  pcVar1 = (char *)(iVar5 + 0x1508);
  do {
    if (-1 < *pcVar1) {
      *(undefined4 *)(iVar5 + iVar4 + 0x150c) = *(undefined4 *)(iVar5 + *pcVar1 * 4 + 0x744);
      FUN_00158808(param_1,iVar5 + iVar4 + 0x1508,iVar5 + 0x127c);
      break;
    }
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 0x50;
    pcVar1 = pcVar1 + 0x50;
  } while (iVar2 < 4);
  if (DAT_00285308 == 1) {
LAB_001564c0:
    uVar3 = 0x27c3bc;
  }
  else {
    if (DAT_00285308 < 2) {
      if (DAT_00285308 == 0) {
        FUN_00158c78(param_1,0x27c434,0,iVar5 + 0x12e4);
        goto LAB_00156510;
      }
      goto LAB_001564c0;
    }
    if (DAT_00285308 == 2) {
      uVar3 = 0x27c3f8;
    }
    else {
      if (DAT_00285308 != 3) goto LAB_001564c0;
      uVar3 = 0x27c4e8;
    }
  }
  FUN_00158c78(param_1,uVar3,0,iVar5 + 0x12e4);
LAB_00156510:
  *(undefined4 *)(iVar5 + 0x1278) = 1;
  return;
}

