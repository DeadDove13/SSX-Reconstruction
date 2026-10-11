/* Ghidra pseudocode. PS2 address: 001b2420. Not validated source. */

void FUN_001b2420(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  
  FUN_001ab548();
  if ((DAT_0027ba88 == 5) || (DAT_0027ba88 == 3)) {
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad3c = DAT_002c33ac;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    uVar3 = DAT_002c33b0;
    FUN_001a90b8(param_1[0x74],0x43200000,DAT_002c33b0,DAT_002c33b0,*param_1,0x26,0);
    DAT_0028ad38 = DAT_002c33b4;
    DAT_0028ad3c = DAT_002c33b8;
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    FUN_001a90b8(param_1[0x74],0x43660000,uVar3,uVar3,*param_1,0x26,0);
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad3c = 0;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0;
    FUN_001a90b8(param_1[0x74],0x43960000,uVar3,uVar3,*param_1,0x26,0);
    iVar1 = param_1[0x73];
  }
  else {
    iVar1 = param_1[0x73];
  }
  if (iVar1 != 0) {
    DAT_0028ad3c = 0x3f800000;
    puVar2 = &DAT_002b6450;
    DAT_0028ad30 = 0x3f800000;
    iVar1 = 2;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    uVar3 = DAT_002c33bc;
    fVar4 = 205.0;
    do {
      FUN_001a90b8(0x43cd0000,fVar4,uVar3,uVar3,*param_1,*puVar2,0);
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      fVar4 = fVar4 + 40.0;
    } while (-1 < iVar1);
  }
  return;
}

