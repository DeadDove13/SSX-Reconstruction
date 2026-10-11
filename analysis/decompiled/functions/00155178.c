/* Ghidra pseudocode. PS2 address: 00155178. Not validated source. */

undefined8 FUN_00155178(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00156b78();
  iVar1 = *(int *)(param_1 + iVar1 * 0x50 + 0x1524);
  iVar1 = *(int *)(iVar1 + 4) + *(int *)(iVar1 + 8);
  if (iVar1 < 0xb4) {
    if (iVar1 < 0x78) {
      if (iVar1 < 0x5a) {
        if (iVar1 < 0x3c) {
          if (iVar1 < 0x2d) {
            if (iVar1 < 0x23) {
              if (iVar1 < 0x14) {
                if (iVar1 < 10) {
                  if (iVar1 < 5) {
                    uVar2 = 0x1c0;
                    if (iVar1 < 0) {
                      return 0;
                    }
                  }
                  else {
                    uVar2 = 0x1ad;
                  }
                }
                else {
                  uVar2 = 0x1ac;
                }
              }
              else {
                uVar2 = 0x1ab;
              }
            }
            else {
              uVar2 = 0x1aa;
            }
          }
          else {
            uVar2 = 0x1a9;
          }
        }
        else {
          uVar2 = 0x1a8;
        }
      }
      else {
        uVar2 = 0x1a6;
      }
    }
    else {
      uVar2 = 0x1a5;
    }
  }
  else {
    uVar2 = 0x1a4;
  }
  uVar2 = FUN_00234e80(DAT_002852fc,uVar2);
  return uVar2;
}

