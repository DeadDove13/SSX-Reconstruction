/* Ghidra pseudocode. PS2 address: 00242990. Not validated source. */

void FUN_00242990(undefined2 *param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  if (DAT_002c5b20 != (code *)0x0) {
    bVar2 = *(byte *)(param_1 + 3);
    cVar1 = *(char *)((int)param_1 + 7);
    uVar5 = param_1[param_2 + 6];
    lVar10 = 0;
    if (0 < (long)cVar1) {
      iVar6 = 0;
      do {
        puVar7 = (undefined1 *)((int)param_1 + iVar6 + ((uint)bVar2 * 2 + 3 & 0x3fc) + 0xc);
        bVar3 = puVar7[1];
        uVar4 = *puVar7;
        uVar9 = bVar3 & 0xf;
        switch(bVar3 >> 4) {
        case 0:
        case 3:
          lVar8 = FUN_00242880(param_1 + (uint)uVar5 * 2,uVar9);
          if (lVar8 != 0) {
            (*DAT_002c5b20)(*param_1,uVar4,*(undefined4 *)(uVar9 * 4 + param_3));
          }
        }
        iVar6 = (int)lVar10 + 1;
        lVar10 = (long)iVar6;
        iVar6 = iVar6 * 2;
      } while (lVar10 < cVar1);
    }
  }
  return;
}

