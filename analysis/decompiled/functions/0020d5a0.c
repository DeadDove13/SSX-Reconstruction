/* Ghidra pseudocode. PS2 address: 0020d5a0. Not validated source. */

void FUN_0020d5a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  uVar1 = 0;
  uStack_80 = 0x3f800000;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0x3f800000;
  FUN_001bdb68(*(undefined4 *)(param_1 + 0x20),0x295e90,param_1 + 0x10,&uStack_80,0xffffffffffffffff
              );
  puVar3 = (undefined4 *)(param_1 + 0x40);
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar2 = param_1 + 0x30;
    do {
      if ((*(int *)(param_1 + 0x24) >> (uVar1 & 0x1f) & 1U) != 0) {
        uStack_80 = 0x3f800000;
        uStack_7c = 0x3f800000;
        uStack_78 = 0;
        uStack_74 = 0;
        FUN_001bdb68(*puVar3,0x295e90,iVar2,&uStack_80,0xffffffffffffffff);
      }
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 8;
      iVar2 = iVar2 + 0x20;
    } while ((int)uVar1 < *(int *)(param_1 + 0x28));
  }
  return;
}

