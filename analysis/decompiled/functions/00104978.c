/* Ghidra pseudocode. PS2 address: 00104978. Not validated source. */

void FUN_00104978(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  iVar3 = DAT_0029a7b0;
  if (*(int *)(param_1 + 0x390) == 0) {
    iVar4 = DAT_002859e4 + *(int *)(DAT_002859e4 + 0x290) * 0x80 + 0x90;
    uStack_b0 = *(undefined4 *)(iVar4 + 0x20);
    uStack_ac = *(undefined4 *)(iVar4 + 0x24);
    uStack_a8 = *(undefined4 *)(iVar4 + 0x28);
    lVar5 = FUN_00165780(DAT_0029a7b0);
    if (lVar5 != 0) {
      iVar4 = (int)lVar5;
      if ((*(int *)(iVar4 + 4) != 0) && (iVar8 = 0, 0 < *(int *)(iVar4 + 4))) {
        iVar7 = *(int *)(iVar4 + 8);
        do {
          iVar7 = *(int *)(iVar3 + 0x2c) + *(int *)(iVar8 * 4 + iVar7) * 0x7c;
          lVar5 = FUN_00165150(iVar7,&uStack_b0);
          uVar1 = *(uint *)(iVar7 + 0x40);
          if (lVar5 == 0) {
            *(uint *)(iVar7 + 0x40) = uVar1 & 0xfffffffe;
LAB_00104b50:
            iVar7 = *(int *)(iVar4 + 4);
          }
          else {
            *(uint *)(iVar7 + 0x40) = uVar1 | 1;
            if ((uVar1 & 2) != 0) goto LAB_00104b50;
            lVar5 = FUN_002107c8(0x298590,0x1c,0x40000000,0x2a70b8,0,0);
            if (lVar5 != 0) {
              FUN_0023bbd0(lVar5,0xffffffffdeadc0de,0x1c);
            }
            lVar5 = FUN_00164bd0(lVar5,10);
            if (lVar5 == 0) goto LAB_00104b50;
            iVar6 = (int)lVar5;
            lVar5 = (**(code **)(*(int *)(iVar6 + 8) + 0x54))
                              (iVar6 + *(short *)(*(int *)(iVar6 + 8) + 0x50),iVar7);
            if (lVar5 == 0) {
              (**(code **)(*(int *)(iVar6 + 8) + 0xc))
                        (iVar6 + *(short *)(*(int *)(iVar6 + 8) + 8),3);
              iVar7 = *(int *)(iVar4 + 4);
            }
            else {
              lVar5 = (**(code **)(*(int *)(iVar6 + 8) + 100))
                                (iVar6 + *(short *)(*(int *)(iVar6 + 8) + 0x60),iVar7);
              if (lVar5 == 0) {
                iVar2 = *(int *)(iVar6 + 8);
                *(uint *)(iVar7 + 0x40) = *(uint *)(iVar7 + 0x40) & 0xfffffffe;
                (**(code **)(iVar2 + 0xc))(iVar6 + *(short *)(iVar2 + 8),3);
                iVar7 = *(int *)(iVar4 + 4);
              }
              else {
                iVar7 = *(int *)(iVar4 + 4);
              }
            }
          }
          iVar8 = iVar8 + 1;
          if (iVar7 <= iVar8) break;
          iVar7 = *(int *)(iVar4 + 8);
        } while( true );
      }
    }
    *(undefined4 *)(param_1 + 0x378) = uStack_b0;
    *(undefined4 *)(param_1 + 0x380) = uStack_a8;
    *(undefined4 *)(param_1 + 0x37c) = uStack_ac;
  }
  return;
}

