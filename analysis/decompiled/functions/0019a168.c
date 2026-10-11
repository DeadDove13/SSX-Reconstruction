/* Ghidra pseudocode. PS2 address: 0019a168. Not validated source. */

undefined4 FUN_0019a168(int *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 1;
  if ((DAT_0027ad04 != 0) && (iVar1 = *param_1, 1 < iVar1)) {
    puVar3 = (uint *)(param_1 + 0x16);
    iVar5 = 0x40;
    do {
      if (param_2 <= *puVar3) {
        puVar2 = (undefined8 *)(iVar5 + (int)param_1);
        if (iVar4 < iVar1 + -1) {
          do {
            *puVar2 = *(undefined8 *)((int)puVar2 + 0x1c);
            puVar2[1] = *(undefined8 *)((int)puVar2 + 0x24);
            puVar2[2] = *(undefined8 *)((int)puVar2 + 0x2c);
            *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((int)puVar2 + 0x34);
            iVar4 = iVar4 + 1;
            puVar2 = (undefined8 *)((int)puVar2 + 0x1c);
          } while (iVar4 < *param_1 + -1);
        }
        *param_1 = *param_1 + -1;
        return 1;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 7;
      iVar5 = iVar5 + 0x1c;
    } while (iVar4 < iVar1);
  }
  return 0;
}

