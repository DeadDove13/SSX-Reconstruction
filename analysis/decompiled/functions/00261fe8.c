/* Ghidra pseudocode. PS2 address: 00261fe8. Not validated source. */

undefined4 FUN_00261fe8(undefined8 param_1)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  
  puVar5 = PTR_DAT_002a6614;
  puVar6 = (undefined4 *)param_1;
  puVar1 = (undefined *)puVar6[0x15];
  if (puVar1 == (undefined *)0x0) {
    puVar6[0x15] = PTR_DAT_002a6614;
    iVar3 = *(int *)(puVar5 + 0x38);
  }
  else {
    iVar3 = *(int *)(puVar1 + 0x38);
    puVar5 = puVar1;
  }
  if (iVar3 == 0) {
    FUN_00260098(puVar5);
    uVar2 = *(ushort *)(puVar6 + 3);
  }
  else {
    uVar2 = *(ushort *)(puVar6 + 3);
  }
  puVar6[1] = 0;
  if ((uVar2 & 0x20) == 0) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x10) == 0) {
        return 0xffffffff;
      }
      if ((uVar2 & 8) != 0) {
        lVar4 = FUN_0025fdc8(param_1);
        if (lVar4 != 0) {
          return 0xffffffff;
        }
        puVar6[2] = 0;
        uVar2 = *(ushort *)(puVar6 + 3) & 0xfff7;
        puVar6[6] = 0;
        *(ushort *)(puVar6 + 3) = uVar2;
      }
      *(ushort *)(puVar6 + 3) = uVar2 | 4;
    }
    else if ((undefined4 *)puVar6[0xc] != (undefined4 *)0x0) {
      if ((undefined4 *)puVar6[0xc] == puVar6 + 0x10) {
        iVar3 = puVar6[0xf];
      }
      else {
        FUN_00260248(puVar6[0x15]);
        iVar3 = puVar6[0xf];
      }
      puVar6[0xc] = 0;
      puVar6[1] = iVar3;
      if (iVar3 != 0) {
        *puVar6 = puVar6[0xe];
        return 0;
      }
    }
    if (puVar6[4] == 0) {
      FUN_00260c38(param_1);
      uVar2 = *(ushort *)(puVar6 + 3);
    }
    else {
      uVar2 = *(ushort *)(puVar6 + 3);
    }
    if ((uVar2 & 3) != 0) {
      FUN_00260ab0(puVar6[0x15],0x261fc8);
    }
    *puVar6 = puVar6[4];
    lVar4 = (*(code *)puVar6[8])(puVar6[7],puVar6[4],puVar6[5]);
    puVar6[1] = (int)lVar4;
    uVar2 = *(ushort *)(puVar6 + 3) & 0xdfff;
    *(ushort *)(puVar6 + 3) = uVar2;
    if (0 < lVar4) {
      return 0;
    }
    if (lVar4 == 0) {
      uVar2 = uVar2 | 0x20;
    }
    else {
      uVar2 = uVar2 | 0x40;
      puVar6[1] = 0;
    }
    *(ushort *)(puVar6 + 3) = uVar2;
  }
  return 0xffffffff;
}

