/* Ghidra pseudocode. PS2 address: 0024fb08. Not validated source. */

void FUN_0024fb08(int param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(DAT_002a52a4 + 0x40);
  if (param_2 != 0) {
    if (DAT_002a546c == 3) {
      puVar2 = PTR_DAT_002a52c0;
      if (DAT_002a543c == 3) {
        puVar2 = PTR_DAT_002a52c8;
      }
      FUN_00250408(puVar2,param_1 + -1);
      iVar4 = *(int *)(iVar1 + 0xf8);
      goto LAB_0024fba0;
    }
    puVar2 = PTR_DAT_002a52cc;
    puVar3 = PTR_DAT_002a52d8;
    if (DAT_002a543c == 3) {
      puVar2 = PTR_DAT_002a52d4;
      puVar3 = PTR_DAT_002a52e0;
    }
    FUN_00250520(puVar2,puVar3,param_1 + -1);
  }
  iVar4 = *(int *)(iVar1 + 0xf8);
LAB_0024fba0:
  if (iVar4 == 1) {
    *(undefined4 *)(iVar1 + 0xf8) = 2;
  }
  return;
}

