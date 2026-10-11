/* Ghidra pseudocode. PS2 address: 0015d7b8. Not validated source. */

void FUN_0015d7b8(undefined4 param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  
  *(undefined4 *)(param_2 + 0x1d4) = 1;
  FUN_001624b8(auStack_90,param_3,0x2c4728,0x2c4730);
  uStack_60 = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_2 + 0x1e0) = uStack_88;
  *(undefined4 *)(param_2 + 0x1dc) = uStack_8c;
  *(undefined4 *)(param_2 + 0x1e4) = uStack_84;
  *(undefined4 *)(param_2 + 0x1e8) = uStack_80;
  *(undefined4 *)(param_2 + 0x1ec) = uStack_7c;
  *(undefined4 *)(param_2 + 0x1d8) = uStack_60;
  *(undefined4 *)(param_2 + 0x1f0) = uStack_78;
  *(undefined4 *)(param_2 + 0x1f8) = uStack_70;
  *(undefined4 *)(param_2 + 0x1fc) = uStack_6c;
  *(undefined4 *)(param_2 + 500) = uStack_74;
  FUN_00162558(param_2 + 0x1d8,param_2 + 0xa4c);
  *(undefined4 *)(param_2 + 0x1f8) = param_4;
  *(undefined4 *)(param_2 + 500) = param_1;
  FUN_0015f340(auStack_90,2);
  return;
}

