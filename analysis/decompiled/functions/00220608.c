/* Ghidra pseudocode. PS2 address: 00220608. Not validated source. */

void FUN_00220608(int param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1 + 0x3c);
  iVar4 = 0;
  piVar3 = *(int **)(param_1 + 0x48);
  do {
    if (*piVar2 <= iVar4) {
LAB_0021df34:
      uVar1 = FUN_0021dd40(piVar2);
      piVar3 = (int *)uVar1;
      *piVar3 = param_2;
      FUN_0021b6b8(0x2c5938,param_2 + 0x50);
      FUN_0021df98(piVar2,uVar1);
      FUN_0021b7d8(0x2c5938);
      FUN_0021b718(0x2c5938,piVar3 + 4);
      *param_3 = piVar3;
      return;
    }
    if (*piVar3 == param_2) {
      FUN_0021ddd0(piVar2,iVar4);
      if (iVar4 < *piVar2) {
        *param_3 = piVar3;
        return;
      }
      goto LAB_0021df34;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0x734;
  } while( true );
}

