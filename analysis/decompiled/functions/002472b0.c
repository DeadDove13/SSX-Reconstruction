/* Ghidra pseudocode. PS2 address: 002472b0. Not validated source. */

uint FUN_002472b0(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00246dc0();
  if (*(char *)(iVar1 + 0x72) != '\x01') {
    return 0;
  }
  if (*(char *)(iVar1 + 0x71) == '\x02') {
    return 0;
  }
  if (param_3 == 2) {
    if (*(char *)(iVar1 + 100) == '\x01') {
      return 0;
    }
    param_4 = (uint)*(byte *)(iVar1 + 0x69);
LAB_00247394:
    uVar2 = (uint)*(ushort *)(iVar1 + param_4 * 2 + 0x50);
  }
  else {
    if (param_3 < 3) {
      if (param_3 != 1) {
        return 0;
      }
      if (*(byte *)(iVar1 + 0x65) != 0xf3) {
        return (uint)(*(byte *)(iVar1 + 0x65) >> 4);
      }
    }
    else {
      if (param_3 == 3) {
        if (*(char *)(iVar1 + 100) == '\x01') {
          return 0;
        }
        return (uint)*(byte *)(iVar1 + 0x69);
      }
      if (param_3 != 4) {
        return 0;
      }
      if (*(char *)(iVar1 + 100) != '\x01') {
        if (param_4 == 0xffffffff) {
          return (uint)*(byte *)(iVar1 + 0x68);
        }
        if ((int)param_4 < (int)(uint)*(byte *)(iVar1 + 0x68)) goto LAB_00247394;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

