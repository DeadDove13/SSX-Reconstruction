/* Ghidra pseudocode. PS2 address: 001ae770. Not validated source. */

void FUN_001ae770(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = FUN_001a3260(*(undefined4 *)(DAT_002859e4 + 0x30));
  if ((lVar2 == 0) &&
     (iVar1 = FUN_001a36e8(*(undefined4 *)(DAT_002859e4 + 0x30)), **(int **)(iVar1 + 0x174) == 0)) {
    iVar1 = *(int *)(DAT_002859e4 + 0x290);
    iVar4 = iVar1 * 4;
    iVar3 = (int)param_1;
    if (*(int *)(iVar3 + iVar4 + 0x2c) < 1) {
      FUN_0011ed28(0,0x295e90,0,2);
      FUN_0011ed48(0x295e90,3);
      FUN_0011ed18(0x295e90,0xd);
      if (*(int *)(iVar3 + iVar4 + 0x3c) == 0) {
        DAT_0028ad3c = 0x3f800000;
        DAT_0028ad30 = 0x3f800000;
        DAT_0028ad34 = 0x3f800000;
        DAT_0028ad38 = 0x3f800000;
        if (*(int *)(*(int *)(*(int *)(DAT_002859e4 + 0x290) * 0x80 + DAT_002859e4 + 0xa4) + 0x348)
            < 1) {
          FUN_001a90b8(*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20),
                       *(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28),param_1,0xe,0x20)
          ;
        }
        else {
          FUN_001a90b8(*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20),
                       *(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28),param_1,0xf,0x20)
          ;
        }
      }
      else {
        DAT_0028ad3c = 0x3f800000;
        DAT_0028ad30 = 0x3f800000;
        DAT_0028ad34 = 0x3f800000;
        DAT_0028ad38 = 0x3f800000;
        FUN_001a9220(*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20),param_1,
                     iVar1 * 0x60 + 0x28adf0,0x20);
      }
    }
  }
  return;
}

