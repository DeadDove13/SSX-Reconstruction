/* Ghidra pseudocode. PS2 address: 00156f00. Not validated source. */

undefined8 * FUN_00156f00(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar4 = param_1;
  do {
    if (*(int *)(param_1 + 0xf) == 0) {
      if (param_2 < *(int *)((int)puVar4 + 0x14)) goto LAB_00156f34;
    }
    else if (*(int *)((int)puVar4 + 0x14) < param_2) {
LAB_00156f34:
      iVar1 = 3;
      param_1 = param_1 + 9;
      if (iVar5 < 4) {
        do {
          param_1[3] = *param_1;
          param_1[4] = param_1[1];
          param_1[5] = param_1[2];
          iVar1 = iVar1 + -1;
          param_1 = param_1 + -3;
        } while (iVar5 <= iVar1);
      }
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      *puVar4 = *param_3;
      puVar4[1] = uVar2;
      puVar4[2] = uVar3;
      *(int *)((int)puVar4 + 0x14) = param_2;
      return puVar4;
    }
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 3;
    if (4 < iVar5) {
      return (undefined8 *)0x0;
    }
  } while( true );
}

