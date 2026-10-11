/* Ghidra pseudocode. PS2 address: 001493f0. Not validated source. */

undefined8
FUN_001493f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
            ,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = (int)param_2;
  *(undefined4 *)(iVar4 + 0x210) = 1;
  uVar1 = param_7[1];
  *(int *)(iVar4 + 0x1dc) = (int)param_4;
  *(undefined4 *)(iVar4 + 0x28) = 1;
  uVar5 = *param_7;
  *(undefined4 *)(iVar4 + 0x1e0) = uVar1;
  FUN_001478c8(param_2,0,uVar5);
  *(undefined4 *)(iVar4 + 0x1e4) = 1;
  *(undefined4 *)(iVar4 + 0x21c) = 0;
  if ((param_7[2] & 1) != 0) {
    *(undefined4 *)(iVar4 + 0x200) = 1;
  }
  if ((param_7[2] & 8) != 0) {
    *(undefined4 *)(iVar4 + 0x20) = 1;
  }
  uVar3 = 0;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x220) + 0x6cf4);
  uVar5 = *(undefined4 *)(iVar2 + 0x18);
  uVar1 = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(iVar4 + 0x20c) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(iVar4 + 0x14) = uVar5;
  *(undefined4 *)(iVar4 + 0x18) = uVar1;
  switch(param_6) {
  case 1:
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0x13);
    break;
  case 2:
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0x14);
    break;
  case 3:
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0x15);
    break;
  case 4:
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0x16);
    break;
  case 6:
    uVar3 = (*(uint *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0xc) >> 7 & 0xff) - 1;
    break;
  case 7:
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0x11);
  }
  if ((float)(int)(uVar3 + param_5) < 0.0) {
    *(undefined4 *)(iVar4 + 0x1e8) = 0;
  }
  else {
    *(float *)(iVar4 + 0x1e8) = (float)(int)(uVar3 + param_5);
  }
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  switch((uint)param_7[2] >> 4 & 7) {
  case 1:
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0x13);
    break;
  case 2:
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0x14);
    break;
  case 3:
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0x15);
    break;
  case 4:
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0x16);
    break;
  case 5:
    *(undefined4 *)(iVar4 + 0x208) = 0;
    return param_4;
  case 6:
    *(uint *)(iVar4 + 0x208) =
         (*(uint *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0xc) >> 7 & 0xff) - 1;
    return param_4;
  case 7:
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x224) + 8) + 0x11);
    break;
  default:
    goto switchD_00149584_default;
  }
  *(uint *)(iVar4 + 0x208) = uVar3;
switchD_00149584_default:
  return param_4;
}

