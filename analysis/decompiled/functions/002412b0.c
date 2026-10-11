/* Ghidra pseudocode. PS2 address: 002412b0. Not validated source. */

int FUN_002412b0(undefined8 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  
  lVar7 = (long)*(char *)(param_3 + 3);
  iVar5 = 1;
  if (lVar7 < 5) {
    lVar3 = 0;
    if (0 < lVar7) {
      puVar6 = (uint *)(param_3 + 8);
      while( true ) {
        iVar2 = (int)lVar3;
        bVar1 = *(byte *)(param_2 + 0xc + iVar2);
        iVar5 = 0;
        if (0x1f < bVar1) break;
        uVar4 = 1 << (bVar1 & 0x1f);
        bVar1 = *(byte *)(param_3 + 4 + iVar2);
        if ((uVar4 & *puVar6) != 0) {
          if ((bVar1 & 0xf) == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = 1;
            if ((uVar4 & *(uint *)((bVar1 & 0xf) * 4 + param_4)) == 0) {
              iVar5 = 0;
            }
          }
        }
        lVar3 = (long)(iVar2 + 1);
        if (iVar5 == 0) {
          return 0;
        }
        puVar6 = puVar6 + 1;
        if (lVar7 <= lVar3) {
          return iVar5;
        }
      }
    }
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}

