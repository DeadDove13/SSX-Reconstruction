/* Ghidra pseudocode. PS2 address: 0016c3d0. Not validated source. */

undefined8 FUN_0016c3d0(undefined8 param_1,float param_2)

{
  float fVar1;
  code *pcVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  
  pfVar7 = (float *)param_1;
  pfVar5 = pfVar7 + 0x154;
  iVar8 = 1;
  fVar9 = (float)DAT_002859d4;
  pfVar7[2] = 0.0;
  pfVar7[1] = (float)&DAT_002b0528;
  pfVar7[3] = 1.0;
  pfVar7[4] = 0.0;
  pfVar7[5] = 0.0;
  pfVar7[0x146] = 0.0;
  *pfVar7 = fVar9 / 60.0;
  do {
    iVar8 = iVar8 + -1;
    FUN_0016a198(pfVar5);
    pfVar5 = pfVar5 + 0xb8;
  } while (iVar8 != -1);
  fVar9 = (float)DAT_002859d4;
  pfVar7[0x2cf] = param_2;
  iVar8 = 0;
  pfVar7[0x151] = 1.4013e-45;
  pfVar5 = pfVar7 + 0x148;
  pfVar7[0x2ca] = 0.0;
  pfVar7[0x2cb] = 0.0;
  pfVar3 = pfVar7 + 0x14b;
  pfVar7[0x2cc] = 0.0;
  pfVar4 = pfVar7 + 0x14e;
  pfVar7[0x2c5] = 0.0;
  pfVar7[0x2c6] = 0.0;
  pfVar6 = pfVar7 + 0x154;
  pfVar7[0x2d2] = fVar9 / 60.0;
  do {
    pfVar6[6] = 1.4013e-45;
    if (*pfVar6 == 0.0) {
LAB_0016c4ec:
      fVar9 = pfVar6[0xa1];
    }
    else {
      if ((code *)pfVar6[1] != (code *)0x0) {
        (*(code *)pfVar6[1])(pfVar6,pfVar6);
        goto LAB_0016c4ec;
      }
      fVar9 = pfVar6[0xa1];
    }
    iVar8 = iVar8 + 1;
    (**(code **)((int)fVar9 + 0x1c))((int)pfVar6 + (int)*(short *)((int)fVar9 + 0x18));
    pfVar6[0x11] = 1.4013e-45;
    pfVar6 = pfVar6 + 0xb8;
    if (1 < iVar8) {
      fVar9 = pfVar7[0x2c4];
      fVar1 = pfVar7[1];
      iVar8 = 2;
      do {
        *pfVar5 = 0.0;
        iVar8 = iVar8 + -1;
        *pfVar3 = 0.0;
        pfVar5 = pfVar5 + 1;
        *pfVar4 = 0.0;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      } while (-1 < iVar8);
      pcVar2 = *(code **)((int)fVar1 + 0x7c);
      pfVar7[0x2c4] = 1.4013e-45;
      (*pcVar2)((int)pfVar7 + (int)*(short *)((int)fVar1 + 0x78),fVar1,fVar9);
      return param_1;
    }
  } while( true );
}

