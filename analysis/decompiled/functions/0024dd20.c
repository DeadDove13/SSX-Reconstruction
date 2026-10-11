/* Ghidra pseudocode. PS2 address: 0024dd20. Not validated source. */

undefined4 FUN_0024dd20(undefined8 param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  DAT_002a53c8 = 0;
  FUN_0024f040();
  uVar4 = FUN_0024ec90(0x20);
  if ((uint)uVar4 - 0x101 < 0xaf) {
    FUN_0024edc0(0x20);
    iVar2 = FUN_0024f0a8();
    iVar3 = FUN_0024daf0();
    *param_3 = iVar3;
    if (DAT_002a53c8 == 0) {
      uVar1 = 0;
      *param_2 = (iVar2 * 0x80 + ((uint)uVar4 & 0xff) + -1) * DAT_002a53e8 + iVar3 + -1;
      *param_3 = 1;
      DAT_002a54fc = 1;
      param_4[2] = 0;
      param_4[5] = 0;
      param_4[4] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      param_4[7] = 0;
      param_4[6] = 0;
      param_4[3] = 0;
    }
    else {
      FUN_0024af98(0x2bf460);
      uVar1 = 1;
    }
  }
  else {
    FUN_0024af68(0x2bf438,uVar4);
    uVar1 = 2;
  }
  return uVar1;
}

