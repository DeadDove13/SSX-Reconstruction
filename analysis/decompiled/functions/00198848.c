/* Ghidra pseudocode. PS2 address: 00198848. Not validated source. */

void FUN_00198848(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  uStack_50 = 0x11111115;
  *param_2 = iVar1 + 0x18;
  if (iVar2 == 0) {
    uStack_40 = 0xffffffff;
    uStack_4c = 0xffffffff;
    iStack_48 = 0;
    iStack_44 = 0;
    iStack_3c = 0;
  }
  else {
    uStack_4c = *(undefined4 *)(iVar2 + 0x38);
    iStack_48 = param_1[1];
    iStack_44 = param_1[2];
    uStack_40 = FUN_00195520(*(undefined4 *)(DAT_002859e4 + 0x38),iVar2);
    iStack_3c = param_1[4];
  }
  FUN_0023bac0(iVar1,&uStack_50,0x18);
  return;
}

