/* Ghidra pseudocode. PS2 address: 0024b0f0. Not validated source. */

void FUN_0024b0f0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  *(undefined4 *)(DAT_002a52a4[0x10] + 0xd4) = 0;
  uVar3 = FUN_0024eec8(0x20);
  DAT_002a53f4 = uVar3 & 0xf;
  DAT_002a53e0 = uVar3 >> 0x14;
  DAT_002a53e4 = uVar3 >> 8 & 0xfff;
  DAT_002a53f0 = uVar3 >> 4 & 0xf;
  if (0xaf0 < DAT_002a53e4) {
    FUN_0024af98(0x2bf208);
  }
  uVar3 = FUN_0024eec8(0x1e);
  DAT_002a53f8 = uVar3 >> 0xc;
  DAT_002a5400 = uVar3 & 1;
  DAT_002a53fc = uVar3 >> 1 & 0x3ff;
  lVar6 = FUN_0024eec8(1);
  DAT_002a5b60 = (undefined4)lVar6;
  if (lVar6 == 0) {
    FUN_0024b680(0x50000000,0x2a5340);
  }
  else {
    FUN_0024e998();
    FUN_0024e968(0x50000000);
    FUN_0024e998();
  }
  lVar6 = FUN_0024eec8(1);
  DAT_002a5b64 = (undefined4)lVar6;
  if (lVar6 == 0) {
    FUN_0024b680(0x58000000,0x2a5380);
  }
  else {
    FUN_0024e998();
    FUN_0024e968(0x58000000);
    FUN_0024e998();
  }
  FUN_0024f308();
  piVar2 = DAT_002a52a4;
  iVar1 = DAT_002a52a4[0x10];
  if (DAT_002a5b70 == 0) {
    DAT_002a546c = 3;
    DAT_002a5474 = 1;
    DAT_002a542c = 5;
    DAT_002a5408 = 1;
    DAT_002a540c = 1;
    DAT_002a5488 = 1;
  }
  DAT_002a53e8 = (int)(DAT_002a53e0 + 0xf) >> 4;
  if ((DAT_002a5b70 == 0) || (DAT_002a5408 != 0)) {
    iVar4 = (int)(DAT_002a53e4 + 0xf) >> 4;
  }
  else {
    iVar4 = ((int)(DAT_002a53e4 + 0x1f) >> 5) << 1;
  }
  DAT_002a53ec = iVar4;
  iVar8 = DAT_002a53e8 * 0x10;
  iVar7 = iVar4 * 0x10;
  DAT_002a53cc = iVar8;
  DAT_002a53d0 = iVar7;
  if ((iVar8 == *DAT_002a52a4) && (iVar7 == DAT_002a52a4[1])) {
    return;
  }
  DAT_002a52a4[1] = iVar7;
  *piVar2 = iVar8;
  DAT_002a53d4 = iVar8 >> 1;
  DAT_002a53d8 = iVar7 >> 1;
  iVar7 = iVar1 + 0x108;
  uVar3 = (uint)(iVar8 * iVar4 * 0x1800) >> 8;
  FUN_0024a8b0(iVar7);
  uVar5 = FUN_0024a8c0(iVar7,uVar3,0x40);
  *(undefined4 *)(iVar1 + 0xfc) = uVar5;
  uVar5 = FUN_0024a8c0(iVar7,uVar3,0x40);
  *(undefined4 *)(iVar1 + 0x100) = uVar5;
  uVar5 = FUN_0024a8c0(iVar7,uVar3,0x40);
  *(undefined4 *)(iVar1 + 0x104) = uVar5;
  FUN_0024b598(0x2a5510,0x2a5578,0x2a55e0,0x2a5648,0x2a56b0,0x2a5718,0x2a5780,0x2a57e8);
  FUN_0024b0d0(0x2a5510,DAT_002a53cc,DAT_002a53d0);
  FUN_0024b0d0(0x2a5578,DAT_002a53cc,DAT_002a53d0);
  FUN_0024b0d0(0x2a55e0,DAT_002a53cc,DAT_002a53d0);
  FUN_0024b0d0(0x2a5648,DAT_002a53cc,DAT_002a53d0 / 2);
  FUN_0024b0d0(0x2a56b0,DAT_002a53cc,DAT_002a53d0 / 2);
  FUN_0024b0d0(0x2a5718,DAT_002a53cc,DAT_002a53d0 / 2);
  FUN_0024b0d0(0x2a5780,DAT_002a53cc,DAT_002a53d0 / 2);
  FUN_0024b0d0(0x2a57e8,DAT_002a53cc,DAT_002a53d0 / 2);
  FUN_0024b0d0(0x2a5850,DAT_002a53cc,DAT_002a53d0 / 2);
  return;
}

