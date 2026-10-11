/* Ghidra pseudocode. PS2 address: 00196ad0. Not validated source. */

undefined4 FUN_00196ad0(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  iVar6 = 0;
  uVar5 = 0;
  do {
    while( true ) {
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0xc);
      iVar3 = 0;
      if (iVar1 <= iVar6) break;
      uVar5 = uVar5 + *(byte *)(puVar4 + 0xc9);
      bVar2 = true;
      if (param_2 < uVar5) goto LAB_00196b50;
      for (iVar3 = 1; iVar6 = iVar6 + 1, iVar3 < 200; iVar3 = iVar3 + 1) {
        if (iVar1 <= iVar6) goto LAB_00196b4c;
        uVar5 = uVar5 + *(byte *)((int)puVar4 + iVar3 + 0x324);
        if (param_2 < uVar5) goto LAB_00196b4c;
      }
      puVar4 = (undefined4 *)*puVar4;
    }
LAB_00196b4c:
    bVar2 = iVar3 < 200;
LAB_00196b50:
    if (bVar2) {
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
      if (iVar1 <= iVar6) {
        return 0;
      }
      *(undefined4 **)(param_1 + 0x10) = puVar4;
      *(uint *)(param_1 + 0x18) = uVar5 - param_2;
      *(int *)(param_1 + 0x14) = iVar6;
      return 1;
    }
    puVar4 = (undefined4 *)*puVar4;
  } while( true );
}

