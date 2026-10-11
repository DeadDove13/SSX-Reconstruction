/* Ghidra pseudocode. PS2 address: 001a99c0. Not validated source. */

void FUN_001a99c0(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar5 = (int)param_1;
  puVar2 = (undefined4 *)(iVar5 + 0x24);
  FUN_0011ed18(0x295e90,4);
  FUN_0011ed48(0x295e90,3);
  iVar1 = 4;
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad30 = DAT_002c32a4;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  uVar7 = *puVar2;
  while( true ) {
    puVar3 = puVar2 + -2;
    puVar4 = puVar2 + -1;
    puVar2 = puVar2 + 5;
    FUN_001a90b8(*puVar3,*puVar4,uVar7,uVar7,param_1,0x66,0x20);
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) break;
    uVar7 = *puVar2;
  }
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  puVar2 = (undefined4 *)(iVar5 + 0x90);
  puVar4 = (undefined4 *)(iVar5 + 0x88);
  puVar3 = (undefined4 *)(iVar5 + 0x8c);
  uVar7 = *puVar4;
  while( true ) {
    uVar6 = *puVar3;
    puVar4 = puVar4 + 5;
    uVar8 = *puVar2;
    puVar2 = puVar2 + 5;
    puVar3 = puVar3 + 5;
    FUN_0019fe18(uVar6,uVar7,uVar8,uVar7,0x28ad30);
    if (iVar5 + 0xcc <= (int)puVar2) break;
    uVar7 = *puVar4;
  }
  return;
}

