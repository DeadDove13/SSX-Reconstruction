/* Ghidra pseudocode. PS2 address: 0016ad28. Not validated source. */

undefined8 FUN_0016ad28(undefined8 param_1,int param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_001d86c8();
  puVar4 = (undefined4 *)param_1;
  puVar4[0x5d] = param_2;
  puVar4[0x5e] = (int)param_3;
  puVar4[0x61] = 0;
  puVar4[0x60] = 0;
  puVar4[100] = (int)param_4;
  puVar4[0x62] = 0;
  puVar4[0x1066] = 0;
  puVar4[0x5c] = &DAT_002b0358;
  puVar4[0x5f] = param_2 + 0x400;
  uVar1 = FUN_0016c598(param_3,0);
  puVar4[99] = uVar1;
  FUN_001d9840(param_1);
  if (param_5 != 0) {
    if ((param_4 != 0) && (param_4 == 1)) {
      *(undefined4 *)(puVar4[0x5b] + 0x24) = 0x1274;
      puVar4[10] = 0x20dfc;
      puVar4[0x65] = 0xb1;
    }
    FUN_001d87a8(param_1,param_4);
    goto LAB_0016ae48;
  }
  if (param_4 == 0) {
    iVar3 = puVar4[0x5b];
    *(undefined4 *)(iVar3 + 0x24) = 0x110000;
    uVar1 = 0x12fb88;
    uVar2 = 0xb2;
LAB_0016ae30:
    puVar4[10] = uVar1;
    puVar4[0x65] = uVar2;
  }
  else {
    iVar3 = puVar4[0x5b];
    if (param_4 == 1) {
      *(undefined4 *)(iVar3 + 0x24) = 0x1274;
      uVar1 = 0x20dfc;
      uVar2 = 0xb0;
      goto LAB_0016ae30;
    }
  }
  *puVar4 = (int)param_4;
  FUN_00210ed8(iVar3,param_4);
  puVar4[1] = 0;
LAB_0016ae48:
  FUN_001d98f0(param_1);
  FUN_001dc3c8(param_1);
  return param_1;
}

