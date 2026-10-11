/* Ghidra pseudocode. PS2 address: 0023d868. Not validated source. */

void FUN_0023d868(long param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    param_4 = (int *)*(undefined4 *)param_1;
  }
  if (!bVar2) {
    iVar1 = param_4[0xd];
    param_4[0xd] = param_2;
    if (param_4[0xf] < iVar1 != param_4[0xf] < param_2) {
      FUN_0023d8d0();
    }
  }
  return;
}

