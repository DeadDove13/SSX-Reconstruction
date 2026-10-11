/* Ghidra pseudocode. PS2 address: 001512f0. Not validated source. */

void FUN_001512f0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 auStack_40 [4];
  
  uVar2 = FUN_0014bfe0();
  iVar1 = *(int *)(param_1 + 0x3d4);
  *(undefined4 *)((int)uVar2 + 0x1dc) = 0;
  (**(code **)(iVar1 + 0xc))(param_1 + *(short *)(iVar1 + 8),uVar2);
  FUN_0023bac0(auStack_40,0x2aec68,0xc);
  auStack_40[0] = *(undefined4 *)(&DAT_0027a548 + *(int *)(param_1 + 0x3d8) * 0x24);
  FUN_00149e40(param_1 + 0x3dc,uVar2,param_1 + 0x20,0,0,0,auStack_40);
  return;
}

