/* Ghidra pseudocode. PS2 address: 00107cb0. Not validated source. */

void FUN_00107cb0(float param_1,undefined8 param_2)

{
  int *piVar1;
  float fVar2;
  
  piVar1 = (int *)param_2;
  param_1 = param_1 * ((float)*(byte *)(piVar1[0xe5] + 0x1d) * DAT_002c1174 * DAT_002c1178 +
                      DAT_002c117c);
  if (0.0 < param_1) {
    (**(code **)(*piVar1 + 0x84))(param_1,(int)piVar1 + (int)*(short *)(*piVar1 + 0x80));
  }
  if ((float)piVar1[7] < DAT_002c1180) {
    if (1.0 <= (float)piVar1[7] + param_1) {
      FUN_00201318(DAT_002c56e8,param_2);
    }
    fVar2 = (float)piVar1[7];
  }
  else {
    fVar2 = (float)piVar1[7];
  }
  fVar2 = fVar2 + param_1;
  piVar1[7] = (int)fVar2;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  piVar1[7] = (int)fVar2;
  return;
}

