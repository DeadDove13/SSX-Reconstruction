/* Ghidra pseudocode. PS2 address: 00240628. Not validated source. */

int FUN_00240628(ulong param_1,ulong param_2,long param_3)

{
  char *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pcVar1 = &DAT_002a4b9a;
  iVar6 = -1;
  iVar4 = 0;
  do {
    if (*pcVar1 == '\0') {
      return iVar4;
    }
    iVar4 = iVar4 + 1;
    pcVar1 = pcVar1 + 0x40;
  } while (iVar4 < 0x10);
  if (param_3 != 0) {
    iVar6 = (&DAT_002a4b80)[(int)param_2];
  }
  iVar5 = 0;
  iVar4 = FUN_00208800();
  piVar2 = &DAT_002a4b94;
  while (((((short)piVar2[2] != 0 || (*(ushort *)(piVar2[3] + 2) == 0)) ||
          ((uint)(iVar4 - *piVar2) <= (uint)*(ushort *)(piVar2[3] + 2))) || (iVar6 == iVar5))) {
    iVar5 = iVar5 + 1;
    piVar2 = piVar2 + 0x10;
    if (0xf < iVar5) {
      iVar4 = 0;
      puVar3 = &DAT_002a4b60;
      do {
        if (*(short *)(puVar3 + 0xf) == 0) {
          if (((*(ushort *)(puVar3[0x10] + 4) <= param_1) &&
              (*(byte *)((int)puVar3 + 0x3b) == param_2)) && (iVar4 != iVar6)) {
            *(undefined1 *)((int)puVar3 + 0x3a) = 0;
            (&DAT_002a4b60)[*(byte *)((int)puVar3 + 0x3b)] =
                 (&DAT_002a4b60)[*(byte *)((int)puVar3 + 0x3b)] + -1;
            return iVar4;
          }
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 0x10;
        if (0xf < iVar4) {
          return -1;
        }
      } while( true );
    }
  }
  FUN_00240e60(iVar5);
  return iVar5;
}

