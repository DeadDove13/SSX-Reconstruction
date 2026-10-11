/* Ghidra pseudocode. PS2 address: 0018da60. Not validated source. */

void FUN_0018da60(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if ((iVar3 != -0x144) && (iVar3 + 0x144 != iVar3 + 0x944)) {
    iVar2 = iVar3 + 0x924;
    do {
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      bVar1 = iVar3 + 0x144 != iVar2;
      iVar2 = iVar2 + -0x20;
    } while (bVar1);
  }
  thunk_FUN_0018dbf0(iVar3 + 0x130,2);
  thunk_FUN_0018dbf0(iVar3 + 0x118,2);
  FUN_0018dde8(param_1,param_2);
  return;
}

