/* Ghidra pseudocode. PS2 address: 00154610. Not validated source. */

uint FUN_00154610(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  uStack_30 = DAT_002aedb8;
  uStack_28 = DAT_002aedc0;
  uStack_20 = DAT_002aedc8;
  uStack_18 = DAT_002aedd0;
  uStack_10 = DAT_002aedd8;
  if (DAT_002c4664 == 0) {
    iVar1 = *(int *)(param_1 + 0x14f0);
    if (iVar1 - 4U < 3) {
      if (param_2 == 10) {
        uVar2 = 1;
      }
      else if (*(char *)(param_1 + 0x1508) < '\0') {
        uVar2 = 0;
      }
      else if (iVar1 == 4) {
        uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x1524) + param_2 * 4 + 0x32);
      }
      else {
        uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x1524) + param_2 * 4 + 0x33);
      }
    }
    else {
      uVar2 = (uint)((*(uint *)(param_1 + 4) & 1 << (param_2 & 0x1f) &
                     *(uint *)((int)&uStack_30 + iVar1 * 4)) != 0);
    }
  }
  else {
    uVar2 = *(int *)((int)&uStack_30 + *(int *)(param_1 + 0x14f0) * 4) >> (param_2 & 0x1f) & 1;
  }
  return uVar2;
}

