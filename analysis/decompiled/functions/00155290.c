/* Ghidra pseudocode. PS2 address: 00155290. Not validated source. */

undefined4 FUN_00155290(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00156b78();
  iVar1 = *(int *)(param_1 + iVar1 * 0x50 + 0x1524);
  iVar1 = *(int *)(iVar1 + 4) + *(int *)(iVar1 + 8);
  uVar2 = 0;
  if (iVar1 < 0xb4) {
    if (iVar1 < 0x78) {
      if (iVar1 < 0x5a) {
        if (iVar1 < 0x3c) {
          if (iVar1 < 0x2d) {
            if (iVar1 < 0x23) {
              if (iVar1 < 0x14) {
                if (iVar1 < 10) {
                  uVar2 = 8;
                  if ((iVar1 < 5) && (uVar2 = 0, -1 < iVar1)) {
                    uVar2 = 9;
                  }
                }
                else {
                  uVar2 = 7;
                }
              }
              else {
                uVar2 = 6;
              }
            }
            else {
              uVar2 = 5;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

