/* Ghidra pseudocode. PS2 address: 00246860. Not validated source. */

undefined8 FUN_00246860(undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  switch(*param_2) {
  case 1:
    pcVar1 = DAT_002a51b0;
    goto LAB_002468b4;
  case 2:
    pcVar1 = DAT_002a51b4;
    goto LAB_002468b4;
  case 3:
    pcVar1 = DAT_002a51b8;
LAB_002468b4:
    if (pcVar1 == (code *)0x0) {
      return 0;
    }
    (*pcVar1)();
    return 0;
  case 0xb:
    if (DAT_002a51bc != (code *)0x0) {
      (*DAT_002a51bc)(0,DAT_002a51c8);
      return 0;
    }
    break;
  case 0xc:
    if (DAT_002a51c0 != (code *)0x0) {
      (*DAT_002a51c0)(1,DAT_002a51cc);
      return 0;
    }
    break;
  case 0xd:
    if (DAT_002a51c4 != (code *)0x0) {
      (*DAT_002a51c4)(param_2[1],DAT_002a51d0);
    }
  }
  return 0;
}

