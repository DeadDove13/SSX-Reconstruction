/* Ghidra pseudocode. PS2 address: 00227360. Not validated source. */

undefined4 FUN_00227360(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  uVar1 = 0xfffffff6;
  if (DAT_0029a888 != '\0') {
    lVar3 = FUN_00226df0();
    uVar1 = 0xfffffff8;
    if (lVar3 != 0) {
      FUN_002250c0();
      piVar4 = (int *)lVar3;
      *param_2 = (int)*(char *)((int)piVar4 + 0x16);
      if ((*(char *)((int)piVar4 + 0x16) != '\0') &&
         (iVar2 = piVar4[7], param_2[1] = *(int *)(*piVar4 + 4), (short)iVar2 != 0)) {
        iVar2 = FUN_0022e858(piVar4[3]);
        if (*(ushort *)(piVar4 + 7) == 0) {
          trap(7);
        }
        param_2[2] = (iVar2 * 1000) / (int)(uint)*(ushort *)(piVar4 + 7);
      }
      FUN_002250a0();
      uVar1 = 0;
    }
  }
  return uVar1;
}

