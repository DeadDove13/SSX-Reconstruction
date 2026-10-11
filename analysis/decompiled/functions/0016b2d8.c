/* Ghidra pseudocode. PS2 address: 0016b2d8. Not validated source. */

void FUN_0016b2d8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_b0 [128];
  
  lVar3 = 0;
  FUN_0011ed48(0x295e90,0);
  iVar1 = *(int *)((int)param_1 + 0x16c);
  lVar2 = FUN_00211da0(iVar1,*(undefined4 *)(iVar1 + 0xc));
  if (lVar2 == 2) {
    lVar3 = FUN_00234e80(DAT_002852fc,0x7a);
  }
  if (lVar3 != 0) {
    FUN_0016b110(0xc2de0000,0xc2a00000,0x435e0000,0x41a00000,0x3f800000,0x3f800000,param_1,lVar3,0,0
                 ,0);
  }
  FUN_0016c040(*(undefined4 *)((int)param_1 + 0x16c),auStack_b0);
  FUN_0016b110(0xc3080000,0xc2700000,0x43880000,0x41a00000,DAT_002c27b4,0x3f800000,param_1,
               auStack_b0,0,0,0);
  return;
}

