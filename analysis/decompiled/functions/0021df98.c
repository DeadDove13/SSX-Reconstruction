/* Ghidra pseudocode. PS2 address: 0021df98. Not validated source. */

void FUN_0021df98(undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = DAT_002c3f08;
  puVar4 = (undefined4 *)(param_2 + 0x650);
  iVar5 = 0x50;
  do {
    *puVar4 = uVar2;
    puVar4[4] = uVar2;
    puVar4[8] = uVar2;
    uVar3 = DAT_002c3f0c;
    puVar4 = puVar4 + 0x10;
    bVar1 = 0 < iVar5;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  puVar4 = (undefined4 *)(param_2 + 0x1a90);
  iVar5 = 8;
  do {
    *puVar4 = uVar3;
    puVar4[4] = uVar3;
    puVar4[8] = uVar3;
    puVar4 = puVar4 + 0x10;
    bVar1 = 0 < iVar5;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  return;
}

