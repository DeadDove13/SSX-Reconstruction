/* Ghidra pseudocode. PS2 address: 0013bde0. Not validated source. */

void FUN_0013bde0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x110));
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vmul(auVar3,auVar4);
  _vaddabc(auVar3,auVar3);
  _vmaddabc(auVar5,auVar3);
  auVar3 = _vmaddbc(auVar5,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  if ((*(float *)(param_1 + 8) < auVar3._0_4_) ||
     (*(float *)(iVar1 + 0x138) < *(float *)(param_1 + 8))) {
    uVar2 = 1;
    iVar1 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(iVar1 + 0x1e8) = 0;
  *(undefined4 *)(iVar1 + 0x1e0) = 0;
  *(undefined4 *)(iVar1 + 0x1e4) = 0;
  *(undefined4 *)(iVar1 + 500) = 0;
  *(undefined4 *)(iVar1 + 0x1ec) = 0;
  *(undefined4 *)(iVar1 + 0x1f0) = 0;
  FUN_0010a2c0(iVar1,param_1 + 0x20,param_1 + 0x1c);
  return;
}

