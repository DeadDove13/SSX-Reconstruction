/* Ghidra pseudocode. PS2 address: 00107348. Not validated source. */

void FUN_00107348(float param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  if ((*(int *)(iVar2 + 0x348) < 0) &&
     (lVar1 = FUN_0019c170(*(undefined4 *)(iVar2 + 0x2b4),*(undefined4 *)(iVar2 + 0x82f4)),
     lVar1 != 0)) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    *(float *)(*(int *)(iVar2 + 0x8584) + 0x860) = param_1;
    *(undefined4 *)(*(int *)(iVar2 + 0x8584) + 0x85c) = param_2;
    FUN_0010b340(param_3,4);
    FUN_0010b330(param_3,0x17);
    return;
  }
  return;
}

