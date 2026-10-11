/* Ghidra pseudocode. PS2 address: 00210128. Not validated source. */

bool FUN_00210128(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 undefined4 *param_6,float *param_7)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = DAT_002c39ec;
  *param_7 = DAT_002c39ec;
  if (param_4[1] < param_2[1]) goto LAB_00210250;
  if (param_4[1] <= param_3[1]) {
    if (param_2[2] <= param_4[2]) {
      if (param_4[2] <= param_3[2]) {
        fVar5 = (*param_4 - *param_2) + param_1;
        fVar3 = (*param_3 - *param_4) + param_1;
        if (0.0 <= fVar5) {
          if (0.0 <= fVar3) {
            if (fVar5 < fVar4) {
              uVar1 = *(undefined8 *)param_4;
              fVar4 = param_4[2];
              fVar2 = param_4[3];
              *param_5 = (float)uVar1;
              param_5[1] = (float)((ulong)uVar1 >> 0x20);
              param_5[2] = fVar4;
              param_5[3] = fVar2;
              *param_5 = *param_2;
              *param_7 = fVar5;
              *param_6 = 0xbf800000;
              param_6[1] = 0;
              param_6[2] = 0;
              param_6[3] = 0;
              fVar4 = *param_7;
            }
            else {
              fVar4 = *param_7;
            }
            if (fVar3 < fVar4) {
              uVar1 = *(undefined8 *)param_4;
              fVar4 = param_4[2];
              fVar5 = param_4[3];
              *param_5 = (float)uVar1;
              param_5[1] = (float)((ulong)uVar1 >> 0x20);
              param_5[2] = fVar4;
              param_5[3] = fVar5;
              *param_5 = *param_3;
              *param_7 = fVar3;
              *param_6 = 0x3f800000;
              param_6[1] = 0;
              param_6[2] = 0;
              param_6[3] = 0;
              goto LAB_00210250;
            }
            fVar4 = *param_4;
          }
          else {
            fVar4 = *param_4;
          }
        }
        else {
LAB_00210250:
          fVar4 = *param_4;
        }
      }
      else {
        fVar4 = *param_4;
      }
    }
    else {
      fVar4 = *param_4;
    }
  }
  else {
    fVar4 = *param_4;
  }
  if (*param_2 <= fVar4) {
    if (fVar4 <= *param_3) {
      if (param_2[2] <= param_4[2]) {
        if (param_4[2] <= param_3[2]) {
          fVar4 = (param_4[1] - param_2[1]) + param_1;
          fVar5 = (param_3[1] - param_4[1]) + param_1;
          if (0.0 <= fVar4) {
            if (0.0 <= fVar5) {
              fVar3 = *param_7;
              if (fVar4 < fVar3) {
                uVar1 = *(undefined8 *)param_4;
                fVar3 = param_4[2];
                fVar2 = param_4[3];
                *param_5 = (float)uVar1;
                param_5[1] = (float)((ulong)uVar1 >> 0x20);
                param_5[2] = fVar3;
                param_5[3] = fVar2;
                param_5[1] = param_2[1];
                *param_7 = fVar4;
                *param_6 = 0;
                param_6[1] = 0xbf800000;
                param_6[2] = 0;
                param_6[3] = 0;
                fVar3 = *param_7;
              }
              if (fVar5 < fVar3) {
                uVar1 = *(undefined8 *)param_4;
                fVar4 = param_4[2];
                fVar3 = param_4[3];
                *param_5 = (float)uVar1;
                param_5[1] = (float)((ulong)uVar1 >> 0x20);
                param_5[2] = fVar4;
                param_5[3] = fVar3;
                param_5[1] = param_3[1];
                *param_7 = fVar5;
                *param_6 = 0;
                param_6[1] = 0x3f800000;
                param_6[2] = 0;
                param_6[3] = 0;
                goto LAB_00210374;
              }
              fVar4 = param_4[1];
            }
            else {
              fVar4 = param_4[1];
            }
          }
          else {
LAB_00210374:
            fVar4 = param_4[1];
          }
        }
        else {
          fVar4 = param_4[1];
        }
      }
      else {
        fVar4 = param_4[1];
      }
    }
    else {
      fVar4 = param_4[1];
    }
  }
  else {
    fVar4 = param_4[1];
  }
  if (param_2[1] <= fVar4) {
    if (fVar4 <= param_3[1]) {
      if (*param_2 <= *param_4) {
        if (*param_4 <= *param_3) {
          fVar4 = (param_4[2] - param_2[2]) + param_1;
          param_1 = (param_3[2] - param_4[2]) + param_1;
          if (0.0 <= fVar4) {
            if (param_1 < 0.0) {
              fVar4 = *param_7;
              goto LAB_0021049c;
            }
            fVar5 = *param_7;
            if (fVar4 < fVar5) {
              uVar1 = *(undefined8 *)param_4;
              fVar5 = param_4[2];
              fVar3 = param_4[3];
              *param_5 = (float)uVar1;
              param_5[1] = (float)((ulong)uVar1 >> 0x20);
              param_5[2] = fVar5;
              param_5[3] = fVar3;
              param_5[2] = param_2[2];
              *param_7 = fVar4;
              *param_6 = 0;
              param_6[1] = 0;
              param_6[2] = 0xbf800000;
              param_6[3] = 0;
              fVar5 = *param_7;
            }
            if (fVar5 <= param_1) {
              fVar4 = *param_7;
              goto LAB_0021049c;
            }
            uVar1 = *(undefined8 *)param_4;
            fVar4 = param_4[2];
            fVar5 = param_4[3];
            *param_5 = (float)uVar1;
            param_5[1] = (float)((ulong)uVar1 >> 0x20);
            param_5[2] = fVar4;
            param_5[3] = fVar5;
            param_5[2] = param_3[2];
            *param_7 = param_1;
            *param_6 = 0;
            param_6[1] = 0;
            param_6[2] = 0x3f800000;
            param_6[3] = 0;
          }
          fVar4 = *param_7;
        }
        else {
          fVar4 = *param_7;
        }
      }
      else {
        fVar4 = *param_7;
      }
    }
    else {
      fVar4 = *param_7;
    }
  }
  else {
    fVar4 = *param_7;
  }
LAB_0021049c:
  return fVar4 != DAT_002c39f0;
}

