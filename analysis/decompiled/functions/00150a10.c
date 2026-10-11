/* Ghidra pseudocode. PS2 address: 00150a10. Not validated source. */

void FUN_00150a10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0x56) {
    FUN_0014cd18(param_1,0x66,0,5);
    return;
  }
  if (iVar1 == 0x55) {
    FUN_0014cd18(param_1,0x65,0,5);
    return;
  }
  if (iVar1 == 0x57) {
    FUN_0014cd18(param_1,0x67,0,5);
    return;
  }
  if (iVar1 == 0x58) {
    FUN_0014cd18(param_1,0x68,0,5);
    return;
  }
  if (iVar1 == 0x59) {
    FUN_0014cd18(param_1,0x69,0,5);
    return;
  }
  if (iVar1 == 0x5a) {
    FUN_0014cd18(param_1,0x6a,0,5);
    return;
  }
  if (iVar1 == 0x5b) {
    FUN_0014cd18(param_1,0x6b,0,5);
    return;
  }
  if (iVar1 == 0x5c) {
    FUN_0014cd18(param_1,0x6c,0,5);
    return;
  }
  if (iVar1 == 0xb0) {
    FUN_0014cd18(param_1,0x6c,0,5);
    return;
  }
  if (iVar1 == 0xb1) {
    FUN_0014cd18(param_1,0x6b,0,5);
    return;
  }
  if (iVar1 == 0xb2) {
    FUN_0014cd18(param_1,0x66,0,5);
    return;
  }
  if (iVar1 == 0xb3) {
    FUN_0014cd18(param_1,0x65,0,5);
    return;
  }
  if (iVar1 == 0xb4) {
    FUN_0014cd18(param_1,0x6c,0,5);
    return;
  }
  if (iVar1 == 0xb5) {
    FUN_0014cd18(param_1,0x6b,0,5);
    return;
  }
  if (iVar1 == 0xb6) {
    FUN_0014cd18(param_1,0x66,0,5);
    return;
  }
  if (iVar1 == 0xb7) {
    FUN_0014cd18(param_1,0x65,0,5);
    return;
  }
  if (iVar1 == 0x5e) {
    FUN_0014cd18(param_1,0x66,0,5);
    return;
  }
  if (iVar1 == 0x5d) {
    FUN_0014cd18(param_1,0x65,0,5);
    return;
  }
  if (iVar1 == 0x5f) {
    FUN_0014cd18(param_1,0x67,0,5);
    return;
  }
  if (iVar1 == 0x60) {
    FUN_0014cd18(param_1,0x68,0,5);
    return;
  }
  if (iVar1 == 0x61) {
    FUN_0014cd18(param_1,0x69,0,5);
    return;
  }
  if (iVar1 == 0x62) {
    FUN_0014cd18(param_1,0x6a,0,5);
    return;
  }
  if (iVar1 == 99) {
    FUN_0014cd18(param_1,0x6b,0,5);
    return;
  }
  if (iVar1 == 100) {
    FUN_0014cd18(param_1,0x6c,0,5);
    return;
  }
  return;
}

