/* Ghidra pseudocode. PS2 address: 0021dec0. Not validated source. */

void FUN_0021dec0(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)param_1;
  piVar2 = (int *)piVar4[3];
  do {
    if (*piVar4 <= iVar3) {
LAB_0021df34:
      uVar1 = FUN_0021dd40(param_1);
      piVar2 = (int *)uVar1;
      *piVar2 = param_2;
      FUN_0021b6b8(0x2c5938,param_2 + 0x50);
      FUN_0021df98(param_1,uVar1);
      FUN_0021b7d8(0x2c5938);
      FUN_0021b718(0x2c5938,piVar2 + 4);
      *param_3 = piVar2;
      return;
    }
    if (*piVar2 == param_2) {
      FUN_0021ddd0(param_1,iVar3);
      if (iVar3 < *piVar4) {
        *param_3 = piVar2;
        return;
      }
      goto LAB_0021df34;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x734;
  } while( true );
}

