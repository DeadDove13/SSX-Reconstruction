/* Ghidra pseudocode. PS2 address: 00243a00. Not validated source. */

void FUN_00243a00(short param_1,ushort param_2,ushort param_3,ushort param_4)

{
  undefined8 uVar1;
  ushort *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (ushort *)FUN_00243b40();
    REG_GS_CSR = 0x200;
    *puVar2 = param_2;
    uVar1 = REG_GS_CSR;
    puVar2[1] = param_3;
    puVar2[3] = (ushort)((ulong)uVar1 >> 0x10) & 0xff;
    GsPutIMR(0xff00);
    puVar2[2] = (ushort)(param_4 != 0);
    if (*(int *)(puVar2 + 4) != 0) {
      FUN_00265040(2);
      RemoveIntcHandler(2,*(undefined4 *)(puVar2 + 6));
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
    }
    SetGsCrt(param_2 & 1,param_3 & 0xff,param_4 & 1);
    return;
  }
  if (param_1 == 1) {
    REG_GS_CSR = 0x100;
  }
  return;
}

