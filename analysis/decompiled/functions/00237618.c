/* Ghidra pseudocode. PS2 address: 00237618. Not validated source. */

void FUN_00237618(char *param_1,char *param_2,long param_3)

{
  char cVar1;
  long lVar2;
  int iVar3;
  
  *param_2 = '\0';
  iVar3 = DAT_002c5a54;
  lVar2 = FUN_0025b910(param_1,0x3a);
  if (lVar2 != 0) {
    lVar2 = FUN_0025bf10(param_1,PTR_DAT_002c59bc,3);
    if (lVar2 == 0) {
      iVar3 = 1;
      param_1 = param_1 + 3;
    }
    else {
      lVar2 = FUN_0025bf10(param_1,PTR_s_host0__002c59c8,6);
      if (lVar2 == 0) {
        iVar3 = 2;
        param_1 = param_1 + 6;
      }
      else {
        if (DAT_002c5a54 == 1) {
          return;
        }
        if (param_1[2] != ':') {
          return;
        }
      }
    }
  }
  if (iVar3 == 2) {
    FUN_0025b7e4(param_2,PTR_s_host0__002c59c8);
    cVar1 = *param_1;
  }
  else {
    cVar1 = *param_1;
  }
  if (((cVar1 != '\\') && (cVar1 != '/')) && (cVar1 != '~')) {
    FUN_0025b7e4(param_2,0x2a3388);
  }
  FUN_0025b7e4(param_2,param_1);
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    if (cVar1 == '\\') {
      *param_2 = '/';
    }
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  if (param_3 != 0) {
    *(int *)param_3 = iVar3;
  }
  return;
}

