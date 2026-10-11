/* Ghidra pseudocode. PS2 address: 002062c0. Not validated source. */

void FUN_002062c0(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (param_1[5] == 0) {
    if ((float *)param_1[3] == (float *)0x0) {
      fVar3 = (float)(int)*(char *)(param_1 + 4) * ((float)(int)param_1[0x4a] / 100.0);
    }
    else {
      fVar3 = (float)(int)*(char *)(param_1 + 4) * ((float)(int)param_1[0x4a] / 100.0) *
              *(float *)param_1[3];
    }
    fVar3 = fVar3 * DAT_002c552c;
    uVar2 = FUN_00228098(*param_1);
    if (((127.0 <= fVar3) || (uVar1 = 0, 0.0 <= fVar3)) && (uVar1 = 0x7f, fVar3 < 127.0)) {
      uVar1 = (undefined1)(int)fVar3;
    }
    FUN_00227660(uVar2,uVar1);
    return;
  }
  return;
}

