/* Ghidra pseudocode. PS2 address: 001b3bf8. Not validated source. */

void FUN_001b3bf8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  
  FUN_001ab548();
  uVar4 = 0x43d70000;
  FUN_0011ed48(0x295e90,3);
  FUN_001aa360(0x42dc0000,0x43960000,uVar4,0x42c80000,*param_1);
  FUN_0011ed18(0x295e90,7);
  if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x438) == 0) {
    uVar5 = 0x44070000;
    FUN_001a90b8(0x44070000,uVar4,0x3f800000,0x3f800000,*param_1,0x58,0);
    FUN_001a90b8(uVar5,0x43e10000,0x3f800000,0x3f800000,*param_1,0x57,0);
    iVar1 = param_1[0xf];
  }
  else {
    iVar1 = param_1[0xf];
  }
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(DAT_002859e4 + 0x58);
    uStack_8f = 0;
    uStack_90 = (&DAT_0028af30)[param_1[0x13] + param_1[0x12] * 0xe];
    puVar3 = param_1 + 0x15;
    FUN_001a0840(0x3f800000,uVar4,&uStack_90,0);
    DAT_0028ad34 = DAT_002c33ec;
    DAT_0028ad3c = DAT_002c33f0;
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad38 = DAT_002c33f0;
    FUN_001a90b8((float)(int)param_1[0x13] * 35.0 + 99.0,
                 (float)(int)param_1[0x12] * 20.0 + DAT_002c33e8,0x3fa00000,0x3fa00000,*param_1,0x6c
                 ,0x20);
    iVar1 = FUN_0025bcf8(puVar3);
    *(undefined1 *)((int)puVar3 + iVar1) = 0x2e;
    *(undefined1 *)((int)puVar3 + iVar1 + 1) = 0;
    iVar2 = FUN_001a0840(0x3f800000,uVar4,puVar3,0);
    *(undefined1 *)((int)puVar3 + iVar1) = 0;
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    FUN_001a90b8(DAT_0028b24c + (float)iVar2,param_1[0x11],0x3f800000,DAT_002c33f4,*param_1,0x5c,1);
  }
  return;
}

