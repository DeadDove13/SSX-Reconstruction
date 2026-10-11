/* Ghidra pseudocode. PS2 address: 00102280. Not validated source. */

void FUN_00102280(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = FUN_00101418(param_2);
  iVar7 = (int)param_2;
  if (lVar3 != 0) {
    FUN_002229e8(0x299cc8,0);
    (**(code **)(*(int *)(iVar7 + 8) + 0x6c))(iVar7 + *(short *)(*(int *)(iVar7 + 8) + 0x68));
    lVar4 = FUN_00103390(param_2);
    iVar2 = DAT_002859e4;
    if (lVar4 != 0) {
      iVar2 = *(int *)(iVar7 + 0x8c);
      goto LAB_00102308;
    }
    *(undefined4 *)(iVar7 + 0x14) = 0xc3960000;
    FUN_001a32b0(*(undefined4 *)(iVar2 + 0x30),4,0xffffffffffffffff);
  }
  iVar2 = *(int *)(iVar7 + 0x8c);
LAB_00102308:
  iVar6 = 0;
  if (0 < iVar2) {
    puVar5 = (undefined4 *)(iVar7 + 200);
    uVar1 = *puVar5;
    while( true ) {
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
      FUN_00107a88(uVar1,lVar3);
      if (*(int *)(iVar7 + 0x8c) <= iVar6) break;
      uVar1 = *puVar5;
    }
  }
  return;
}

