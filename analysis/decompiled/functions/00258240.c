/* Ghidra pseudocode. PS2 address: 00258240. Not validated source. */

void FUN_00258240(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uStack_60;
  uint uStack_5c;
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [3];
  
  uStack_30 = param_1;
  auStack_2c[0] = param_2;
  FUN_00257eb8(&uStack_30,&uStack_60);
  FUN_00257eb8(auStack_2c,&uStack_50);
  puVar2 = &uStack_40;
  if (uStack_60 < 2) {
LAB_002582dc:
    uStack_5c = (uint)(uStack_5c != uStack_4c);
    puVar2 = &uStack_60;
  }
  else {
    if (1 < uStack_50) {
      if (uStack_60 == 4) {
        if (uStack_50 == 2) {
LAB_002582c0:
          puVar2 = (uint *)&DAT_002d54c0;
          goto LAB_0025841c;
        }
        goto LAB_002582dc;
      }
      if (uStack_50 == 4) {
        if ((uStack_60 ^ 2) == 0) goto LAB_002582c0;
      }
      else {
        if ((uStack_60 ^ 2) == 0) goto LAB_002582dc;
        if (uStack_50 != 2) {
          uVar3 = (ulong)uStack_54 * (ulong)uStack_44;
          uVar1 = (uint)(uVar3 >> 0x20);
          uStack_3c = (uint)(uStack_5c != uStack_4c);
          iStack_38 = iStack_58 + iStack_48 + 2;
          uVar4 = (uint)uVar3;
          uVar3 = (long)((ulong)uVar1 << 0x20 | uVar3 & 0xffffffff) >> 0x20;
          if ((long)uVar3 < 0) {
            iStack_38 = iStack_58 + iStack_48 + 3;
            if ((uVar3 & 1) != 0) {
              uVar4 = uVar4 >> 1 | 0x80000000;
            }
            uVar3 = (ulong)(int)(uVar1 >> 1);
          }
          while (iStack_34 = (int)uVar3, uVar3 < 0x40000000) {
            iStack_38 = iStack_38 + -1;
            uVar3 = (long)(iStack_34 << 1);
            if ((uVar4 & 0x80000000) != 0) {
              uVar3 = (long)(iStack_34 << 1) | 1;
            }
            uVar4 = uVar4 << 1;
          }
          if ((uVar3 & 0x7f) == 0x40) {
            if ((uVar3 & 0x80) == 0) {
              if (uVar4 != 0) {
                iStack_34 = iStack_34 + 0x40;
              }
            }
            else {
              iStack_34 = iStack_34 + 0x40;
            }
          }
          uStack_40 = 3;
          goto LAB_0025841c;
        }
      }
    }
    uStack_4c = (uint)(uStack_5c != uStack_4c);
    puVar2 = &uStack_50;
  }
LAB_0025841c:
  FUN_00257da8(puVar2);
  return;
}

