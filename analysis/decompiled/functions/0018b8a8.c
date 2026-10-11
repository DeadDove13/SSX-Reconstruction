/* Ghidra pseudocode. PS2 address: 0018b8a8. Not validated source. */

undefined4 FUN_0018b8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_8f0 [4];
  code *pcStack_8ec;
  undefined *puStack_8e8;
  undefined4 uStack_8e4;
  undefined1 *puStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d0;
  undefined1 auStack_8c0 [4];
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined1 auStack_8a0 [2048];
  
  FUN_0023bbd0(0x285b00,0,0x48);
  bVar1 = false;
  FUN_0023bbd0(param_3,0,(int)param_2 * 0x4c);
  FUN_0023bbd0(0x286b80,0xffffffffaeaeaeae,0x4000);
  FUN_0023bbd0(0x286380,0xffffffffaeaeaeae,0x800);
  lVar3 = FUN_00249218(0);
  if (lVar3 != 0) {
    FUN_00249410(0);
    lVar3 = FUN_00249690();
    if (lVar3 == 0x12) {
      bVar1 = true;
    }
    else {
      lVar3 = FUN_00249690();
      if (lVar3 == 0x14) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      FUN_00249410(0);
      FUN_002489e8(auStack_8a0);
      DAT_00285b25 = 1;
      DAT_00285b34 = 0x10;
      DAT_00285b24 = 0;
      DAT_00285b26 = 0;
      iVar2 = FUN_0018b010();
      DAT_0028ab80 = 0x2f;
      DAT_00285b40 = (undefined4)param_3;
      DAT_0028ab81 = 0;
      FUN_0018b110(*(undefined4 *)(iVar2 + 0x9e),*(uint *)(iVar2 + 0xa6) >> 0xb,param_2);
      DAT_00285b20 = (code *)&LAB_0018b348;
      FUN_0025a770(DAT_00285b40,DAT_00285b04,0x4c,0x18b320);
      if (DAT_00285b20 == FUN_0018b300) {
        FUN_0025a770(DAT_00285b40,DAT_00285b04,0x4c);
      }
      uStack_8b8 = 0;
      uStack_8bc = 0x20;
      DAT_00285b0c = CreateSema(auStack_8c0);
      pcStack_8ec = FUN_0018b488;
      puStack_8e8 = &DAT_00286b80;
      uStack_8e4 = 0x4000;
      uStack_8dc = 0xc;
      puStack_8e0 = &_mips_gp0_value;
      uStack_8d0 = 0;
      lVar3 = CreateThread(auStack_8f0);
      if (0 < lVar3) {
        _StartThread(lVar3,0);
        FUN_00247b40(0xb,0x286380,0x800);
        FUN_002479d0(0x18b358);
        DAT_00285b44 = &DAT_00285b80;
        DAT_00285b18 = 0xffffffff;
        DAT_00285b1c = param_4;
        FUN_0023e6e0(0x18b850,0,0);
        return DAT_00285b04;
      }
    }
    FUN_00248e00();
  }
  return 0;
}

