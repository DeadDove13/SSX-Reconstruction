/* Ghidra pseudocode. PS2 address: 0015fd58. Not validated source. */

void FUN_0015fd58(float param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int aiStack_50 [4];
  
  fVar1 = param_1 * DAT_002c2564;
  fVar2 = param_1 * DAT_002c2560;
  FUN_0015fae0(&fStack_60,(uint)&fStack_60 | 4,(uint)&fStack_60 | 8,(uint)&fStack_60 | 0xc,
               aiStack_50);
  switch(param_2) {
  case 0:
    fStack_60 = fStack_60 - fVar2;
    break;
  case 1:
    fStack_60 = fStack_60 + fVar2;
    break;
  case 2:
    fStack_5c = fStack_5c - fVar2;
    break;
  case 3:
    fStack_5c = fStack_5c + fVar2;
    break;
  case 4:
    aiStack_50[0] = aiStack_50[0] + 1;
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) <= aiStack_50[0]) {
      aiStack_50[0] = 0;
    }
    FUN_0015f258(0x27fea0);
    FUN_0015f258(DAT_00280e40);
    break;
  case 5:
    aiStack_50[0] = aiStack_50[0] + -1;
    if (aiStack_50[0] < 0) {
      aiStack_50[0] = *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) + -1;
    }
    FUN_0015f258(0x27fea0);
    FUN_0015f258(DAT_00280e40);
    break;
  case 6:
    fStack_54 = fStack_54 - fVar1;
    break;
  case 7:
    fStack_54 = fStack_54 + fVar1;
    break;
  case 8:
    fStack_58 = fStack_58 - param_1 * 5.0;
    break;
  case 9:
    fStack_58 = fStack_58 + param_1 * 5.0;
  }
  FUN_0015bec0(fStack_60,0);
  FUN_0015fba0(fStack_60,fStack_5c,fStack_58,fStack_54,aiStack_50[0],0);
  return;
}

