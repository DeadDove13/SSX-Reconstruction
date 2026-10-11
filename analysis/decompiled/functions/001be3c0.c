/* Ghidra pseudocode. PS2 address: 001be3c0. Not validated source. */

void FUN_001be3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_001c4ea8(0x2913b0,param_3);
  FUN_001c4ec8(0x2913b0,param_3);
  puVar5 = (uint *)param_2;
  iVar6 = 0;
  if (((*puVar5 & 0xffffff00) != 0) && (iVar2 = (int)puVar5 + ((int)*puVar5 >> 8), iVar2 != 0)) {
    iVar6 = iVar2 + 0x10;
  }
  if (((char)puVar5[4] == '\x10') && (*(char *)((int)puVar5 + 0x11) == -5)) {
    iVar2 = FUN_0023b9ec((int)puVar5 + 0x12,3);
    lVar3 = FUN_0023a448(0x2c52a8,iVar2 + 0x10,0x10);
    if (lVar3 != 0) {
      FUN_0023bbd0(lVar3,0,iVar2 + 0x10);
    }
    pbVar4 = (byte *)lVar3;
    FUN_0023bd30(param_2,lVar3,0x10);
    FUN_001859f8(puVar5 + 4,pbVar4 + 0x10,1);
    uVar1 = DAT_002913b0;
    *pbVar4 = *pbVar4 & 0x7f;
    FUN_001d0c20(uVar1,pbVar4 + 0x10,iVar6,param_3);
    FUN_0023a998(lVar3);
    return;
  }
  FUN_001d0c20(DAT_002913b0,puVar5 + 4,iVar6,param_3);
  return;
}

