/* Ghidra pseudocode. PS2 address: 001608f0. Not validated source. */

undefined8 FUN_001608f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_001607b8(param_1,param_3);
  if (lVar3 != -1) {
    iVar1 = FUN_001606d8(param_1,lVar3);
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 != -1) {
      iVar2 = FUN_00160688(param_2,0);
      do {
        iVar1 = FUN_001606d8(param_1,iVar1);
        if (*(int *)(iVar1 + 0xc) == iVar2) {
          lVar3 = FUN_0025baa0(iVar1 + 0x10,param_2);
          if (lVar3 == 0) {
            uVar4 = FUN_001606d8(param_1,*(undefined4 *)(iVar1 + 8));
            return uVar4;
          }
          iVar1 = *(int *)(iVar1 + 4);
        }
        else {
          iVar1 = *(int *)(iVar1 + 4);
        }
      } while (iVar1 != -1);
    }
  }
  return 0;
}

