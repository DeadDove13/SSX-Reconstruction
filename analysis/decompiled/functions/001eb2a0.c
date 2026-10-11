/* Ghidra pseudocode. PS2 address: 001eb2a0. Not validated source. */

void FUN_001eb2a0(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  
  iVar5 = 0;
  if (0 < *param_1) {
    piVar4 = param_1 + 0xe;
    piVar3 = param_1 + 1;
    do {
      lVar2 = FUN_0023c088(param_2,piVar3);
      if (lVar2 != 0) {
        uStack_90 = DAT_002c54d0;
        uStack_8f = DAT_002c54d1;
        uStack_8e = DAT_002c54d2;
        iVar1 = FUN_001be538(0x295e90,lVar2,&uStack_90,0);
        *piVar4 = iVar1;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
      piVar3 = (int *)((int)piVar3 + 5);
    } while (iVar5 < *param_1);
  }
  return;
}

