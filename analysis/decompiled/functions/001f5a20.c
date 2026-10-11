/* Ghidra pseudocode. PS2 address: 001f5a20. Not validated source. */

undefined4 * FUN_001f5a20(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar10 = (int)param_1;
  iVar8 = iVar10 + 0x30000;
  puVar9 = (undefined4 *)0x0;
  *(int *)(iVar10 + 0x329b0) = *(int *)(iVar10 + 0x329b0) + 1;
  lVar5 = FUN_001f5970(param_1,*(undefined4 *)(iVar10 + 0x329b0));
  if (lVar5 < 0) {
    FUN_0018db98(0x2bc888);
    if (param_4 == 1) {
      FUN_00228918(param_2);
    }
  }
  else {
    puVar9 = (undefined4 *)(iVar10 + (int)lVar5 * 0xa0 + 0x329c0);
    FUN_001f4ee8(puVar9);
    puVar9[1] = (uint)param_2;
    iVar1 = *(int *)(iVar10 + 0x3201c);
    puVar9[0x19] = param_3;
    *puVar9 = (int)param_4;
    uVar6 = *(undefined4 *)(iVar10 + 0x32080 + *(int *)(iVar10 + 0x3201c) * 4);
    iVar4 = iVar10 + *(int *)(iVar10 + 0x3201c) * 8;
    puVar9[0x18] = *(undefined4 *)(iVar8 + iVar1 * 4 + 0x20b0);
    puVar9[0x1a] = uVar6;
    *(ulong *)(puVar9 + 0x24) =
         CONCAT44(*(undefined4 *)(iVar4 + 0x320c4),(int)*(undefined8 *)(iVar4 + 0x320c0));
    uVar6 = *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x20f0);
    puVar9[0x20] = *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x20e0);
    puVar9[0x21] = uVar6;
    if (*(int *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x2090) != 0) {
      puVar2 = (undefined8 *)puVar9[0x1a];
      uVar3 = *puVar2;
      uVar6 = *(undefined4 *)(puVar2 + 1);
      uVar7 = *(undefined4 *)((int)puVar2 + 0xc);
      puVar9[0x1c] = (int)uVar3;
      puVar9[0x1d] = (int)((ulong)uVar3 >> 0x20);
      puVar9[0x1e] = uVar6;
      puVar9[0x1f] = uVar7;
      puVar9[0x1a] = puVar9 + 0x1c;
    }
    iVar1 = *(int *)(iVar10 + 0x3201c);
    iVar4 = *(int *)(iVar10 + 0x3201c);
    puVar9[0x22] = *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x2100);
    iVar4 = *(int *)(iVar10 + 0x32080 + iVar4 * 4);
    puVar9[0x23] = *(undefined4 *)(iVar8 + iVar1 * 4 + 0x2110);
    if (iVar4 != 0) {
      FUN_001f50c0(puVar9,param_1);
    }
    puVar9[2] = ~(uint)param_2 >> 0x1f;
  }
  *(int *)(iVar10 + 0x329b0) = *(int *)(iVar10 + 0x329b0) + -1;
  return puVar9;
}

