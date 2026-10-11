/* Ghidra pseudocode. PS2 address: 001011d8. Not validated source. */

void FUN_001011d8(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_2) {
  case 1:
    uVar3 = 1;
    pcVar1 = s_PreRace_002c3fb0;
    iVar2 = param_1 + 0x2c;
    break;
  case 2:
    uVar3 = 2;
    pcVar1 = "StartRace";
    iVar2 = param_1 + 0x38;
    break;
  case 3:
    uVar3 = 3;
    pcVar1 = "Countdown";
    iVar2 = param_1 + 0x3c;
    break;
  case 4:
    uVar3 = 4;
    pcVar1 = &DAT_002c3fb8;
    iVar2 = param_1 + 0x40;
    break;
  case 5:
    uVar3 = 5;
    pcVar1 = s_EndRace_002c3fc0;
    iVar2 = param_1 + 0x44;
    break;
  case 6:
    uVar3 = 6;
    pcVar1 = "LoadLesson";
    iVar2 = param_1 + 0x50;
    break;
  case 7:
    uVar3 = 7;
    pcVar1 = "PreLesson";
    iVar2 = param_1 + 0x54;
    break;
  case 8:
    uVar3 = 8;
    pcVar1 = "RestartLesson";
    iVar2 = param_1 + 0x58;
    break;
  case 9:
    uVar3 = 9;
    pcVar1 = "EndLesson";
    iVar2 = param_1 + 0x5c;
    break;
  case 10:
    uVar3 = 10;
    pcVar1 = "ReplayEndRace";
    iVar2 = param_1 + 0x60;
    break;
  default:
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    return;
  }
  *(int *)(param_1 + 0x68) = iVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(char **)(param_1 + 0x6c) = pcVar1;
  return;
}

