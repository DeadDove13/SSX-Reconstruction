/* Ghidra pseudocode. PS2 address: 0024a2e0. Not validated source. */

undefined8 FUN_0024a2e0(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  uVar4 = param_2 + 3U & 0xfffffffc;
  uVar3 = param_3 - (uVar4 - param_2);
  if (0x117 < uVar3) {
    iVar6 = uVar4 + 0x108;
    puVar5 = (undefined4 *)param_1;
    puVar5[0x10] = uVar4;
    FUN_0024a888(iVar6,uVar4 + 0x118,uVar3 - 0x118);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined8 *)(puVar5 + 4) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0xe) = 0;
    *(undefined4 *)(uVar4 + 0xb4) = 0;
    *(undefined4 *)(uVar4 + 0xb8) = 0;
    *(undefined4 *)(uVar4 + 0xbc) = 0;
    *(undefined4 *)(uVar4 + 0xc0) = 0;
    *(undefined4 *)(uVar4 + 0xc4) = 0;
    *(undefined4 *)(uVar4 + 200) = 0;
    *(undefined4 *)(uVar4 + 0xcc) = 0;
    *(undefined4 *)(uVar4 + 0xd0) = 0;
    *(undefined4 *)(uVar4 + 0xd4) = 0;
    *(undefined4 *)(uVar4 + 0xd8) = 0;
    *(undefined4 *)(uVar4 + 0xdc) = 0;
    *(undefined4 *)(uVar4 + 0xe0) = 0;
    *(undefined4 *)(uVar4 + 0xe4) = 0;
    *(undefined4 *)(uVar4 + 0xe8) = 0;
    *(undefined4 *)(uVar4 + 0xf8) = 0;
    *(undefined4 *)(uVar4 + 0xc) = 0;
    *(undefined4 *)(uVar4 + 0x14) = 0;
    *(undefined4 *)(uVar4 + 0x2c) = 0;
    *(undefined4 *)(uVar4 + 0x34) = 0;
    *(undefined4 *)(uVar4 + 0x3c) = 0;
    *(undefined8 *)(uVar4 + 0xf0) = 0xffffffffffffffff;
    *(undefined1 **)(uVar4 + 0x1c) = &LAB_0024b988;
    *(undefined1 **)(uVar4 + 0x24) = &LAB_0024b998;
    uVar1 = FUN_0024a8c0(iVar6,0x600,8);
    *(undefined4 *)(uVar4 + 0x48) = 0;
    *(undefined4 *)(uVar4 + 0xfc) = 0;
    *(undefined4 *)(uVar4 + 0x100) = 0;
    *(undefined4 *)(uVar4 + 0x104) = 0;
    *(undefined4 *)(uVar4 + 0x70) = 0;
    *(undefined8 *)(uVar4 + 0x78) = 0;
    *(undefined8 *)(uVar4 + 0x88) = 0;
    *(undefined4 *)(uVar4 + 0x90) = 0;
    *(undefined4 *)(uVar4 + 0xac) = 0;
    *(undefined4 *)(uVar4 + 0x9c) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0x44) = uVar1;
    *(undefined4 *)(uVar4 + 0xb0) = 1;
    DAT_002a52a4 = puVar5;
    *(undefined4 *)(uVar4 + 0x80) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0x94) = 0xffffffff;
    *(undefined4 *)(uVar4 + 0x98) = 0xffffffff;
    FUN_0024ae90();
    FUN_0024a698(param_1);
    FUN_0024a6d8(param_1);
    PTR_DAT_002a52c0 = &DAT_002a5510;
    PTR_DAT_002a52d4 = &DAT_002a5718;
    PTR_DAT_002a52d8 = &DAT_002a5780;
    PTR_DAT_002a52dc = &DAT_002a57e8;
    PTR_DAT_002a52e0 = &DAT_002a5850;
    PTR_DAT_002a52c4 = &DAT_002a5578;
    PTR_DAT_002a52c8 = &DAT_002a55e0;
    PTR_DAT_002a52cc = &DAT_002a5648;
    PTR_DAT_002a52d0 = &DAT_002a56b0;
    uVar2 = FUN_0024a8a0(iVar6);
    return uVar2;
  }
  FUN_0024af98(0x2bf130);
  return 0;
}

