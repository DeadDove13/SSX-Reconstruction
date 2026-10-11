/* Ghidra pseudocode. PS2 address: 0018bb30. Not validated source. */

bool FUN_0018bb30(char *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 uStack_90;
  char acStack_8f [63];
  undefined4 auStack_50 [4];
  
  pcVar4 = acStack_8f;
  uStack_90 = 0x2f;
  pcVar5 = param_1 + 1;
  if (*param_1 != '/') {
    pcVar5 = param_1;
  }
  cVar1 = *pcVar5;
  cVar3 = *pcVar5;
  while (cVar3 != '\0') {
    if (cVar1 == 0x5c) {
      *pcVar4 = '/';
    }
    else {
      cVar3 = cVar1 + -0x20;
      if ((*(byte *)((int)&PTR_DAT_002c00a1 + (int)cVar1) & 2) == 0) {
        cVar3 = cVar1;
      }
      *pcVar4 = cVar3;
    }
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar5;
    cVar3 = *pcVar5;
  }
  *pcVar4 = '\0';
  if (DAT_00285b20 == &LAB_0018b348) {
    auStack_50[0] = FUN_0018b0b8(&uStack_90);
    lVar2 = FUN_002599d8(auStack_50,DAT_00285b40,DAT_00285b04,0x4c,DAT_00285b20);
  }
  else {
    lVar2 = FUN_002599d8(&uStack_90,DAT_00285b40,DAT_00285b04,0x4c);
  }
  if (lVar2 != 0) {
    *param_3 = (((int)lVar2 - DAT_00285b40) * 0x286bca1b >> 2) + 1;
  }
  else {
    *param_3 = 0;
  }
  return lVar2 != 0;
}

