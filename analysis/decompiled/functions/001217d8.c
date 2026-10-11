/* Ghidra pseudocode. PS2 address: 001217d8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00121850) */
/* WARNING: Removing unreachable block (ram,0x0012182c) */
/* WARNING: Removing unreachable block (ram,0x00121910) */

void FUN_001217d8(int *param_1,long param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = 0;
  param_1[0x22a] = 0x1a;
  if ((param_2 != 0) || (param_3 != 0)) {
    bVar1 = *(byte *)(*(int *)(*param_1 + 0x394) + 0x1d);
    iVar2 = FUN_002109e0();
    uVar4 = (uint)(iVar2 % 100 + -0x10 < (int)(uint)bVar1);
  }
  param_1[0x22b] = uVar4;
  iVar2 = FUN_002109e0();
  if (iVar2 % 100 < 0) {
    fVar5 = (float)param_1[0x227];
  }
  else {
    fVar5 = (float)param_1[0x227];
  }
  if (fVar5 == 1.0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = 1.0 - fVar5 / DAT_002c1a68;
  }
  param_1[0x22c] = (uint)(20.0 < (float)(uint)(iVar2 % 100) * fVar5);
  iVar2 = *(int *)(*param_1 + 0x394);
  param_1[0x22d] = 0;
  bVar1 = *(byte *)(iVar2 + 0x1d);
  iVar2 = FUN_002109e0();
  if (iVar2 % 100 + -0x10 < (int)(uint)bVar1) {
    iVar2 = FUN_00109c50(*param_1);
    param_1[0x22a] = iVar2;
  }
  else {
    param_1[0x22a] = 0x1a;
  }
  if (param_1[0x22b] != 0) {
    if (param_2 == 0) {
      param_1[0x22e] = 0;
    }
    else {
      param_1[0x22e] = 0x3f800000;
    }
    if (param_3 == 0) {
      param_1[0x22f] = 0;
    }
    else {
      param_1[0x22f] = 0x3f800000;
    }
    uVar3 = FUN_002109e0();
    if ((uVar3 & 1) != 0) {
      param_1[0x22e] = (int)-(float)param_1[0x22e];
    }
    uVar3 = FUN_002109e0();
    if ((uVar3 & 1) != 0) {
      param_1[0x22f] = (int)-(float)param_1[0x22f];
    }
  }
  return;
}

