/* Ghidra pseudocode. PS2 address: 00214988. Not validated source. */

void FUN_00214988(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < 0xfc) {
    iVar1 = (int)param_1 + param_3 * 4;
    iVar2 = *(int *)(iVar1 + 0x1134);
    iVar1 = *(int *)(iVar1 + 0xd44);
  }
  else {
    iVar1 = 6;
    if (param_3 < 0x1fc) {
      iVar2 = 0xfc;
    }
    else {
      iVar1 = 7;
      if (param_3 < 0x3fc) {
        iVar2 = 0x1fc;
      }
      else {
        iVar1 = 8;
        if (param_3 < 0x7fc) {
          iVar2 = 0x3fc;
        }
        else {
          iVar1 = 9;
          if (param_3 < 0xffc) {
            iVar2 = 0x7fc;
          }
          else {
            iVar1 = 10;
            if (param_3 < 0x1ffc) {
              iVar2 = 0xffc;
            }
            else {
              iVar1 = 0xb;
              if (param_3 < 0x3ffc) {
                iVar2 = 0x1ffc;
              }
              else {
                iVar1 = 0xc;
                if (param_3 < 0x7ffc) {
                  iVar2 = 0x3ffc;
                }
                else if (param_3 < 0xfffc) {
                  iVar1 = 0xd;
                  iVar2 = 0x7ffc;
                }
                else if (param_3 < 0x1fffc) {
                  iVar1 = 0xe;
                  iVar2 = 0xfffc;
                }
                else if (param_3 < 0x3fffc) {
                  iVar1 = 0xf;
                  iVar2 = 0x1fffc;
                }
                else if (param_3 < 0x80000) {
                  iVar1 = 0x10;
                  iVar2 = 0x3fffc;
                }
                else {
                  iVar1 = 0x12;
                  if (param_3 < 0x100000) {
                    iVar1 = 0x11;
                    iVar2 = 0x80000;
                  }
                  else {
                    iVar2 = 0x100000;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00214530(param_1,param_2,1,iVar1 + 1);
  FUN_00214530(param_1,param_2,param_3 - iVar2,iVar1 + 2);
  return;
}

