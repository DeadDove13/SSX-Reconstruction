/* Ghidra pseudocode. PS2 address: 0019eab8. Not validated source. */

void FUN_0019eab8(int param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = FUN_00187ce8(DAT_002859e4);
  if (lVar2 == 0) {
    if (*(int *)(param_1 + 0x34) < 0) {
      cVar1 = *(char *)(param_1 + 0x19);
    }
    else {
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      cVar1 = *(char *)(param_1 + 0x19);
    }
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x18) == '\0') {
        FUN_0019d348(param_1 + 0x1c);
      }
      else {
        fVar3 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 8);
        *(float *)(param_1 + 0xc) = fVar3;
        if (*(float *)(param_1 + 0x14) <= fVar3) {
          *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x14);
          if (*(char *)(param_1 + 0x1a) != '\0') {
            *(undefined1 *)(param_1 + 0x19) = 1;
          }
          *(undefined1 *)(param_1 + 0x18) = 0;
        }
        (**(code **)(*(int *)(param_1 + 0x54) + 0xec))
                  (param_1 + 0x1c + (int)*(short *)(*(int *)(param_1 + 0x54) + 0xe8));
      }
    }
  }
  return;
}

