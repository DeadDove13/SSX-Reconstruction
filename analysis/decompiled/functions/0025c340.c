/* Ghidra pseudocode. PS2 address: 0025c340. Not validated source. */

long FUN_0025c340(int param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *apuStack_490 [2];
  undefined4 uStack_488;
  ushort uStack_484;
  undefined2 uStack_482;
  undefined1 *puStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_46c;
  undefined4 uStack_43c;
  undefined1 auStack_430 [1024];
  
  apuStack_490[0] = auStack_430;
  uStack_43c = *(undefined4 *)(param_1 + 0x54);
  uStack_482 = *(undefined2 *)(param_1 + 0xe);
  uStack_484 = *(ushort *)(param_1 + 0xc) & 0xfffd;
  uStack_474 = *(undefined4 *)(param_1 + 0x1c);
  uStack_46c = *(undefined4 *)(param_1 + 0x24);
  uStack_47c = 0x400;
  uStack_488 = 0x400;
  uStack_478 = 0;
  puStack_480 = apuStack_490[0];
  lVar1 = FUN_0025c3f8(apuStack_490);
  if (-1 < lVar1) {
    lVar2 = FUN_0025fdc8(apuStack_490);
    if (lVar2 != 0) {
      lVar1 = -1;
    }
  }
  if ((uStack_484 & 0x40) != 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x40;
  }
  return lVar1;
}

