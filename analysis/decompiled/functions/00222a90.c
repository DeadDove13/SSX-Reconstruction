/* Ghidra pseudocode. PS2 address: 00222a90. Not validated source. */

void FUN_00222a90(undefined8 param_1,int param_2)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  int iVar7;
  
  for (iVar7 = 0; iVar3 = (int)*(short *)(*(int *)param_1 + 0x42), iVar7 < iVar3 * iVar3;
      iVar7 = iVar7 + 1) {
    iVar3 = *(int *)(param_2 + 4) + iVar7 * 0x30;
    if ((long)*(short *)(iVar3 + 4) != 0) {
      if ((DAT_0027ba88 == 3) || (lVar5 = (long)*(short *)(iVar3 + 2), DAT_0027ba88 == 5)) {
        lVar5 = (long)*(short *)(iVar3 + 4);
      }
      if (0 < lVar5) {
        puVar6 = (ushort *)(*(int *)(param_2 + 8) + *(short *)(iVar3 + 0x10) * 4 + 2);
        uVar1 = *puVar6;
        while( true ) {
          puVar6 = puVar6 + 2;
          lVar5 = (long)((int)lVar5 + -1);
          iVar4 = *(int *)(param_2 + 0xc) + (uint)uVar1 * 0x110;
          iVar3 = *(int *)(iVar4 + 0x100);
          *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) | 0x100;
          if (iVar3 == 0) {
            lVar2 = FUN_00222970(param_1,iVar4,0);
            if (lVar2 != -1) {
              FUN_00124338(lVar2,iVar4);
            }
          }
          else {
            lVar2 = (**(code **)(*(int *)(iVar3 + 8) + 100))
                              (iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0x60));
            if ((lVar2 != 0) &&
               (iVar3 = *(int *)(*(int *)(iVar4 + 0x100) + 8),
               lVar2 = (**(code **)(iVar3 + 0x7c))
                                 (*(int *)(iVar4 + 0x100) + (int)*(short *)(iVar3 + 0x78)),
               lVar2 != 0)) {
              iVar3 = *(int *)(*(int *)(iVar4 + 0x100) + 8);
              (**(code **)(iVar3 + 0x74))(*(int *)(iVar4 + 0x100) + (int)*(short *)(iVar3 + 0x70));
            }
          }
          if (lVar5 == 0) break;
          uVar1 = *puVar6;
        }
      }
    }
  }
  return;
}

