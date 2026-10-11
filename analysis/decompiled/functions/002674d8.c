/* Ghidra pseudocode. PS2 address: 002674d8. Not validated source. */

void FUN_002674d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *param_1 = param_2;
  iVar1 = *(int *)(param_7 + 8);
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[0x10] = param_7;
  if (iVar1 == 0) {
    *(undefined4 **)(param_7 + 8) = param_1;
  }
  else if (*(int *)(iVar1 + 0x38) == 0) {
    *(undefined4 **)(iVar1 + 0x38) = param_1;
  }
  else {
    for (iVar1 = *(int *)(iVar1 + 0x38); *(int *)(iVar1 + 0x38) != 0; iVar1 = *(int *)(iVar1 + 0x38)
        ) {
    }
    *(undefined4 **)(iVar1 + 0x38) = param_1;
  }
  EI();
  return;
}

