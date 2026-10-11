/* Ghidra pseudocode. PS2 address: 0024fbc0. Not validated source. */

bool FUN_0024fbc0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined *puVar12;
  bool bVar13;
  
  puVar3 = PTR_DAT_002a52d8;
  puVar2 = PTR_DAT_002a52d0;
  puVar10 = PTR_DAT_002a52c4;
  iVar11 = 4;
  iVar1 = *(int *)(DAT_002a52a4 + 0x40);
  if (DAT_002a546c == 3) {
    iVar11 = 2;
  }
  puVar12 = (undefined *)0x0;
  bVar13 = false;
  if (DAT_002a543c == 3) {
    DAT_002a5504 = PTR_DAT_002a52c8;
    DAT_002a5508 = PTR_DAT_002a52d4;
    DAT_002a550c = PTR_DAT_002a52e0;
    if (iVar11 <= *(int *)(iVar1 + 0xa0) + *(int *)(iVar1 + 0xa4)) {
      *(undefined4 *)(iVar1 + 0xe8) = 0;
      DAT_002a54f0 = 0;
      DAT_002a54f4 = 0;
    }
    puVar10 = PTR_DAT_002a52cc;
    if ((*(int *)(iVar1 + 0xe8) == 0) && (DAT_002a54f4 == 0)) {
LAB_0024fcc0:
      *(undefined4 *)(iVar1 + 0xe8) = 0;
    }
    else {
      if (DAT_002a54f0 == 0) {
        *(undefined4 *)(PTR_DAT_002a52c0 + 0x28) = 0;
        puVar2 = PTR_DAT_002a52d8;
        *(undefined4 *)(puVar10 + 0x28) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        goto LAB_0024fcc0;
      }
      *(undefined4 *)(iVar1 + 0xe8) = 0;
    }
    DAT_002a54f4 = 0;
    if (DAT_002a546c == 3) {
      puVar10 = PTR_DAT_002a52c4;
      if ((*(int *)(PTR_DAT_002a52c0 + 0x28) == 1) || (DAT_002a54f0 != 0)) {
LAB_0024fd5c:
        bVar13 = *(int *)(puVar10 + 0x28) == 1;
      }
    }
    else if ((((*(int *)(PTR_DAT_002a52cc + 0x28) == 1) && (*(int *)(PTR_DAT_002a52d8 + 0x28) == 1))
             || (DAT_002a54f0 != 0)) &&
            (puVar10 = PTR_DAT_002a52dc, *(int *)(PTR_DAT_002a52d0 + 0x28) == 1)) goto LAB_0024fd5c;
  }
  else {
    if (param_1 == 0) {
      PTR_DAT_002a52c4 = PTR_DAT_002a52c0;
      PTR_DAT_002a52d0 = PTR_DAT_002a52cc;
      PTR_DAT_002a52c0 = puVar10;
      PTR_DAT_002a52cc = puVar2;
      PTR_DAT_002a52d8 = PTR_DAT_002a52dc;
      PTR_DAT_002a52dc = puVar3;
    }
    DAT_002a5504 = PTR_DAT_002a52c4;
    DAT_002a5508 = PTR_DAT_002a52d0;
    DAT_002a550c = PTR_DAT_002a52dc;
    if (DAT_002a546c == 3) {
      if (DAT_002a543c == 2) {
        if (*(int *)(PTR_DAT_002a52c0 + 0x28) == 1) {
          bVar13 = true;
        }
      }
      else {
        bVar13 = true;
      }
    }
    else {
      puVar10 = PTR_DAT_002a52dc;
      if (DAT_002a546c != 1) {
        puVar10 = PTR_DAT_002a52d0;
      }
      if (((DAT_002a543c != 2) || ((param_1 != 0 && (*(int *)(puVar10 + 0x28) == 1)))) ||
         ((*(int *)(PTR_DAT_002a52cc + 0x28) == 1 && (*(int *)(PTR_DAT_002a52d8 + 0x28) == 1)))) {
        bVar13 = true;
      }
    }
  }
  uVar9 = DAT_002a5b50;
  uVar8 = DAT_002a5b48;
  uVar7 = DAT_002a5488;
  uVar6 = DAT_002a5480;
  uVar5 = DAT_002a5470;
  iVar1 = DAT_002a546c;
  uVar4 = DAT_002a5408;
  puVar10 = DAT_002a550c;
  if (DAT_002a546c != 2) {
    if (DAT_002a546c < 3) {
      puVar10 = DAT_002a5508;
      if (DAT_002a546c != 1) goto LAB_0024feb4;
    }
    else {
      puVar10 = DAT_002a5504;
      if (DAT_002a546c != 3) {
        puVar10 = puVar12;
      }
    }
  }
  puVar12 = puVar10;
LAB_0024feb4:
  *(int *)(puVar12 + 0x2c) = DAT_002a543c;
  *(int *)(puVar12 + 0x30) = iVar1;
  *(undefined4 *)(puVar12 + 0x34) = uVar4;
  *(undefined4 *)(puVar12 + 0x38) = uVar7;
  *(undefined4 *)(puVar12 + 0x3c) = uVar5;
  *(undefined4 *)(puVar12 + 0x40) = uVar6;
  *(undefined4 *)(puVar12 + 0x28) = 0;
  uVar5 = DAT_002a5434;
  uVar4 = DAT_002a5430;
  *(undefined4 *)(puVar12 + 0x44) = DAT_002a54a8;
  *(undefined8 *)(puVar12 + 0x18) = uVar8;
  uVar6 = DAT_002a54ac;
  *(undefined8 *)(puVar12 + 0x20) = uVar9;
  *(undefined4 *)(puVar12 + 0x48) = uVar6;
  *(undefined4 *)(puVar12 + 0x4c) = DAT_002a54b0;
  *(undefined4 *)(puVar12 + 0x50) = DAT_002a54b8;
  *(undefined4 *)(puVar12 + 0x54) = DAT_002a54bc;
  uVar6 = DAT_002a54c0;
  *(undefined4 *)(puVar12 + 0x60) = uVar5;
  *(undefined4 *)(puVar12 + 0x58) = uVar6;
  *(undefined4 *)(puVar12 + 0x5c) = uVar4;
  return bVar13;
}

