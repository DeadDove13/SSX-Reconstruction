/* Ghidra pseudocode. PS2 address: 0024e028. Not validated source. */

bool FUN_0024e028(undefined4 *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  
  DAT_002a54fc = 1;
  bVar1 = DAT_002a543c == 2;
  *(undefined4 *)(&DAT_002a59f4 + DAT_002a5b38 * 0x140) = 1;
  if (bVar1) {
    *param_1 = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
  }
  if (DAT_002a546c == 3) {
    *param_2 = 2;
  }
  else {
    *param_2 = 1;
    bVar1 = DAT_002a546c == 2;
    *param_3 = (uint)bVar1;
    param_3[1] = (uint)bVar1;
  }
  bVar1 = DAT_002a543c == 1;
  if (bVar1) {
    FUN_0024af98(0x2bf4a0);
    uVar2 = *param_4;
  }
  else {
    uVar2 = *param_4;
  }
  *param_4 = uVar2 & 0xfffffffe;
  return !bVar1;
}

