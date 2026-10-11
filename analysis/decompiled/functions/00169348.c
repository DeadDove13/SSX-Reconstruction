/* Ghidra pseudocode. PS2 address: 00169348. Not validated source. */

undefined8 FUN_00169348(undefined8 param_1,undefined8 param_2,int param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if ((*(int *)(iVar5 + 0x27c) == 0) ||
     (*(float *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x4c) + 0xcc) * 8 + DAT_00299ce0) + 0xc) == 0.0)
     ) {
    return 0;
  }
  if (param_4 < 7) {
                    /* WARNING: Could not recover jumptable at 0x001693c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&PTR_LAB_002b0270)[(int)param_4])();
    return uVar4;
  }
  if (*(int *)(iVar5 + 0x140) != 0) {
    iVar1 = *(int *)(iVar5 + 0x154);
    iVar3 = iVar1 + 1;
    *(int *)(iVar5 + 0x154) = iVar3;
    if (0x14 < iVar3) {
      *(undefined4 *)(iVar5 + 0x154) = 0x14;
      return 0;
    }
    *(int *)(iVar1 * 0xc + iVar5 + 0x158) = (int)param_2;
    *(int *)((*(int *)(iVar5 + 0x154) + -1) * 0xc + iVar5 + 0x160) = param_3;
    *(undefined4 *)((*(int *)(iVar5 + 0x154) + -1) * 0xc + iVar5 + 0x15c) = 4;
    return 1;
  }
  uVar2 = FUN_00168f18(param_1,param_2);
  *(undefined4 *)(iVar5 + 0x4c) = uVar2;
  FUN_00168f68(0,0xbf800000,(float)param_3,param_1);
  *(undefined4 *)(iVar5 + 0x140) = 4;
  *(float *)(iVar5 + 0xb4) = (float)DAT_002859d4;
  return 1;
}

