/* Ghidra pseudocode. PS2 address: 001e89c8. Not validated source. */

void FUN_001e89c8(undefined8 param_1,long param_2,int param_3,long param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0x34) && (param_4 != 0)) {
    iVar1 = (int)param_2 * 0x10;
    iVar2 = *(int *)(param_3 + 0xc) + *param_6 * 0x34;
    FUN_001ef168(param_4,(&PTR_s_BodyBasic5000_00296bb4)[(int)param_2 * 4],
                 *(int *)(&DAT_00296bb0 + iVar1),iVar2);
    if (*(int *)(&DAT_00296bb8 + iVar1) != 0) {
      *(undefined4 *)(iVar2 + 0xc) = 1;
    }
    iVar2 = *param_6;
    iVar1 = *(int *)(&DAT_00296bb0 + iVar1);
    *(int *)(param_5 + iVar2 * 4 + 0x6588) = iVar1;
    *(int *)(param_5 + iVar1 * 4 + 0x65cc) = iVar2;
    *param_6 = *param_6 + 1;
  }
  return;
}

