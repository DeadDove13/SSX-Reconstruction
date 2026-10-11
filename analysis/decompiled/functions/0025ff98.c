/* Ghidra pseudocode. PS2 address: 0025ff98. Not validated source. */

undefined4 * FUN_0025ff98(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  puVar1 = puVar4 + 0x76;
  if (puVar4[0xe] != 0) goto LAB_0025ffd0;
  FUN_00260098();
  iVar2 = puVar4[0x77];
  puVar3 = puVar1;
  do {
    puVar1 = (undefined4 *)puVar3[2];
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      if (*(short *)(puVar1 + 3) == 0) {
        *(undefined2 *)(puVar1 + 3) = 1;
        *(undefined2 *)((int)puVar1 + 0xe) = 0xffff;
        puVar1[0x15] = puVar4;
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1[1] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        puVar1[0x11] = 0;
        puVar1[0x12] = 0;
        return puVar1;
      }
      puVar1 = puVar1 + 0x16;
    }
    puVar1 = (undefined4 *)*puVar3;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_0025ff28(param_1,4);
      *puVar3 = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        *puVar4 = 0xc;
        return (undefined4 *)0x0;
      }
    }
LAB_0025ffd0:
    iVar2 = puVar1[1];
    puVar3 = puVar1;
  } while( true );
}

