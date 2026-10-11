/* Ghidra pseudocode. PS2 address: 00201890. Not validated source. */

void FUN_00201890(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  lVar3 = FUN_002042b8();
  iVar2 = DAT_002c5778;
  if ((lVar3 == 0) && (*(int *)(param_2 + 0x340) == 1)) {
    iVar5 = (int)param_1;
    iVar1 = *(int *)(DAT_002c5778 + 0x32000);
    uVar4 = *(int *)(iVar5 + 0x8bb74) - 1;
    *(uint *)(iVar5 + 0x8bb74) = uVar4;
    (**(code **)(iVar1 + 0x14))
              (iVar2 + *(short *)(iVar1 + 0x10),~uVar4 >> 0x1f,0x2bcbf8,0x2bca90,0xaea);
    if (*(int *)(iVar5 + 0x8bb74) == 0) {
      FUN_001f5ef8(param_1,*(undefined4 *)(iVar5 + 0x8bb70));
    }
  }
  return;
}

