/* Ghidra pseudocode. PS2 address: 00257580. Not validated source. */

void FUN_00257580(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uStack_100;
  uint uStack_fc;
  int iStack_f8;
  ulong uStack_f0;
  uint uStack_e0;
  uint uStack_dc;
  int iStack_d8;
  ulong uStack_d0;
  uint uStack_c0;
  uint uStack_bc;
  int iStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uStack_a0 = param_1;
  uStack_98 = param_2;
  FUN_002571e0(&uStack_a0,&uStack_100);
  FUN_002571e0(&uStack_98,&uStack_e0);
  puVar5 = &uStack_c0;
  if (uStack_100 < 2) {
LAB_00257638:
    uStack_fc = (uint)(uStack_fc != uStack_dc);
    puVar5 = &uStack_100;
  }
  else {
    if (1 < uStack_e0) {
      if (uStack_100 == 4) {
        if (uStack_e0 == 2) {
LAB_0025761c:
          puVar5 = (uint *)&DAT_002d54a8;
          goto LAB_002577f4;
        }
        goto LAB_00257638;
      }
      if (uStack_e0 == 4) {
        if ((uStack_100 ^ 2) == 0) goto LAB_0025761c;
      }
      else {
        if ((uStack_100 ^ 2) == 0) goto LAB_00257638;
        if (uStack_e0 != 2) {
          uVar1 = FUN_00256a78(uStack_d0 & 0xffffffff,uStack_f0 & 0xffffffff);
          uVar2 = FUN_00256a78(uStack_d0 >> 0x20,uStack_f0 & 0xffffffff);
          lVar3 = FUN_00256a78(uStack_d0 & 0xffffffff,uStack_f0 >> 0x20);
          lVar4 = FUN_00256a78(uStack_d0 >> 0x20,uStack_f0 >> 0x20);
          uVar7 = uVar2 + lVar3;
          uVar6 = uVar1 + (uVar7 << 0x20);
          iStack_b8 = iStack_f8 + iStack_d8 + 4;
          uStack_bc = (uint)(uStack_fc != uStack_dc);
          for (uStack_b0 = ((ulong)(uVar7 < uVar2) << 0x20 | (ulong)(uVar6 < uVar1)) +
                           (uVar7 >> 0x20) + lVar4; 0x1fffffffffffffff < uStack_b0;
              uStack_b0 = uStack_b0 >> 1) {
            iStack_b8 = iStack_b8 + 1;
            if ((uStack_b0 & 1) != 0) {
              uVar6 = uVar6 >> 1 | 0x8000000000000000;
            }
          }
          while (uStack_b0 < 0x1000000000000000) {
            uStack_b0 = uStack_b0 << 1;
            iStack_b8 = iStack_b8 + -1;
            if ((uVar6 & 0x8000000000000000) != 0) {
              uStack_b0 = uStack_b0 | 1;
            }
            uVar6 = uVar6 << 1;
          }
          if ((uStack_b0 & 0xff) == 0x80) {
            if ((uStack_b0 & 0x100) == 0) {
              if (uVar6 != 0) {
                uStack_b0 = uStack_b0 + 0x80;
              }
            }
            else {
              uStack_b0 = uStack_b0 + 0x80;
            }
          }
          uStack_c0 = 3;
          goto LAB_002577f4;
        }
      }
    }
    uStack_dc = (uint)(uStack_fc != uStack_dc);
    puVar5 = &uStack_e0;
  }
LAB_002577f4:
  FUN_002570b0(puVar5);
  return;
}

