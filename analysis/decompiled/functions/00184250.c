/* Ghidra pseudocode. PS2 address: 00184250. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001843cc) */
/* WARNING: Removing unreachable block (ram,0x00184384) */
/* WARNING: Removing unreachable block (ram,0x001843bc) */

undefined8 FUN_00184250(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  
  FUN_001a03b0();
  fVar5 = 0.0;
  iVar4 = (int)param_1;
  FUN_00210ce0(iVar4 + 0x80);
  FUN_0019aa08(iVar4 + 0xd00);
  FUN_00168750(0x295e90,0);
  FUN_001a0460(param_1,0x2b3510,0);
  *(undefined4 *)(iVar4 + 0x1c) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x18) = 0x3fc00000;
  uVar2 = FUN_002369a0(0x2b3528,0x10);
  uVar3 = FUN_0023bff0(uVar2,0x2c4da8);
  uVar1 = FUN_001be538(0x295e90,uVar3,0x2c4da8,0);
  *(undefined4 *)(iVar4 + 0x38) = uVar1;
  FUN_0023a998(uVar2);
  FUN_00168740(0x295e90);
  FUN_00258848(0x43000000);
  DAT_002915dc = 0x80;
  if (fVar5 <= 1.0) {
    fVar5 = 1.0;
  }
  DAT_002915e0 = FUN_00258848(fVar5 * 128.0);
  DAT_002915e4 = FUN_00258848(0x43000000);
  FUN_00258848(0x43000000);
  DAT_002915e8 = 0x80;
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  *(undefined4 *)(iVar4 + 0x40) = 0;
  *(undefined4 *)(iVar4 + 0x50) = 0;
  *(undefined4 *)(iVar4 + 0x54) = 0;
  *(undefined4 *)(iVar4 + 0x44) = 0;
  *(undefined4 *)(iVar4 + 0x48) = 0;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  *(undefined4 *)(iVar4 + 0x34) = 0;
  return param_1;
}

