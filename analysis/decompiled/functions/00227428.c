/* Ghidra pseudocode. PS2 address: 00227428. Not validated source. */

undefined4 FUN_00227428(ulong param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (DAT_0029a888 == '\0') {
    uVar3 = 0xfffffff6;
  }
  else {
    uVar3 = 0xfffffff8;
    if (-1 < (long)param_1) {
      lVar4 = FUN_00226df0(param_1 & 0xff);
      uVar3 = 0xfffffff8;
      if (lVar4 != 0) {
        FUN_002250c0();
        iVar2 = FUN_0022e958(param_1);
        if (iVar2 == 0) {
          *param_2 = 3;
        }
        else if (*(int *)(iVar2 + 8) < 0) {
          *param_2 = 0;
        }
        else {
          piVar6 = (int *)lVar4;
          uVar3 = 1;
          if (*piVar6 == iVar2) {
            uVar3 = 2;
            uVar1 = *(ushort *)(piVar6 + 7);
          }
          else {
            uVar1 = *(ushort *)(piVar6 + 8);
          }
          *param_2 = uVar3;
          uVar5 = FUN_0022dbc0(*(undefined4 *)(iVar2 + 0x14),1000);
          uVar3 = FUN_0022dcf8(uVar5,uVar1);
          param_2[1] = uVar3;
          uVar5 = FUN_0022dbc0(*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14),1000);
          uVar3 = FUN_0022dcf8(uVar5,uVar1);
          param_2[2] = uVar3;
          if (uVar1 == 0) {
            trap(7);
          }
          param_2[3] = (uint)(*(int *)(iVar2 + 0x1c) * 1000) / (uint)uVar1;
        }
        FUN_002250a0();
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

