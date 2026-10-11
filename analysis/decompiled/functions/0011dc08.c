/* Ghidra pseudocode. PS2 address: 0011dc08. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0011dd40) */
/* WARNING: Removing unreachable block (ram,0x0011dc38) */
/* WARNING: Removing unreachable block (ram,0x0011ddc4) */

void FUN_0011dc08(undefined8 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  piVar2 = (int *)param_1;
  if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x18) % 3 == 0) {
    fVar3 = *(float *)(*piVar2 + 0xa8);
    fVar4 = *(float *)(*piVar2 + 0xac);
    if ((0.0 < fVar3) || (0.0 < fVar4)) {
      if (0.0 < fVar4) {
        piVar2[0x7a] = 0;
        puVar1 = &DAT_002c60e0;
        iVar5 = DAT_002c60e0;
      }
      else if (DAT_002c1900 < fVar3) {
        piVar2[0x7a] = 0;
        puVar1 = &DAT_002c60e0;
        iVar5 = DAT_002c60e0;
      }
      else if (DAT_002c1904 < fVar3) {
        piVar2[0x7a] = 0;
        puVar1 = &DAT_002c60d0;
        iVar5 = DAT_002c60d0;
      }
      else {
        piVar2[0x7a] = 0;
        puVar1 = &DAT_002c60c0;
        iVar5 = DAT_002c60c0;
      }
      piVar2[0x7b] = iVar5;
      piVar2[0x7c] = puVar1[1];
      piVar2[0x7d] = puVar1[2];
      FUN_0011e8a8(param_1,piVar2 + piVar2[0x78] * 0x10 + 8);
      piVar2[0x78] = (piVar2[0x78] + 1) % 7;
      if (piVar2[0x79] < 7) {
        piVar2[0x79] = piVar2[0x79] + 1;
      }
    }
    else if (0 < piVar2[0x79]) {
      piVar2[0x79] = piVar2[0x79] + -1;
    }
  }
  if ((*(int *)(*piVar2 + 0x350) == 0x10) || (*(int *)(*piVar2 + 0x350) == 0x13)) {
    FUN_0011eb00(param_1,piVar2 + piVar2[0xf0] * 0x10 + 0x80);
    piVar2[0xf0] = (piVar2[0xf0] + 1) % 7;
    if (piVar2[0xf1] < 7) {
      piVar2[0xf1] = piVar2[0xf1] + 1;
    }
  }
  else if (0 < piVar2[0xf1]) {
    piVar2[0xf1] = piVar2[0xf1] + -1;
  }
  return;
}

