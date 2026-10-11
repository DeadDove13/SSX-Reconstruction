/* Ghidra pseudocode. PS2 address: 001c31f8. Not validated source. */

void FUN_001c31f8(int param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar2 = *param_2 & 7;
  uVar1 = *(ulong *)(param_1 + 0x220);
  *(ulong *)(param_1 + 0x220) = uVar1 & 0xfffffffffffffff8 | uVar2;
  uVar3 = (param_2[1] & 7) << 4;
  *(ulong *)(param_1 + 0x220) = uVar1 & 0xffffffffffffff88 | uVar2 | uVar3;
  uVar4 = (param_2[2] & 7) << 8;
  *(ulong *)(param_1 + 0x220) = uVar1 & 0xfffffffffffff888 | uVar2 | uVar3 | uVar4;
  uVar5 = (param_2[3] & 7) << 0xc;
  *(ulong *)(param_1 + 0x220) = uVar1 & 0xffffffffffff8888 | uVar2 | uVar3 | uVar4 | uVar5;
  uVar6 = (param_2[4] & 7) << 0x10;
  *(ulong *)(param_1 + 0x220) = uVar1 & 0xfffffffffff88888 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6;
  uVar7 = (param_2[5] & 7) << 0x14;
  *(ulong *)(param_1 + 0x220) =
       uVar1 & 0xffffffffff888888 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  uVar8 = (param_2[6] & 7) << 0x18;
  *(ulong *)(param_1 + 0x220) =
       uVar1 & 0xfffffffff8888888 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8;
  uVar9 = (param_2[7] & 7) << 0x1c;
  *(ulong *)(param_1 + 0x220) =
       uVar1 & 0xffffffff88888888 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9;
  uVar10 = (param_2[8] & 7) << 0x20;
  *(ulong *)(param_1 + 0x220) =
       uVar1 & 0xfffffff888888888 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
       uVar10;
  uVar11 = (param_2[9] & 7) << 0x24;
  *(ulong *)(param_1 + 0x220) =
       uVar1 & 0xffffff8888888888 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
       uVar10 | uVar11;
  uVar12 = (param_2[10] & 7) << 0x28;
  *(ulong *)(param_1 + 0x220) =
       uVar1 & 0xfffff88888888888 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
       uVar10 | uVar11 | uVar12;
  uVar13 = (param_2[0xb] & 7) << 0x2c;
  *(ulong *)(param_1 + 0x220) =
       uVar1 & 0xffff888888888888 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
       uVar10 | uVar11 | uVar12 | uVar13;
  uVar14 = (param_2[0xc] & 7) << 0x30;
  *(ulong *)(param_1 + 0x220) =
       uVar1 & 0xfff8888888888888 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
       uVar10 | uVar11 | uVar12 | uVar13 | uVar14;
  uVar15 = (param_2[0xd] & 7) << 0x34;
  *(ulong *)(param_1 + 0x220) =
       uVar1 & 0xff88888888888888 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
       uVar10 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15;
  uVar16 = (param_2[0xe] & 7) << 0x38;
  *(ulong *)(param_1 + 0x220) =
       uVar1 & 0xf888888888888888 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
       uVar10 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16;
  *(ulong *)(param_1 + 0x220) =
       uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
       uVar13 | uVar14 | uVar15 | uVar16 | (param_2[0xf] & 7) << 0x3c;
  return;
}

