/* Ghidra pseudocode. PS2 address: 00128e08. Not validated source. */

void FUN_00128e08(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 auStack_460 [256];
  
  iVar2 = *(int *)(param_1 + 0x28);
  uStack_480 = *(undefined4 *)(iVar2 + 0xd0);
  uStack_47c = *(undefined4 *)(iVar2 + 0xd4);
  uStack_478 = *(undefined4 *)(iVar2 + 0xd8);
  uStack_474 = 0x3f800000;
  uStack_470 = *(undefined4 *)(iVar2 + 0xdc);
  uStack_46c = *(undefined4 *)(iVar2 + 0xe0);
  uStack_468 = *(undefined4 *)(iVar2 + 0xe4);
  uStack_464 = 0x3f800000;
  lVar3 = FUN_001be110(0x295e90,&uStack_480,&uStack_470);
  iVar2 = 0x7f;
  if (lVar3 != 1) {
    iVar1 = *(int *)(param_1 + 0x60);
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
    uStack_480 = 0;
    iVar5 = 0;
    uStack_47c = 0;
    iVar2 = 0;
    if (0 < iVar1) {
      puVar4 = auStack_460;
      do {
        if (iVar5 < param_3) {
          if (*param_2 != iVar2) {
            *puVar4 = 0;
            goto LAB_00128f28;
          }
          param_2 = param_2 + 1;
          iVar5 = iVar5 + 1;
          *puVar4 = *(undefined4 *)(param_1 + 0x3c);
          puVar4[1] = *(undefined4 *)(param_1 + 0x40);
        }
        else {
          *puVar4 = 0;
LAB_00128f28:
          puVar4[1] = 0;
        }
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 2;
      } while (iVar2 < iVar1);
    }
    FUN_001cb238(0x2913b0,5,0);
    iVar2 = *(int *)(param_1 + 0x28);
    FUN_001be6d8(0x295e90,*(undefined4 *)(*(int *)(iVar2 + 0xcc) * 8 + DAT_00299ce0),DAT_00299ce8,
                 iVar2,iVar2 + 0x40,0,auStack_460);
    FUN_001cb238(0x2913b0,0,0);
  }
  return;
}

