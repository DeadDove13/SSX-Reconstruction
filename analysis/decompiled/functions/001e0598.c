/* Ghidra pseudocode. PS2 address: 001e0598. Not validated source. */

void FUN_001e0598(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  int iVar8;
  
  FUN_001cb238(param_1,7,0);
  FUN_0011ed08(0x295e90,2,0);
  iVar8 = (int)param_1;
  puVar1 = *(undefined8 **)(iVar8 + 0x1458);
  piVar6 = (int *)(iVar8 + 0x1458);
  *puVar1 = 0x1000000c;
  *(undefined8 **)(iVar8 + 0x1458) = puVar1 + 4;
  puVar1[3] = 0x6c09800000000000;
  puVar7 = (undefined8 *)(param_2 + 8);
  puVar1[1] = 0;
  iVar5 = 8;
  puVar1[2] = 0;
  do {
    iVar5 = iVar5 + -1;
    puVar2 = (undefined8 *)*piVar6;
    *puVar2 = puVar7[-1];
    uVar4 = *puVar7;
    *piVar6 = (int)(puVar2 + 2);
    puVar7 = puVar7 + 2;
    puVar2[1] = uVar4;
  } while (iVar5 != -1);
  puVar2[2] = 0;
  puVar2[3] = 0x1400000000000000;
  uVar3 = *(undefined4 *)(iVar8 + 8);
  puVar2[4] = 0x1300000000000000;
  *piVar6 = (int)(puVar2 + 8);
  puVar2[5] = 0;
  FUN_001d39e8(uVar3,puVar1,puVar2 + 6,0);
  FUN_0011ed08(0x295e90,0,0);
  FUN_001cb238(param_1,0,0);
  return;
}

