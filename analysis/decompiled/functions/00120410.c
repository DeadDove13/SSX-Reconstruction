/* Ghidra pseudocode. PS2 address: 00120410. Not validated source. */

void FUN_00120410(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint auStack_50 [4];
  
  uVar1 = FUN_00121560();
  puVar6 = (uint *)param_2;
  *puVar6 = *puVar6 & 0xfffffffe | uVar1 & 1;
  lVar3 = FUN_00120f18(param_1,auStack_50);
  if (lVar3 != 0) {
    *puVar6 = *puVar6 & 0xffffff3f | (auStack_50[0] & 1) << 7 | ((auStack_50[0] ^ 1) & 1) << 6;
  }
  iVar5 = (int)param_1;
  if (*(short *)(iVar5 + 0x8d2) < 1) {
    pcVar4 = *(code **)(iVar5 + 0x8d4);
    iVar2 = (int)*(short *)(iVar5 + 0x8d0);
  }
  else {
    uVar7 = *(undefined8 *)
             (*(short *)(iVar5 + 0x8d2) * 8 + *(int *)(iVar5 + *(short *)(iVar5 + 0x8d4)) + -8);
    pcVar4 = (code *)((ulong)uVar7 >> 0x20);
    iVar2 = (int)(short)uVar7 + (int)*(short *)(iVar5 + 0x8d0);
  }
  (*pcVar4)(iVar5 + iVar2,param_2);
  return;
}

