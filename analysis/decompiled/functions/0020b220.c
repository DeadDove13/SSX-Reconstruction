/* Ghidra pseudocode. PS2 address: 0020b220. Not validated source. */

void FUN_0020b220(int param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  auVar4 = _lqc2(*param_2);
  auVar3 = _vadd(auVar3,auVar4);
  auVar3 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar3;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x30);
    do {
      auVar3 = _lqc2(*pauVar1);
      auVar4 = _lqc2(*param_2);
      auVar3 = _vadd(auVar3,auVar4);
      auVar3 = _sqc2(auVar3);
      *pauVar1 = auVar3;
      iVar2 = iVar2 + 1;
      pauVar1 = pauVar1 + 2;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  return;
}

