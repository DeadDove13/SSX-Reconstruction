/* Ghidra pseudocode. PS2 address: 00268af8. Not validated source. */

undefined8 FUN_00268af8(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_80 [80];
  
  pcVar5 = acStack_80;
  pcVar6 = "rom0:UDNL ";
  cVar1 = *param_1;
  pcVar4 = param_1;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  if ((uint)((int)pcVar4 - (int)(param_1 + -0xb)) < 0x51) {
    FUN_00266a80(0);
    FUN_00266c10();
    cVar2 = DAT_002c0cb0;
    cVar1 = DAT_002c0cb0;
    while (cVar1 != '\0') {
      *pcVar5 = cVar2;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar6;
      cVar1 = *pcVar6;
    }
    cVar2 = *param_1;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      *pcVar5 = cVar2;
      param_1 = param_1 + 1;
      pcVar5 = pcVar5 + 1;
      cVar2 = *param_1;
      cVar1 = *param_1;
    }
    *pcVar5 = '\0';
    uVar3 = FUN_00268958(acStack_80,0);
  }
  else {
    FUN_0025a720(0x2c0cc0,param_1);
    uVar3 = 0;
  }
  return uVar3;
}

