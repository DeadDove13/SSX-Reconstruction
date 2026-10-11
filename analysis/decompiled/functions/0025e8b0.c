/* Ghidra pseudocode. PS2 address: 0025e8b0. Not validated source. */

undefined4 FUN_0025e8b0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  int *piVar5;
  
  puVar4 = PTR_DAT_002a6614;
  piVar5 = (int *)param_1;
  puVar1 = (undefined *)piVar5[0x15];
  if (puVar1 == (undefined *)0x0) {
    piVar5[0x15] = (int)PTR_DAT_002a6614;
    iVar2 = *(int *)(puVar4 + 0x38);
  }
  else {
    iVar2 = *(int *)(puVar1 + 0x38);
    puVar4 = puVar1;
  }
  if (iVar2 == 0) {
    FUN_00260098(puVar4);
    uVar3 = *(ushort *)(piVar5 + 3);
  }
  else {
    uVar3 = *(ushort *)(piVar5 + 3);
  }
  if ((uVar3 & 8) == 0) {
    if ((uVar3 & 0x10) == 0) {
      return 0xffffffff;
    }
    if ((uVar3 & 4) == 0) {
      iVar2 = piVar5[4];
    }
    else {
      if ((int *)piVar5[0xc] != (int *)0x0) {
        if ((int *)piVar5[0xc] == piVar5 + 0x10) {
          piVar5[0xc] = 0;
        }
        else {
          FUN_00260248(piVar5[0x15]);
          uVar3 = *(ushort *)(piVar5 + 3);
          piVar5[0xc] = 0;
        }
      }
      iVar2 = piVar5[4];
      uVar3 = uVar3 & 0xffdb;
      piVar5[1] = 0;
      *(ushort *)(piVar5 + 3) = uVar3;
      *piVar5 = iVar2;
    }
    *(ushort *)(piVar5 + 3) = uVar3 | 8;
  }
  else {
    iVar2 = piVar5[4];
  }
  if (iVar2 == 0) {
    FUN_00260c38(param_1);
    uVar3 = *(ushort *)(piVar5 + 3);
  }
  else {
    uVar3 = *(ushort *)(piVar5 + 3);
  }
  if ((uVar3 & 1) == 0) {
    iVar2 = 0;
    if ((uVar3 & 2) == 0) {
      iVar2 = piVar5[5];
    }
    piVar5[2] = iVar2;
  }
  else {
    piVar5[2] = 0;
    piVar5[6] = -piVar5[5];
  }
  return 0;
}

