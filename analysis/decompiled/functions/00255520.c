/* Ghidra pseudocode. PS2 address: 00255520. Not validated source. */

ulong FUN_00255520(ulong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = (long)param_1 >> 0x20;
  iVar2 = (int)((uint)(param_1 >> 0x20) & 0x7ff00000) >> 0x14;
  if (iVar2 == 0) {
    if ((int)param_1 == 0 && (uVar5 & 0x7fffffff) == 0) {
      return param_1;
    }
    param_1 = FUN_00257580(param_1,0x4350000000000000);
    uVar5 = (long)param_1 >> 0x20;
    iVar2 = ((int)((uint)(param_1 >> 0x20) & 0x7ff00000) >> 0x14) + -0x36;
    uVar4 = DAT_002bfea0;
    if (param_2 < -50000) goto LAB_002556b8;
  }
  uVar1 = DAT_002bfea8;
  uVar4 = DAT_002bfea0;
  iVar3 = iVar2 + param_2;
  if (iVar2 == 0x7ff) {
    uVar5 = FUN_002574c0(param_1,param_1);
    return uVar5;
  }
  if (iVar3 < 0x7ff) {
    if (0 < iVar3) {
      return param_1 & 0xffffffff | (uVar5 & 0xffffffff800fffff | (long)(iVar3 * 0x100000)) << 0x20;
    }
    if (iVar3 < -0x35) {
      if (param_2 < 0xc351) {
        param_1 = FUN_00255968(DAT_002bfea0,param_1);
      }
      else {
        param_1 = FUN_00255968(DAT_002bfea8,param_1);
        uVar4 = uVar1;
      }
    }
    else {
      param_1 = param_1 & 0xffffffff |
                (uVar5 & 0xffffffff800fffff | (long)((iVar3 + 0x36) * 0x100000)) << 0x20;
      uVar4 = 0x3c90000000000000;
    }
  }
  else {
    param_1 = FUN_00255968(DAT_002bfea8,param_1);
    uVar4 = uVar1;
  }
LAB_002556b8:
  uVar5 = FUN_00257580(param_1,uVar4);
  return uVar5;
}

