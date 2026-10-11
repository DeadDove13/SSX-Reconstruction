/* Ghidra pseudocode. PS2 address: 001be538. Not validated source. */

void FUN_001be538(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  
  bVar1 = (byte)*param_2;
  uVar5 = 1;
  if (bVar1 == 3) {
LAB_001be5e0:
    uVar4 = param_2[3];
  }
  else if (bVar1 < 4) {
    if (bVar1 == 2) {
      if ((*param_2 & 0xffffff00) == 0) {
        pbVar6 = (byte *)0x0;
      }
      else {
        pbVar6 = (byte *)((int)param_2 + ((int)*param_2 >> 8));
      }
      uVar4 = param_2[3];
      uVar3 = (undefined2)param_2[1];
      uVar2 = *(undefined2 *)((int)param_2 + 6);
      pbVar6 = pbVar6 + 0x10;
      uVar5 = 4;
      goto LAB_001be600;
    }
    uVar4 = param_2[3];
  }
  else {
    if (bVar1 == 5) {
      uVar5 = 3;
      goto LAB_001be5e0;
    }
    uVar4 = param_2[3];
  }
  uVar3 = (undefined2)param_2[1];
  pbVar6 = (byte *)0x0;
  uVar2 = *(undefined2 *)((int)param_2 + 6);
LAB_001be600:
  FUN_001be688(param_1,param_2 + 4,uVar3,uVar2,uVar4 >> 0x1c,uVar5,param_3,pbVar6);
  return;
}

