/* Ghidra pseudocode. PS2 address: 002196a0. Not validated source. */

int FUN_002196a0(int param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  undefined1 auStack_100 [128];
  
  iVar3 = 0;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x2c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x28),auStack_100,param_2);
  piVar5 = &DAT_00298ba4;
  puVar4 = &DAT_00298bbc;
  do {
    if ((*piVar5 != 0) && (lVar1 = FUN_0025baa0(auStack_100,puVar4), lVar1 == 0)) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0x58;
    piVar5 = piVar5 + 0x16;
  } while (iVar3 < 0x32);
  iVar3 = 0;
  piVar5 = &DAT_00298ba4;
  iVar2 = 0;
  do {
    if (*piVar5 == 0) {
      piVar5[-1] = param_5;
      piVar5[-2] = param_4;
      *piVar5 = 1;
      piVar5[1] = param_3;
      *(undefined4 *)(&DAT_00298bb8 + iVar2) = 0;
      piVar5[-3] = param_1;
      piVar5[2] = 0;
      piVar5[3] = 0;
      FUN_0025bbe4(piVar5 + 6,auStack_100);
      iVar2 = *(int *)(param_1 + 0x10);
      goto LAB_002197b4;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 0x16;
    iVar2 = iVar2 + 0x58;
  } while (iVar3 < 0x32);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = -1;
LAB_002197b4:
  (**(code **)(iVar2 + 0x24))(param_1 + *(short *)(iVar2 + 0x20));
  return iVar3;
}

