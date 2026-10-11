/* Ghidra pseudocode. PS2 address: 00204650. Not validated source. */

void FUN_00204650(float param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_001f4f18();
  if ((lVar3 == 0) && (0.0 < param_1)) {
    iVar2 = (int)param_2;
    if ((*(int *)(iVar2 + 8) != 0) && (sVar1 = *(short *)(iVar2 + 0x92), sVar1 != 0)) {
      if (sVar1 < 1) {
        pcVar4 = *(code **)(iVar2 + 0x94);
        iVar2 = (int)*(short *)(iVar2 + 0x90);
      }
      else {
        uVar5 = *(undefined8 *)
                 (sVar1 * 8 + *(int *)((int)param_3 + (int)*(short *)(iVar2 + 0x94)) + -8);
        pcVar4 = (code *)((ulong)uVar5 >> 0x20);
        iVar2 = (int)(short)uVar5 + (int)*(short *)(iVar2 + 0x90);
      }
      (*pcVar4)(param_1,(int)param_3 + iVar2,param_2);
    }
    FUN_001f5550(param_1,param_2,param_3);
  }
  return;
}

