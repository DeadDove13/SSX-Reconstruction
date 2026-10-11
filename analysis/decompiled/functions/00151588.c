/* Ghidra pseudocode. PS2 address: 00151588. Not validated source. */

void FUN_00151588(int param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  uVar1 = FUN_0014bfe0();
  *(undefined4 *)((int)uVar1 + 0x1dc) = 4;
  (**(code **)(*(int *)(param_1 + 0x3d4) + 0xc))
            (param_1 + *(short *)(*(int *)(param_1 + 0x3d4) + 8),uVar1);
  FUN_0023bac0(auStack_40,0x2aec68,0xc);
  auStack_40[0] = *(undefined4 *)(&DAT_0027a534 + *(int *)(param_1 + 0x3d8) * 0x24);
  FUN_00149e40(param_1 + 0x3dc,uVar1,param_1 + 0x20,4,0,0,auStack_40);
  return;
}

