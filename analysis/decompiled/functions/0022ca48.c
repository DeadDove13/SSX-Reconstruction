/* Ghidra pseudocode. PS2 address: 0022ca48. Not validated source. */

void FUN_0022ca48(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  iVar1 = (int)param_1 * 0x14;
  puVar6 = &DAT_0029e080 + iVar1;
  iVar7 = DAT_0029a8f0 + (int)param_1 * 0x6c;
  if ((char)DAT_0029a828 != '\x01') {
    if ((&DAT_0029e091)[iVar1] == '\x01') {
      FUN_0022aa80(*(undefined2 *)(iVar7 + 0x10),puVar6);
      if (((&DAT_0029e090)[iVar1] & 0x40) != 0) {
        FUN_0022c8f0(*(undefined2 *)(iVar7 + 0x10),&DAT_0029e081 + iVar1,puVar6,
                     (&DAT_0029e092)[iVar1],(&DAT_0029e093)[iVar1]);
        (&DAT_0029e092)[iVar1] = (&DAT_0029e081)[iVar1];
        (&DAT_0029e093)[iVar1] = *puVar6;
      }
    }
    else {
      iVar5 = 0;
      if ((&DAT_0029e091)[iVar1] != '\0') {
        do {
          if (((&DAT_0029e091)[iVar1] == '\x02') && ((char)DAT_0029a828 == '\x02')) {
            *(undefined4 *)(&DAT_0029e084 + iVar5 * 4 + iVar1) = 0;
          }
          iVar2 = iVar5 * 2;
          iVar4 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          FUN_0022aa80((uint)*(ushort *)
                              (&DAT_0029a90c + iVar2 + ((byte)(&DAT_0029e091)[iVar1] - 1) * 4) +
                       *(int *)(&DAT_0029e084 + iVar4 + iVar1),
                       &DAT_0029e080 + *(short *)(iVar7 + 4 + iVar2) * 0x14);
        } while (iVar5 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
      }
    }
    FUN_0022be90(param_1);
    return;
  }
  iVar5 = 0;
  if ((&DAT_0029e091)[iVar1] != '\0') {
    iVar2 = 0;
    do {
      psVar3 = (short *)(iVar7 + 4 + iVar2);
      iVar5 = iVar5 + 1;
      (&DAT_0029e080)[*psVar3 * 0x14] = 0x5f;
      (&DAT_0029e081)[*psVar3 * 0x14] = 0x5f;
      iVar2 = iVar5 * 2;
    } while (iVar5 < (int)(uint)(byte)(&DAT_0029e091)[iVar1]);
  }
  FUN_0022be90(param_1);
  return;
}

