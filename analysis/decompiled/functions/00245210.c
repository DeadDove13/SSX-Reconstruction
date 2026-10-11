/* Ghidra pseudocode. PS2 address: 00245210. Not validated source. */

undefined4 FUN_00245210(ulong *param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  ushort *puVar6;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lVar2 = FUN_00244e00();
  uVar1 = 0;
  if (lVar2 == 0) {
    uVar5 = 0;
    puVar6 = (ushort *)((int)param_1 + 0x21c);
    puVar4 = param_1;
    do {
      uStack_60 = *puVar4;
      uStack_58 = (undefined4)puVar4[1];
      uStack_54 = *(undefined4 *)((int)puVar4 + 0xc);
      uVar3 = uVar5 + 0x400;
      uVar5 = uVar5 + 1;
      FUN_00244e30(uVar3 & 0xffff,&uStack_60);
      puVar4 = puVar4 + 2;
    } while (uVar5 < 0x20);
    uStack_60 = (ulong)(uint)param_1[0x40];
    uStack_58 = 0;
    uStack_54 = 0;
    FUN_00244e30(0x430,&uStack_60);
    uStack_60 = (ulong)*(uint *)((int)param_1 + 0x204);
    uVar5 = 0;
    FUN_00244e30(0x431,&uStack_60);
    uStack_60 = (ulong)(uint)param_1[0x41];
    FUN_00244e30(0x432,&uStack_60);
    uStack_60 = (ulong)*(uint *)((int)param_1 + 0x20c);
    FUN_00244e30(0x434,&uStack_60);
    uStack_60 = (ulong)(uint)param_1[0x42];
    FUN_00244e30(0x435,&uStack_60);
    uStack_60 = (ulong)*(uint *)((int)param_1 + 0x214);
    FUN_00244e30(0x436,&uStack_60);
    uStack_60 = (ulong)(uint)param_1[0x43];
    FUN_00244e30(0x437,&uStack_60);
    do {
      uStack_60 = (ulong)*puVar6;
      uVar3 = uVar5 + 0x420;
      uVar5 = uVar5 + 1;
      FUN_00244e30(uVar3 & 0xffff,&uStack_60);
      puVar6 = puVar6 + 1;
    } while (uVar5 < 0x10);
    uVar1 = 1;
  }
  return uVar1;
}

