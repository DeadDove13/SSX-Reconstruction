/* Ghidra pseudocode. PS2 address: 0023e608. Not validated source. */

ulong FUN_0023e608(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = 0;
  if (DAT_002c5a3c != DAT_002c5aa0) {
    DAT_002c5a3c = DAT_002c5aa0;
    piVar3 = (int *)&DAT_002d0424;
    iVar4 = 0xf;
    do {
      iVar1 = DAT_002c5aa0;
      if ((((code *)piVar3[-3] != (code *)0x0) && (piVar3[-1] <= DAT_002c5aa0)) && (*piVar3 == 0)) {
        *piVar3 = 1;
        uVar2 = (*(code *)piVar3[-3])(param_1,iVar1 - piVar3[-1]);
        iVar1 = DAT_002c5aa0;
        uVar5 = uVar5 | uVar2;
        *piVar3 = 0;
        piVar3[-1] = iVar1 + piVar3[-2];
      }
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + 4;
    } while (-1 < iVar4);
  }
  return uVar5;
}

