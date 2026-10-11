/* Ghidra pseudocode. PS2 address: 0016bd88. Not validated source. */

undefined4 FUN_0016bd88(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 400) == 0) {
    if (*(int *)(iVar5 + 0x188) == 0) {
      iVar1 = *(int *)(iVar5 + 0x198);
      *(undefined4 *)(iVar5 + 0x198) = 0;
      iVar2 = FUN_0023b924(iVar5 + 0x198,0x4000);
      if (iVar2 != iVar1) {
        return 0;
      }
      FUN_0023bac0(*(undefined4 *)(iVar5 + 0x4198),iVar5 + 0x1a0,*(undefined4 *)(iVar5 + 0x19c));
      *(int *)(iVar5 + 0x4198) = *(int *)(iVar5 + 0x4198) + *(int *)(iVar5 + 0x19c);
    }
    else {
      iVar1 = *(int *)(iVar5 + 0x4198);
      *(undefined4 *)(iVar5 + 0x188) = 0;
      iVar2 = *(int *)(iVar1 + 0x288);
      *(undefined4 *)(iVar1 + 0x288) = 0;
      iVar1 = FUN_0023b924(iVar1,0x290);
      *(int *)(iVar5 + 0x4198) = *(int *)(iVar5 + 0x4198) + 0x290;
      if (iVar1 != iVar2) {
        return 0;
      }
    }
    if (param_2 < 1) {
      uVar3 = 1;
    }
    else {
      lVar4 = 0x4000;
      if (param_2 < 0x4001) {
        lVar4 = param_2;
      }
      FUN_001dc110(param_1,iVar5 + 0x198,lVar4);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

