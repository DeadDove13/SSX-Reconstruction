/* Ghidra pseudocode. PS2 address: 00162558. Not validated source. */

void FUN_00162558(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if (0 < *(int *)(*(int *)(param_1 + 0x24) + 300)) {
    *(undefined4 *)(param_1 + 8) = 0;
    uStack_98 = DAT_002c2644;
    uVar1 = DAT_002c2640;
    uStack_b0 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uStack_94 = 0x42c80000;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_5c = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_ac = uStack_b0;
    uStack_a8 = uStack_b0;
    FUN_00160530(&uStack_50,*(int *)(param_1 + 0x24),0x2c4728,0x2c4730);
    uVar2 = FUN_00160570(&uStack_50);
    FUN_00160d98(uVar2,&uStack_b0,param_2,1);
    *(undefined4 *)(param_1 + 0x10) = uStack_b0;
    *(undefined4 *)(param_1 + 0x14) = uStack_ac;
    *(undefined4 *)(param_1 + 0x18) = uStack_a8;
    FUN_0015f350(&uStack_50,2);
  }
  return;
}

