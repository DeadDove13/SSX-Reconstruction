/* Ghidra pseudocode. PS2 address: 001859f8. Not validated source. */

uint FUN_001859f8(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 auStack_90 [16];
  
  uVar10 = 0;
  if (param_1 != 0) {
    uVar2 = FUN_0023ba54(param_1,4);
    pbVar9 = (byte *)((int)param_1 + 2);
    if ((uVar2 & 1) != 0) {
      pbVar9 = (byte *)((int)param_1 + 5);
    }
    pbVar8 = pbVar9 + 3;
    uVar10 = (uint)pbVar9[2] | (uint)*pbVar9 * 0x10000 + (uint)pbVar9[1] * 0x100;
    if (param_3 != 0) {
      uVar3 = FUN_0023ba54(param_2 + uVar10,4);
      FUN_0023ba9c(auStack_90,uVar3,4);
      do {
        while( true ) {
          uVar2 = FUN_0023ba54(pbVar8,4);
          uVar7 = (uint)uVar2;
          if ((uVar2 & 0x80) != 0) break;
          pbVar9 = pbVar8 + 2;
          pbVar8 = pbVar9 + (uVar7 & 3);
          uVar3 = FUN_0023ba54(pbVar9,4);
          pbVar9 = param_2 + (uVar7 & 3);
          FUN_0023ba9c(param_2,uVar3,4);
          iVar5 = ((uint)((uVar2 & 0xffffffff) >> 2) & 7) + 3;
          lVar4 = (uVar2 & 0x60) * 8 + ((uVar2 & 0xffffffff) >> 8 & 0xff) + 1;
LAB_00185bf8:
          param_2 = (byte *)FUN_00185988(pbVar9,lVar4,iVar5);
        }
        if ((uVar2 & 0x40) == 0) {
          uVar6 = (uint)((uVar2 & 0xffffffff) >> 0xe) & 3;
          uVar3 = FUN_0023ba54(pbVar8 + 3,4);
          pbVar9 = param_2 + uVar6;
          FUN_0023ba9c(param_2,uVar3,4);
          pbVar8 = pbVar8 + 3 + uVar6;
          iVar5 = (uVar7 & 0x3f) + 4;
          lVar4 = ((uVar2 & 0xffffffff) >> 8 & 0x3f) * 0x100 +
                  ((uVar2 & 0xffffffff) >> 0x10 & 0xff) + 1;
          goto LAB_00185bf8;
        }
        if ((uVar2 & 0x20) == 0) {
          pbVar9 = pbVar8 + 4;
          pbVar8 = pbVar9 + (uVar7 & 3);
          uVar3 = FUN_0023ba54(pbVar9,4);
          pbVar9 = param_2 + (uVar7 & 3);
          FUN_0023ba9c(param_2,uVar3,4);
          iVar5 = ((uint)((uVar2 & 0xc) << 6) | (uint)(uVar2 >> 0x18) & 0xff) + 5;
          lVar4 = (uVar2 & 0x10) * 0x1000 + ((uVar2 & 0xffffffff) >> 0x10 & 0xff) +
                  (uVar2 & 0xff00) + 1;
          goto LAB_00185bf8;
        }
        pbVar9 = pbVar8 + 1;
        if (0xfb < (uVar2 & 0xff)) {
          uVar7 = uVar7 & 3;
          if ((uVar2 & 3) != 0) {
            do {
              bVar1 = *pbVar9;
              uVar7 = uVar7 - 1;
              pbVar9 = pbVar9 + 1;
              *param_2 = bVar1;
              param_2 = param_2 + 1;
            } while (uVar7 != 0);
          }
          uVar3 = FUN_0023ba54(auStack_90,4);
          FUN_0023ba9c(param_2,uVar3,4);
          return uVar10;
        }
        lVar4 = (uVar2 & 0x1f) + 1 << 0x22;
        iVar5 = (int)((ulong)lVar4 >> 0x20);
        pbVar8 = pbVar9 + iVar5;
        FUN_001858e0(param_2,pbVar9,lVar4 >> 0x20);
        param_2 = param_2 + iVar5;
      } while( true );
    }
  }
  return uVar10;
}

