/* Ghidra pseudocode. PS2 address: 001a2738. Not validated source. */

void FUN_001a2738(float param_1,float param_2,float param_3,undefined4 param_4,undefined8 param_5,
                 undefined8 param_6,ulong param_7)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  int aiStack_160 [12];
  char acStack_130 [112];
  
  piVar5 = aiStack_160;
  if ((param_7 & 4) == 0) {
    iVar1 = *(int *)(DAT_002859e4 + 0x58);
  }
  else {
    iVar1 = *(int *)(DAT_002859e4 + 0x5c);
  }
  FUN_00176e38(0x28ad30);
  iVar4 = FUN_001a0840(param_4,iVar1,param_5,0);
  if ((float)iVar4 <= param_3) {
    if ((param_7 & 1) != 0) {
      param_1 = param_1 - (float)iVar4 * 0.5;
    }
    FUN_001a1470(param_4,param_1,param_2,iVar1,param_5);
  }
  else {
    pcVar8 = acStack_130;
    FUN_0025bbe4(pcVar8,param_5);
    fVar11 = 0.0;
    fVar10 = (float)*(int *)(iVar1 + 0xc) + 4.0;
    pcVar2 = pcVar8;
    pcVar7 = pcVar8;
    pcVar9 = pcVar8;
    while( true ) {
      while ((pcVar6 = pcVar2, cVar3 = *pcVar6, cVar3 != ' ' && (cVar3 != '\0'))) {
        pcVar2 = pcVar6 + 1;
      }
      if (cVar3 == '\0') {
        iVar4 = FUN_001a0840(param_4,iVar1,pcVar7,0);
      }
      else {
        *pcVar6 = '\0';
        iVar4 = FUN_001a0840(param_4,iVar1,pcVar7,0);
        *pcVar6 = ' ';
      }
      if (param_3 < (float)iVar4) {
        fVar11 = fVar11 + fVar10;
        *piVar5 = (int)pcVar9;
        pcVar7 = pcVar9 + 1;
        piVar5 = piVar5 + 1;
        cVar3 = *pcVar6;
      }
      else {
        cVar3 = *pcVar6;
      }
      if (cVar3 == '\0') break;
      pcVar2 = pcVar6 + 1;
      pcVar9 = pcVar6;
    }
    *piVar5 = (int)pcVar6;
    piVar5 = aiStack_160;
    if ((param_7 & 2) != 0) {
      param_2 = param_2 - fVar11;
      piVar5 = aiStack_160;
    }
    while( true ) {
      *(undefined1 *)*piVar5 = 0;
      iVar4 = FUN_001a0840(param_4,iVar1,pcVar8,0);
      FUN_001a1470(param_4,param_1 - (float)iVar4 * 0.5,param_2,iVar1,pcVar8);
      if ((char *)*piVar5 == pcVar6) break;
      *(char *)*piVar5 = ' ';
      param_2 = param_2 + fVar10;
      pcVar8 = (char *)(*piVar5 + 1);
      piVar5 = piVar5 + 1;
    }
  }
  return;
}

