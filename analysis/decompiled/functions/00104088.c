/* Ghidra pseudocode. PS2 address: 00104088. Not validated source. */

void FUN_00104088(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  iVar5 = 0;
  FUN_0021dd00(0x299d04);
  while( true ) {
    iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c);
    iVar3 = iVar5 * 4;
    if (iVar1 <= iVar5) break;
    iVar5 = iVar5 + 1;
    FUN_00109d28(*(undefined4 *)(*(int *)(DAT_002859e4 + 0x14) + iVar3 + 200));
  }
  bVar2 = false;
  iVar5 = 0;
  while( true ) {
    if (iVar1 <= iVar5) {
      return;
    }
    iVar3 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + iVar5 * 4 + 200);
    if (*(int *)(iVar3 + 0x36c) != *(int *)(iVar3 + 0xf0)) break;
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x24) < 2) {
      bVar2 = true;
      break;
    }
    iVar5 = iVar5 + 1;
  }
  iVar5 = 0;
  FUN_001045a0(param_1);
  if (0 < iVar1) {
    do {
      iVar3 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      FUN_00104418(param_1,*(int *)(*(int *)(DAT_002859e4 + 0x14) + iVar3 + 200) + 0xc0);
    } while (iVar5 < iVar1);
  }
  if (bVar2) {
    puVar4 = (undefined4 *)FUN_0015bbb0(*(undefined4 *)(DAT_002859e4 + 0xa0));
    uStack_80 = *puVar4;
    uStack_7c = puVar4[1];
    uStack_78 = puVar4[2];
    uStack_74 = 0x3f800000;
    FUN_00104418(param_1,&uStack_80);
  }
  FUN_001045d8(param_1);
  return;
}

