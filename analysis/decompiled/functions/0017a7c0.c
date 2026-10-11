/* Ghidra pseudocode. PS2 address: 0017a7c0. Not validated source. */

void FUN_0017a7c0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  iVar4 = (int)param_1;
  uVar1 = *(undefined4 *)(*(int *)(iVar4 + 0x7c) + 0x46c);
  FUN_00154f60(0x27a598,uVar1,auStack_a0);
  iVar2 = *(int *)(iVar4 + 0x68);
  *(int *)(iVar2 + 0x30) = iVar4 + 0x44;
  iVar3 = *(int *)(iVar2 + 0x24);
  *(float *)(iVar4 + 0x54) = (float)iStack_94;
  *(float *)(iVar4 + 0x44) = (float)(iStack_9c + iStack_98);
  *(float *)(iVar2 + 0x40) = (float)iStack_90;
  (**(code **)(iVar3 + 0x2c))(iVar2 + *(short *)(iVar3 + 0x28));
  iVar2 = *(int *)(iVar4 + 0x6c);
  *(float *)(iVar4 + 0x58) = (float)iStack_80;
  *(int *)(iVar2 + 0x30) = iVar4 + 0x48;
  iVar3 = *(int *)(iVar2 + 0x24);
  *(float *)(iVar4 + 0x48) = (float)(iStack_88 + iStack_84);
  *(float *)(iVar2 + 0x40) = (float)iStack_7c;
  (**(code **)(iVar3 + 0x2c))(iVar2 + *(short *)(iVar3 + 0x28));
  iVar2 = *(int *)(iVar4 + 0x70);
  *(float *)(iVar4 + 0x5c) = (float)iStack_6c;
  *(int *)(iVar2 + 0x30) = iVar4 + 0x4c;
  iVar3 = *(int *)(iVar2 + 0x24);
  *(float *)(iVar4 + 0x4c) = (float)(iStack_74 + iStack_70);
  *(float *)(iVar2 + 0x40) = (float)iStack_68;
  (**(code **)(iVar3 + 0x2c))(iVar2 + *(short *)(iVar3 + 0x28));
  iVar2 = *(int *)(iVar4 + 0x74);
  *(float *)(iVar4 + 0x60) = (float)iStack_58;
  *(int *)(iVar2 + 0x30) = iVar4 + 0x50;
  iVar3 = *(int *)(iVar2 + 0x24);
  *(float *)(iVar4 + 0x50) = (float)(iStack_60 + iStack_5c);
  *(float *)(iVar2 + 0x40) = (float)iStack_54;
  (**(code **)(iVar3 + 0x2c))(iVar2 + *(short *)(iVar3 + 0x28));
  FUN_001748c8(param_1,param_2);
  if (*(int *)(iVar4 + 0x80) == 0) {
    iVar3 = FUN_00154c98(0x27a598,uVar1);
    iVar2 = *(int *)(*(int *)(iVar4 + 0x78) + 0x24);
    *(float *)(iVar4 + 100) = (float)iVar3;
    (**(code **)(iVar2 + 0x1c))
              (DAT_002c28bc,*(int *)(iVar4 + 0x78) + (int)*(short *)(iVar2 + 0x18),param_2,
               *(undefined4 *)(iVar4 + 0x84),*(undefined4 *)(iVar4 + 0x88));
  }
  return;
}

