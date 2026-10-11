/* Ghidra pseudocode. PS2 address: 0025d988. Not validated source. */

undefined8
FUN_0025d988(undefined8 param_1,long param_2,int param_3,ulong param_4,undefined1 *param_5,
            undefined8 param_6,long param_7,int *param_8)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 auStack_b0 [4];
  char *pcStack_ac;
  
  if (param_7 == 0x66) {
    uVar6 = 3;
  }
  else if ((param_7 == 0x65) || (uVar6 = 2, param_7 == 0x45)) {
    param_3 = param_3 + 1;
    uVar6 = 2;
  }
  if (param_2 >> 0x20 < 0) {
    param_2 = FUN_00257518(0,param_2);
    *param_5 = 0x2d;
  }
  else {
    *param_5 = 0;
  }
  uVar6 = FUN_0025ebf8(param_1,param_2,uVar6,param_3,param_6,auStack_b0,(uint)auStack_b0 | 4);
  pcVar5 = (char *)uVar6;
  if (((param_7 != 0x67) && (param_7 != 0x47)) || ((param_4 & 1) != 0)) {
    pcVar4 = pcVar5 + param_3;
    if (param_7 == 0x66) {
      piVar7 = (int *)param_6;
      if (*pcVar5 == '0') {
        lVar2 = FUN_00257aa8(param_2,0);
        if (lVar2 != 0) {
          *piVar7 = 1 - param_3;
        }
        iVar3 = *piVar7;
      }
      else {
        iVar3 = *piVar7;
      }
      pcVar4 = pcVar4 + iVar3;
    }
    lVar2 = FUN_00257aa8(param_2,0);
    if (lVar2 == 0) {
      pcStack_ac = pcVar4;
    }
    if (pcStack_ac < pcVar4) {
      do {
        pcVar1 = pcStack_ac + 1;
        *pcStack_ac = '0';
        pcStack_ac = pcVar1;
      } while (pcVar1 < pcVar4);
      iVar3 = (int)pcVar1 - (int)pcVar5;
      goto LAB_0025db00;
    }
  }
  iVar3 = (int)pcStack_ac - (int)pcVar5;
LAB_0025db00:
  *param_8 = iVar3;
  return uVar6;
}

