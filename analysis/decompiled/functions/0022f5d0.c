/* Ghidra pseudocode. PS2 address: 0022f5d0. Not validated source. */

void FUN_0022f5d0(int param_1,int param_2,long param_3,undefined4 param_4,undefined8 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                 undefined2 param_10)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  
  uStack_ac = 1;
  puVar5 = (undefined1 *)(DAT_002a1c9c + param_1 * 0x54);
  *(undefined4 *)(puVar5 + 0x34) = 0;
  iVar4 = 0;
  *(undefined4 *)(puVar5 + 0x3c) = 0;
  *(undefined4 *)(puVar5 + 0x44) = 0;
  *(undefined4 *)(puVar5 + 0x4c) = 0;
  *(undefined4 *)(puVar5 + 0x50) = 0;
  *(undefined4 *)(puVar5 + 0x40) = 0;
  uStack_a0 = 0;
  if ((param_2 == 8) || (param_2 == 7)) {
    iVar4 = 3;
  }
  else if (param_2 == 9) {
    uStack_ac = 0;
  }
  else if (param_2 == 10) {
    iVar4 = 6;
  }
  else if (param_2 == 4) {
    iVar4 = 9;
  }
  else if (param_2 == 0xe) {
    iVar4 = 0xc;
  }
  else if (param_2 == 0xf) {
    iVar4 = 0xf;
  }
  else {
    iVar4 = 0x12;
    if (param_2 != 0x40) {
      iVar4 = 0;
    }
  }
  if (param_3 == 1) {
    iVar4 = (uint)(0 < param_9) + iVar4;
  }
  else if (param_3 == 0) {
    iVar4 = iVar4 + 2;
  }
  if (*(int *)(&DAT_002a1b4c + iVar4 * 4) != 0) {
    uVar3 = FUN_00225218(*(undefined4 *)(iVar4 * 4 + 0x2a1bac));
    *(undefined4 *)(puVar5 + 0x3c) = uVar3;
    iVar1 = *(int *)(puVar5 + 0x3c);
    pcVar2 = *(code **)(&DAT_002a1b4c + iVar4 * 4);
    iStack_b0 = param_9;
    uStack_a4 = (uint)DAT_0029a88f;
    *(undefined2 *)(iVar1 + 0xc) = 5;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined2 *)(iVar1 + 0xe) = param_10;
    uStack_c0 = param_4;
    uStack_bc = param_6;
    uStack_b8 = param_7;
    uStack_b4 = param_8;
    iStack_a8 = param_1;
    (*pcVar2)(iVar1,&uStack_c0);
    *(undefined4 *)(puVar5 + 0x38) = uStack_a0;
    FUN_00230038(puVar5 + 0x34,*(undefined4 *)(puVar5 + 0x3c));
  }
  *puVar5 = 1;
  return;
}

