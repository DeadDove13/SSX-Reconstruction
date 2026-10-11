/* Ghidra pseudocode. PS2 address: 0019a8f0. Not validated source. */

void FUN_0019a8f0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  short asStack_8b0 [1024];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  psVar3 = asStack_8b0;
  psVar4 = asStack_8b0;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  iVar2 = FUN_0025bcf8(param_2);
  if (0 < iVar2) {
    do {
      cVar1 = *param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 + 1;
      *psVar3 = (short)cVar1;
      psVar4 = psVar3 + 1;
      psVar3 = psVar4;
    } while (iVar2 != 0);
  }
  *psVar4 = 0;
  FUN_002348d8(param_1,asStack_8b0,&uStack_30);
  return;
}

