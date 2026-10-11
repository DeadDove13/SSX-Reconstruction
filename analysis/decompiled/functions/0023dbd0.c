/* Ghidra pseudocode. PS2 address: 0023dbd0. Not validated source. */

bool FUN_0023dbd0(long param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  bool bVar2;
  
  if ((param_1 == 0) || (piVar1 = (int *)*(undefined4 *)param_1, *piVar1 != 0x4d525453)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    param_3 = piVar1;
    param_4 = (undefined4 *)param_1;
  }
  if (!bVar2) {
    bVar2 = false;
    if (param_3[10] == 0) {
      bVar2 = param_4[2] == 0;
    }
    return bVar2;
  }
  return false;
}

