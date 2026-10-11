/* Ghidra pseudocode. PS2 address: 00222d00. Not validated source. */

void FUN_00222d00(undefined8 param_1,int param_2)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ushort *puVar5;
  int iVar6;
  
  for (iVar6 = 0; iVar3 = (int)*(short *)(*(int *)param_1 + 0x42), iVar6 < iVar3 * iVar3;
      iVar6 = iVar6 + 1) {
    iVar3 = *(int *)(param_2 + 4) + iVar6 * 0x30;
    if ((long)*(short *)(iVar3 + 4) != 0) {
      if ((DAT_0027ba88 == 3) || (lVar4 = (long)*(short *)(iVar3 + 2), DAT_0027ba88 == 5)) {
        lVar4 = (long)*(short *)(iVar3 + 4);
      }
      if (0 < lVar4) {
        puVar5 = (ushort *)(*(int *)(param_2 + 8) + *(short *)(iVar3 + 0x10) * 4 + 2);
        uVar1 = *puVar5;
        while( true ) {
          puVar5 = puVar5 + 2;
          lVar4 = (long)((int)lVar4 + -1);
          iVar3 = *(int *)(param_2 + 0xc) + (uint)uVar1 * 0x110;
          *(uint *)(iVar3 + 0xe8) = *(uint *)(iVar3 + 0xe8) & 0xfffffeff;
          if ((*(int *)(iVar3 + 0x100) == 0) || (*(int *)(*(int *)(iVar3 + 0x100) + 0x14) != 5)) {
            lVar2 = FUN_00222970(param_1,iVar3,2);
            if (lVar2 == -1) {
              iVar3 = *(int *)(iVar3 + 0x100);
              if (iVar3 != 0) {
                (**(code **)(*(int *)(iVar3 + 8) + 0xbc))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0xb8));
              }
            }
            else {
              FUN_00124338(lVar2,iVar3);
            }
          }
          if (lVar4 == 0) break;
          uVar1 = *puVar5;
        }
      }
    }
  }
  return;
}

