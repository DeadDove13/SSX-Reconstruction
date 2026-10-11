/* Ghidra pseudocode. PS2 address: 00261d18. Not validated source. */

undefined8 FUN_00261d18(undefined8 param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uStack_80;
  uint uStack_7c;
  
  uVar3 = FUN_00260fa8(param_1,1);
  uVar4 = param_2 >> 0x20 & 0x7fffffff;
  uStack_7c = (uint)((ulong)param_2 >> 0x20) & 0xfffff;
  iVar6 = (int)uVar3;
  uVar7 = uVar4 >> 0x14;
  if (uVar7 != 0) {
    uStack_7c = uStack_7c | 0x100000;
  }
  uStack_80 = (uint)param_2;
  if (uStack_80 == 0) {
    iVar5 = 1;
    iVar2 = FUN_00261368((uint)&uStack_80 | 4);
    *(undefined4 *)(iVar6 + 0x10) = 1;
    uVar1 = iVar2 + 0x20;
    *(uint *)(iVar6 + 0x14) = uStack_7c;
  }
  else {
    uVar1 = FUN_00261368(&uStack_80);
    if (uVar1 == 0) {
      *(uint *)(iVar6 + 0x14) = uStack_80;
    }
    else {
      *(uint *)(iVar6 + 0x14) = uStack_80 | uStack_7c << (-uVar1 & 0x1f);
      uStack_7c = uStack_7c >> (uVar1 & 0x1f);
    }
    iVar5 = 1;
    if (uStack_7c != 0) {
      iVar5 = 2;
    }
    *(uint *)(iVar6 + 0x18) = uStack_7c;
    *(int *)(iVar6 + 0x10) = iVar5;
  }
  if (uVar7 == 0) {
    *param_3 = uVar1 - 0x432;
    iVar6 = FUN_002612e0(*(undefined4 *)(iVar5 * 4 + iVar6 + 0x10));
    iVar6 = iVar5 * 0x20 - iVar6;
  }
  else {
    iVar6 = 0x35 - uVar1;
    *param_3 = ((uint)uVar4 >> 0x14) + (uVar1 - 0x433);
  }
  *param_4 = iVar6;
  return uVar3;
}

