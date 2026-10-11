/* Ghidra pseudocode. PS2 address: 001067a8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001068d8) */

uint FUN_001067a8(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_90 [16];
  float fStack_80;
  int aiStack_7c [3];
  
  piVar6 = (int *)param_1;
  iVar7 = 0;
  fVar8 = (float)FUN_0019b848(piVar6[0x20bc],piVar6 + 0x30,auStack_90,&fStack_80,piVar6 + 200);
  piVar6[0xb9] = (int)(*(float *)(piVar6[0x20bc] + 0x38) - fVar8);
  if (0 < piVar6[0x28]) {
    iVar1 = FUN_0019c4d0(0x28acf8);
    if (*(float *)(iVar1 + 0x38) * 0.5 < (float)piVar6[0xb9] - (float)piVar6[0xba]) {
      piVar6[0xba] = piVar6[0xb9];
    }
  }
  if ((float)piVar6[0xb9] < (float)piVar6[0xba]) {
    iVar7 = *(int *)(piVar6[0x20bc] + 0x34);
    iVar7 = (**(code **)(iVar7 + 0xc))
                      (piVar6[0x20bc] + (int)*(short *)(iVar7 + 8),aiStack_7c,piVar6 + 0xbe,0);
    piVar6[0xba] = piVar6[0xb9];
  }
  uVar2 = piVar6[0xd2];
  if ((int)uVar2 < 0) {
    iVar1 = piVar6[0x20bc];
    if ((fStack_80 <= 500.0) || (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x18) % 0x3c != 0)) {
      fVar9 = (float)FUN_0019be28(piVar6[0x20bc]);
      if (fVar9 - 200.0 < fVar8) {
        FUN_00106a60(param_1,1);
      }
      else {
        iVar5 = *(int *)(piVar6[0x20bc] + 0x34);
        lVar4 = (**(code **)(iVar5 + 0x14))
                          (piVar6[0xba],piVar6[0xb9],piVar6[0x20bc] + (int)*(short *)(iVar5 + 0x10))
        ;
        if (lVar4 != 0) {
          FUN_00106a60(param_1,0);
        }
      }
    }
    else {
      FUN_00106a60(param_1,0);
    }
    uVar2 = 0x8000;
    if (piVar6[0x20bc] != iVar1) {
      piVar6[0xbe] = 0;
      piVar6[0xcd] = -1;
      fVar8 = (float)FUN_0019b848(piVar6[0x20bc],piVar6 + 0x30,auStack_90,&fStack_80,piVar6 + 200);
      uVar2 = piVar6[0x20bc];
      fVar8 = *(float *)(uVar2 + 0x38) - fVar8;
      piVar6[0xb9] = (int)fVar8;
      if (fVar8 < (float)piVar6[0xba]) {
        iVar1 = *(int *)(piVar6[0x20bc] + 0x34);
        iVar1 = (**(code **)(iVar1 + 0xc))
                          (piVar6[0x20bc] + (int)*(short *)(iVar1 + 8),aiStack_7c,piVar6 + 0xbe,
                           iVar7);
        iVar7 = iVar7 + iVar1;
        uVar2 = (uint)(iVar7 < 0x32);
        piVar6[0xba] = piVar6[0xb9];
      }
    }
  }
  iVar1 = 0;
  if (0 < iVar7) {
    iVar5 = *piVar6;
    while( true ) {
      iVar3 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      (**(code **)(iVar5 + 0x5c))
                ((int)piVar6 + (int)*(short *)(iVar5 + 0x58),*(undefined4 *)(iVar3 + aiStack_7c[0]))
      ;
      uVar2 = 0;
      if (iVar7 <= iVar1) break;
      iVar5 = *piVar6;
    }
  }
  return uVar2;
}

