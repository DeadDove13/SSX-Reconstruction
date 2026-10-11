/* Ghidra pseudocode. PS2 address: 00241640. Not validated source. */

uint FUN_00241640(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  
  iVar11 = -1;
  uVar8 = 0;
  sVar2 = *(short *)param_2;
  iVar3 = *(int *)(sVar2 * 4 + DAT_002c5b30);
  bVar1 = *(byte *)(iVar3 + 5);
  iVar7 = 0;
  if (bVar1 != 0) {
    iStack_a8 = param_1 + 0x62;
    lVar9 = 0;
    iVar10 = iVar11;
    uStack_b0 = param_3;
    uStack_ac = param_4;
    do {
      lVar5 = FUN_00243898(iVar3,iVar7,auStack_c0);
      lVar6 = lVar9;
      iVar11 = iVar10;
      if (((lVar5 != 0) && (lVar5 = FUN_002412b0(sVar2,auStack_c0,uStack_b0,uStack_ac), lVar5 != 0))
         && (lVar5 = FUN_002415a8(param_2,iVar3,iVar7), lVar5 != 0)) {
        lVar6 = FUN_00243138(iVar3,iVar7);
        if (lVar6 < 1) {
          bVar4 = *(byte *)(param_1 + 0x61) < 100;
          if (bVar4) {
            *(char *)(iStack_a8 + (uint)*(byte *)(param_1 + 0x61)) = (char)iVar7;
            *(char *)(param_1 + 0x61) = *(char *)(param_1 + 0x61) + '\x01';
          }
          uVar8 = uVar8 + bVar4;
          lVar6 = lVar9;
        }
        else {
          iVar11 = iVar7;
          if (lVar6 <= lVar9) {
            lVar6 = lVar9;
            iVar11 = iVar10;
          }
        }
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar6;
      iVar10 = iVar11;
    } while (iVar7 < (int)(uint)bVar1);
  }
  if ((uVar8 == 0) && (iVar11 != -1)) {
    bVar4 = *(byte *)(param_1 + 0x61) < 100;
    if (bVar4) {
      *(char *)(param_1 + (uint)*(byte *)(param_1 + 0x61) + 0x62) = (char)iVar11;
      *(char *)(param_1 + 0x61) = *(char *)(param_1 + 0x61) + '\x01';
    }
    uVar8 = (uint)bVar4;
  }
  return uVar8;
}

