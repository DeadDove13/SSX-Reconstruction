/* Ghidra pseudocode. PS2 address: 00259080. Not validated source. */

byte * FUN_00259080(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int aiStack_50 [4];
  
  iVar2 = (param_1 - *(int *)(param_1 + 4)) + 0xd;
  *param_2 = iVar2;
  lVar4 = FUN_0025baa0(iVar2,0x2bffd0);
  if (((lVar4 == 0) || (lVar4 = FUN_0025baa0(*param_2,0x2bffd8), lVar4 == 0)) ||
     (pbVar3 = (byte *)0x0, *(char *)*param_2 == 'z')) {
    iVar2 = FUN_0025bcf8(*param_2);
    iVar2 = *param_2 + iVar2;
    piVar6 = (int *)(iVar2 + 1);
    lVar4 = FUN_0025baa0(*param_2,0x2bffd8);
    if (lVar4 == 0) {
      iVar1 = *piVar6;
      piVar6 = (int *)(iVar2 + 5);
      param_2[1] = iVar1;
    }
    else {
      param_2[1] = 0;
    }
    uVar5 = FUN_00258988(piVar6,param_2 + 2);
    pbVar3 = (byte *)FUN_002589d0(uVar5,param_2 + 3);
    param_2[4] = (uint)*pbVar3;
    pbVar3 = pbVar3 + 1;
    if (*(char *)*param_2 == 'z') {
      iVar2 = FUN_00258988(pbVar3,aiStack_50);
      pbVar3 = (byte *)(iVar2 + aiStack_50[0]);
    }
  }
  return pbVar3;
}

