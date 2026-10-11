/* Ghidra pseudocode. PS2 address: 0022d248. Not validated source. */

int FUN_0022d248(int param_1,int param_2,uint param_3,undefined2 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
joined_r0x0022d280:
  do {
    if ((int)param_3 < 1) {
      return iVar3;
    }
    uVar2 = 0x3000;
    if ((int)param_3 < 0x3000) {
      uVar2 = param_3;
    }
    param_3 = param_3 - uVar2;
    iVar4 = param_1 + uVar2;
    iVar5 = param_2 + uVar2;
    do {
    } while (8 - DAT_0029af84 < 5);
    if ((uVar2 & 0x3f) != 0) {
      uVar2 = uVar2 + 0x40 & 0xffc0;
    }
    FUN_002250c0();
    DAT_0029af80 = DAT_0029af80 + 1;
    if (DAT_0029af80 == 0) {
      DAT_0029af80 = 1;
    }
    iVar3 = 0;
    piVar1 = &DAT_0029af88;
    do {
      iVar3 = iVar3 + 1;
      if (*piVar1 == 0) {
        DAT_0029af84 = DAT_0029af84 + '\x01';
        piVar1[1] = param_1;
        *piVar1 = DAT_0029af80;
        piVar1[2] = param_2;
        *(short *)(piVar1 + 3) = (short)uVar2;
        *(undefined2 *)((int)piVar1 + 0xe) = param_4;
        FUN_002250a0();
        param_1 = iVar4;
        param_2 = iVar5;
        iVar3 = DAT_0029af80;
        goto joined_r0x0022d280;
      }
      piVar1 = piVar1 + 4;
    } while (iVar3 < 8);
    iVar3 = 0;
    param_1 = iVar4;
    param_2 = iVar5;
  } while( true );
}

