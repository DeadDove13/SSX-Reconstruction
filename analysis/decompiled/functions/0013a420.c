/* Ghidra pseudocode. PS2 address: 0013a420. Not validated source. */

void FUN_0013a420(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  iVar1 = *(int *)(*(int *)(*param_1 + 0x6cf4) + 8);
  if (iVar1 == 0x34) {
LAB_0013a464:
    if (iVar1 != 0x50) {
      FUN_0014cd18(*(undefined4 *)(*param_1 + 0x6cf4),0x50,0,5);
    }
    iVar1 = *param_1;
  }
  else {
    if (iVar1 != 0x50) {
      lVar2 = FUN_00150f10();
      if (lVar2 == 0) {
        iVar1 = *param_1;
        *(undefined4 *)(iVar1 + 0xe0) = 0;
        *(undefined4 *)(iVar1 + 0xd0) = 0;
        *(undefined4 *)(iVar1 + 0xd4) = 0;
        *(undefined4 *)(iVar1 + 0xd8) = 0;
        goto LAB_0013a518;
      }
      goto LAB_0013a464;
    }
    iVar1 = *param_1;
  }
  FUN_0010b330(iVar1,3);
  FUN_0010b340(*param_1,2);
  iVar1 = *param_1;
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x110));
  auVar4 = _qmtc2(DAT_002c1da8);
  auVar4 = _vmulbc(auVar5,auVar4);
  auVar4 = _sqc2(auVar4);
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
  auVar4 = _lqc2(auVar4);
  auVar4 = _vadd(auVar5,auVar4);
  auVar4 = _sqc2(auVar4);
  *(undefined1 (*) [16])(iVar1 + 0xd0) = auVar4;
  auVar4 = _lqc2(*(undefined1 (*) [16])(*param_1 + 0xd0));
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vmul(auVar4,auVar4);
  _vaddabc(auVar4,auVar4);
  _vmaddabc(auVar5,auVar4);
  auVar4 = _vmaddbc(auVar5,auVar4);
  _vsqrt(auVar4);
  _vwaitq();
  uVar3 = _cfc2(in_vc6);
  *(int *)(*param_1 + 0xe0) = (int)uVar3;
LAB_0013a518:
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x1ac) = 0;
  *(undefined4 *)(iVar1 + 0x1a4) = 0;
  *(undefined4 *)(iVar1 + 0x1a8) = 0;
  *(undefined4 *)(iVar1 + 0x1a0) = 0;
  *(undefined4 *)(iVar1 + 0x198) = 0;
  *(undefined4 *)(iVar1 + 0x19c) = 0;
  *(undefined4 *)(iVar1 + 0x194) = 0;
  *(undefined4 *)(iVar1 + 0x18c) = 0;
  *(undefined4 *)(iVar1 + 400) = 0;
  return;
}

