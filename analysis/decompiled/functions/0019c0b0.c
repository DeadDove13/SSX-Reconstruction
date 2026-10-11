/* Ghidra pseudocode. PS2 address: 0019c0b0. Not validated source. */

undefined8 FUN_0019c0b0(undefined8 param_1,int *param_2,float *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = *param_2;
  if (0 < iVar3) {
    piVar2 = (int *)param_2[1];
    do {
      fVar5 = *param_3;
      fVar6 = (float)piVar2[2];
      if (fVar6 <= fVar5) {
        fVar4 = (float)piVar2[3];
        bVar1 = fVar4 < fVar5;
        if (!bVar1) {
          if (*piVar2 != 0xe) {
            if (*piVar2 != 0xf) goto LAB_0019c140;
            bVar1 = fVar4 < fVar5;
            if (piVar2[1] != 0) {
              bVar1 = fVar5 < fVar6;
              fVar4 = fVar6;
            }
          }
          if (bVar1) {
            fVar4 = fVar5;
          }
          *param_3 = fVar4;
        }
      }
LAB_0019c140:
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + 4;
    } while (iVar3 != 0);
  }
  FUN_0019bcf8(*param_3,param_1,param_2,0);
  return param_1;
}

