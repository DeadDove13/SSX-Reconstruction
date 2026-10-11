/* Ghidra pseudocode. PS2 address: 0019c810. Not validated source. */

int FUN_0019c810(float param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  fVar5 = *(float *)(param_2[4] + 0x38);
  if (param_1 <= fVar5) {
    fVar5 = param_1;
  }
  iVar2 = 0;
  if (0 < *param_2) {
    iVar3 = 0;
    do {
      fVar6 = *(float *)(iVar3 + param_2[1] + 0x38) - fVar5;
      if (0.0 <= fVar6) {
        fVar4 = (float)FUN_0019be28();
        if (fVar6 <= fVar4) {
          FUN_0019bcf8(fVar6,auStack_80,param_2[1] + iVar3,0);
          *param_3 = auStack_80._0_4_;
          param_3[1] = auStack_80._4_4_;
          param_3[2] = uStack_78;
          param_3[3] = uStack_74;
          return param_2[1] + iVar3;
        }
        iVar1 = *param_2;
      }
      else {
        iVar1 = *param_2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x3c;
    } while (iVar2 < iVar1);
  }
  return 0;
}

