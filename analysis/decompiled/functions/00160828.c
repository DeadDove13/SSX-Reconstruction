/* Ghidra pseudocode. PS2 address: 00160828. Not validated source. */

undefined8 FUN_00160828(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)param_1 + param_3 * 4);
  if (iVar5 != -1) {
    iVar1 = FUN_00160688(param_2,0);
    do {
      piVar2 = (int *)FUN_001606d8(param_1,iVar5);
      if (piVar2[3] == iVar1) {
        lVar3 = FUN_0025baa0(piVar2 + 4,param_2);
        if (lVar3 == 0) {
          uVar4 = FUN_001606d8(param_1,piVar2[2]);
          return uVar4;
        }
        iVar5 = *piVar2;
      }
      else {
        iVar5 = *piVar2;
      }
    } while (iVar5 != -1);
  }
  return 0;
}

