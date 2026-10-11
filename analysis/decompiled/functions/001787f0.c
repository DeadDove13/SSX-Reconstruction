/* Ghidra pseudocode. PS2 address: 001787f0. Not validated source. */

void FUN_001787f0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar2 = (int)param_1;
  if ((DAT_0027ba88 == 3) || (DAT_0027ba88 == 5)) {
    lVar1 = FUN_0016f348(param_1,0);
    if (lVar1 == 0x18c) {
      uVar3 = 0x42b80000;
      uStack_50 = 0;
      uStack_4c = 0xc2040000;
      uStack_48 = 0x42b80000;
      uStack_44 = 0;
      FUN_0016f5d8(param_1,0x1a8,&uStack_50);
      uStack_50 = 0;
      uStack_4c = 0xc2040000;
      uStack_44 = 0;
      uStack_48 = uVar3;
      FUN_0016f5d8(param_1,0x18c,&uStack_50);
      uStack_4c = 0xc2040000;
      uStack_50 = 0;
      uStack_44 = 0;
      uStack_48 = uVar3;
      FUN_0016f5d8(param_1,0x189,&uStack_50);
    }
    else {
      uVar3 = 0x42b80000;
      uStack_50 = 0;
      uStack_4c = 0xc2040000;
      uStack_48 = 0x42b80000;
      uStack_44 = 0;
      FUN_0016f538(param_1,0x1a8,&uStack_50);
      uStack_50 = 0;
      uStack_4c = 0xc2040000;
      uStack_44 = 0;
      uStack_48 = uVar3;
      FUN_0016f538(param_1,0x18c,&uStack_50);
      uStack_4c = 0xc2040000;
      uStack_50 = 0;
      uStack_44 = 0;
      uStack_48 = uVar3;
      FUN_0016f538(param_1,0x189,&uStack_50);
    }
    *(int *)(iVar2 + 0xb64) = (int)lVar1;
    *(undefined4 *)(iVar2 + 0xb60) = 1;
  }
  else if (*(int *)(iVar2 + 0xb60) != 0) {
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    FUN_0016f538(param_1,0x1a8,&uStack_50);
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    FUN_0016f538(param_1,0x18c,&uStack_50);
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    FUN_0016f538(param_1,0x189,&uStack_50);
    *(undefined4 *)(iVar2 + 0xb60) = 0;
  }
  return;
}

