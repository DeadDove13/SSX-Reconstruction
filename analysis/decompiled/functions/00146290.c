/* Ghidra pseudocode. PS2 address: 00146290. Not validated source. */

void FUN_00146290(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(param_1[2] + 0xc))((int)param_1 + (int)*(short *)(param_1[2] + 8));
  lVar2 = FUN_0023a448(0x2c43a8,600,0);
  if (lVar2 != 0) {
    FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,600);
  }
  *param_1 = (int)lVar2;
  param_1[1] = (int)lVar2 + 0x254;
  iVar4 = 0;
  do {
    uVar1 = (**(code **)(param_1[2] + 0x14))
                      ((int)param_1 + (int)*(short *)(param_1[2] + 0x10),iVar4);
    iVar3 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar3 + *param_1) = uVar1;
  } while (iVar4 < 0x96);
  return;
}

