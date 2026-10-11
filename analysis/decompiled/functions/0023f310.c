/* Ghidra pseudocode. PS2 address: 0023f310. Not validated source. */

int FUN_0023f310(int param_1,ushort *param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort auStack_70 [8];
  
  iVar2 = FUN_0023b9ec(param_1 + 2,3);
  iVar3 = FUN_0023b9ec(param_1 + 6,2);
  if (param_3 != 0) {
    puVar5 = (ushort *)(param_1 + 8);
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        iVar6 = 0;
        if (0 < iVar3) {
          do {
            auStack_70[0] = *puVar5;
            auStack_70[1] = puVar5[1];
            if (auStack_70[1] < auStack_70[0]) {
              auStack_70[2] =
                   (ushort)((auStack_70[0] & 0x7c00) * 0xaaaa + (auStack_70[1] & 0x7c00) * 0x5556 >>
                           0x10) & 0x7c00 |
                   (ushort)((auStack_70[0] & 0x1f) * 0xaaaa + (auStack_70[1] & 0x1f) * 0x5556 >>
                           0x10) & 0x1f |
                   (ushort)((auStack_70[0] & 0x3e0) * 0xaaaa + (auStack_70[1] & 0x3e0) * 0x5556 >>
                           0x10) & 0x3e0 | 0x8000;
              auStack_70[3] =
                   (ushort)((auStack_70[0] & 0x7c00) * 0x5556 + (auStack_70[1] & 0x7c00) * 0xaaaa >>
                           0x10) & 0x7c00 |
                   (ushort)((auStack_70[0] & 0x1f) * 0x5556 + (auStack_70[1] & 0x1f) * 0xaaaa >>
                           0x10) & 0x1f |
                   (ushort)((auStack_70[0] & 0x3e0) * 0x5556 + (auStack_70[1] & 0x3e0) * 0xaaaa >>
                           0x10) & 0x3e0 | 0x8000;
            }
            else {
              auStack_70[3] = 0;
              auStack_70[2] =
                   (ushort)((auStack_70[0] & 0x7c00) + (auStack_70[1] & 0x7c00) >> 1) & 0x7c00 |
                   (ushort)((auStack_70[0] & 0x1f) + (auStack_70[1] & 0x1f) >> 1) |
                   (ushort)((auStack_70[0] & 0x3e0) + (auStack_70[1] & 0x3e0) >> 1) & 0x3e0 | 0x8000
              ;
            }
            bVar1 = (byte)puVar5[2];
            puVar4 = param_2 + iVar3;
            iVar6 = iVar6 + 4;
            *param_2 = auStack_70[bVar1 & 3];
            param_2[1] = *(ushort *)((int)auStack_70 + (bVar1 >> 1 & 6));
            param_2[2] = *(ushort *)((int)auStack_70 + (bVar1 >> 3 & 6));
            param_2[3] = auStack_70[bVar1 >> 6];
            param_2 = param_2 + 4;
            bVar1 = *(byte *)((int)puVar5 + 5);
            *puVar4 = auStack_70[bVar1 & 3];
            puVar4[1] = *(ushort *)((int)auStack_70 + (bVar1 >> 1 & 6));
            puVar4[2] = *(ushort *)((int)auStack_70 + (bVar1 >> 3 & 6));
            puVar4[3] = auStack_70[bVar1 >> 6];
            puVar4 = puVar4 + iVar3;
            bVar1 = (byte)puVar5[3];
            *puVar4 = auStack_70[bVar1 & 3];
            puVar4[1] = *(ushort *)((int)auStack_70 + (bVar1 >> 1 & 6));
            puVar4[2] = *(ushort *)((int)auStack_70 + (bVar1 >> 3 & 6));
            puVar4[3] = auStack_70[bVar1 >> 6];
            puVar4 = puVar4 + iVar3;
            bVar1 = *(byte *)((int)puVar5 + 7);
            puVar5 = puVar5 + 4;
            *puVar4 = auStack_70[bVar1 & 3];
            puVar4[1] = *(ushort *)((int)auStack_70 + (bVar1 >> 1 & 6));
            puVar4[2] = *(ushort *)((int)auStack_70 + (bVar1 >> 3 & 6));
            puVar4[3] = auStack_70[bVar1 >> 6];
          } while (iVar6 < iVar3);
        }
        iVar7 = iVar7 + iVar3 * 8;
        param_2 = param_2 + iVar3 * 3;
      } while (iVar7 < iVar2);
    }
  }
  return iVar2;
}

