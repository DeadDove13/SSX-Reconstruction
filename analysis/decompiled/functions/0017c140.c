/* Ghidra pseudocode. PS2 address: 0017c140. Not validated source. */

void FUN_0017c140(int param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_0016cf98();
  if (*(int *)(param_1 + 0xb50) == 0) {
    FUN_00173700(DAT_002c28dc,param_1 + 0xb54,param_2,0x2d,0xffffffffffffffc6);
    fVar1 = (float)*(int *)(param_1 + 0xb8c) * DAT_002c28e0 + -17.0;
    FUN_0011ed18(0x295e90,0xc);
    FUN_0011ed48(0x295e90,3);
    FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
    uStack_44 = 0x3f800000;
    uStack_50 = 0x3f800000;
    uStack_4c = 0x3f800000;
    uStack_48 = 0x3f800000;
    FUN_00176e38(0x28ad30,&uStack_50);
    FUN_001a0230(fVar1 - 3.5,0xc2a60000,fVar1,0xc29e0000,fVar1 + 3.5,0xc2a60000,0x28ad30);
  }
  return;
}

