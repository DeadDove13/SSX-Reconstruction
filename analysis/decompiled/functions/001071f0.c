/* Ghidra pseudocode. PS2 address: 001071f0. Not validated source. */

void FUN_001071f0(undefined4 param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar2 = (int)param_2;
  FUN_0019c0b0(&fStack_60,*(undefined4 *)(iVar2 + 0x82f4),iVar2 + 0x2b4);
  *(float *)(iVar2 + 0x2c0) = fStack_60;
  *(undefined **)(iVar2 + 0x2c4) = puStack_5c;
  *(undefined4 *)(iVar2 + 0x2c8) = uStack_58;
  *(undefined4 *)(iVar2 + 0x2cc) = uStack_54;
  FUN_0019ba80(*(undefined4 *)(iVar2 + 0x2b4),&fStack_60,*(undefined4 *)(iVar2 + 0x82f4));
  fVar1 = fStack_60;
  if (fStack_60 == 0.0) {
    puVar3 = puStack_5c;
    if (((float)puStack_5c != 0.0) &&
       (puVar3 = PTR_DAT_002c1130, puVar4 = DAT_002c1134, 0.0 <= (float)puStack_5c))
    goto LAB_001072d0;
  }
  else {
    puVar4 = puStack_5c;
    puVar3 = (undefined *)FUN_00218510((float)puStack_5c / fStack_60);
    if (fVar1 < 0.0) {
      if (0.0 < (float)puVar4) {
        puVar3 = (undefined *)((float)puVar3 + DAT_002c1138);
      }
      else {
        puVar3 = (undefined *)((float)puVar3 - DAT_002c113c);
      }
    }
  }
  puVar4 = puVar3;
LAB_001072d0:
  uStack_58 = 0;
  puStack_5c = (undefined *)((float)puStack_5c * DAT_002c1140);
  fStack_60 = fStack_60 * DAT_002c1140;
  FUN_00109448(puVar4,param_1,param_2,iVar2 + 0x2c0,&fStack_60,0);
  if (-1 < *(int *)(iVar2 + 0x24)) {
    FUN_0015f258(*(undefined4 *)(*(int *)(iVar2 + 0x24) * 0x80 + DAT_002859e4 + 0xa0));
  }
  return;
}

