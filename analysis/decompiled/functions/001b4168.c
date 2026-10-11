/* Ghidra pseudocode. PS2 address: 001b4168. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001b4374) */
/* WARNING: Removing unreachable block (ram,0x001b4250) */
/* WARNING: Removing unreachable block (ram,0x001b42a0) */
/* WARNING: Removing unreachable block (ram,0x001b43c0) */

void FUN_001b4168(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  FUN_001ab908();
  puVar8 = (undefined4 *)param_1;
  uVar4 = FUN_001a94b0(*puVar8,puVar8[0x41]);
  if (uVar4 != 0) {
    if ((uVar4 & 0x20001) != 0) {
      FUN_001a9498(*puVar8);
      iVar3 = puVar8[0x12];
      puVar8[0x12] = iVar3 + -1;
      if (iVar3 + -1 < 0) {
        puVar8[0x12] = 2;
      }
      iVar3 = puVar8[0x12];
      cVar1 = (&DAT_0028af30)[puVar8[0x13] + iVar3 * 0xe];
      while (cVar1 == '\0') {
        iVar3 = iVar3 + -1;
        puVar8[0x12] = iVar3;
        cVar1 = (&DAT_0028af30)[iVar3 * 0xe + puVar8[0x13]];
      }
    }
    if ((uVar4 & 0x40002) != 0) {
      FUN_001a9498(*puVar8);
      iVar3 = (puVar8[0x12] + 1) % 3;
      puVar8[0x12] = iVar3;
      if ((&DAT_0028af30)[puVar8[0x13] + iVar3 * 0xe] == '\0') {
        iVar3 = puVar8[0x12];
        while (iVar3 = (iVar3 + 1) % 3, puVar8[0x12] = iVar3,
              (&DAT_0028af30)[iVar3 * 0xe + puVar8[0x13]] == '\0') {
          iVar3 = puVar8[0x12];
        }
      }
    }
    if ((uVar4 & 0x100008) != 0) {
      FUN_001a9498(*puVar8);
      iVar3 = puVar8[0x13];
      puVar8[0x13] = iVar3 + -1;
      if (iVar3 + -1 < 0) {
        puVar8[0x13] = 0xd;
      }
      iVar3 = puVar8[0x13];
      cVar1 = (&DAT_0028af30)[iVar3 + puVar8[0x12] * 0xe];
      while (cVar1 == '\0') {
        iVar3 = iVar3 + -1;
        puVar8[0x13] = iVar3;
        cVar1 = (&DAT_0028af30)[iVar3 + puVar8[0x12] * 0xe];
      }
    }
    if ((uVar4 & 0x80004) != 0) {
      FUN_001a9498(*puVar8);
      iVar3 = (puVar8[0x13] + 1) % 0xe;
      puVar8[0x13] = iVar3;
      if ((&DAT_0028af30)[iVar3 + puVar8[0x12] * 0xe] == '\0') {
        iVar3 = puVar8[0x13];
        while (iVar3 = (iVar3 + 1) % 0xe, puVar8[0x13] = iVar3,
              (&DAT_0028af30)[iVar3 + puVar8[0x12] * 0xe] == '\0') {
          iVar3 = puVar8[0x13];
        }
      }
    }
    if ((uVar4 & 0x20) == 0) {
      if ((uVar4 & 0x800) != 0) {
        cVar1 = (&DAT_0028af30)[puVar8[0x13] + puVar8[0x12] * 0xe];
        FUN_001a94a8(*puVar8);
        if (cVar1 == 'e') {
          lVar5 = FUN_001b4580(param_1);
          if (lVar5 == 0) {
            iVar3 = 0;
            if (0 < DAT_002c4694) {
              piVar7 = &DAT_0027e9ac;
              iVar6 = DAT_002c4694;
              do {
                iVar2 = *piVar7;
                piVar7 = piVar7 + 3;
                iVar6 = iVar6 + -1;
                if (2 < iVar2 - 6U) {
                  iVar3 = iVar3 + 1;
                }
              } while (iVar6 != 0);
            }
            FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),2,0xffffffffffffffff);
            if (iVar3 == 0) {
              FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),1,0xffffffffffffffff);
            }
            else {
              FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),0xd,0xffffffffffffffff);
            }
          }
        }
        else {
          puVar9 = puVar8 + 0x15;
          if (puVar8[0x42] != 0) {
            puVar8[0x42] = 0;
            FUN_0023bbd0(puVar9,0,0xb);
            puVar8[0x14] = 0;
          }
          iVar3 = puVar8[0x14];
          if (iVar3 < 9) {
            *(char *)((int)puVar9 + iVar3) = cVar1;
            puVar8[0x14] = puVar8[0x14] + 1;
          }
          else {
            *(char *)((int)puVar9 + iVar3 + -1) = cVar1;
          }
        }
      }
    }
    else {
      FUN_001a94a0(*puVar8);
      if (puVar8[0x42] != 0) {
        puVar8[0x42] = 0;
        FUN_0023bbd0(puVar8 + 0x15,0,0xb);
        puVar8[0x14] = 0;
      }
      iVar3 = puVar8[0x14];
      if (0 < iVar3) {
        puVar8[0x14] = iVar3 + -1;
        *(undefined1 *)((int)puVar8 + iVar3 + 0x53) = 0;
      }
    }
  }
  return;
}

