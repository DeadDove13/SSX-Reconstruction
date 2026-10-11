/* Ghidra pseudocode. PS2 address: 00236510. Not validated source. */

undefined8 FUN_00236510(byte *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  if ((param_1[1] != 0xfb) && (param_1[1] != 0x32)) {
    return 0;
  }
  bVar2 = *param_1 & 0xfe;
  if (bVar2 != 0x30) {
    if (bVar2 < 0x31) {
      if (bVar2 != 0x18) {
        if (bVar2 < 0x19) {
          if (bVar2 != 0x10) {
            return 0;
          }
        }
        else {
          if (bVar2 != 0x1e) {
            return 0;
          }
          if (DAT_002c599c == 0) {
            return 0;
          }
        }
      }
    }
    else if (bVar2 != 0x34) {
      if (bVar2 < 0x35) {
        if (bVar2 != 0x32) {
          return 0;
        }
      }
      else if (bVar2 != 0x46) {
        return 0;
      }
    }
  }
  uVar1 = FUN_0023b9ec(param_1 + 2,3);
  return uVar1;
}

