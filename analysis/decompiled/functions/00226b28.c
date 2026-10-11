/* Ghidra pseudocode. PS2 address: 00226b28. Not validated source. */

undefined4 FUN_00226b28(uint param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  uVar1 = 0xfffffff6;
  if (DAT_0029a888 != '\0') {
    if (param_1 < 8) {
      piVar4 = (int *)(&DAT_0029a7c0)[param_1];
    }
    else {
      piVar4 = (int *)0x0;
    }
    uVar1 = 0xfffffff8;
    if (piVar4 != (int *)0x0) {
      if ((int)((uint)*(byte *)((int)piVar4 + 0x16) << 0x18) <
          (int)((uint)*(byte *)((int)piVar4 + 0x15) << 0x18)) {
        lVar2 = FUN_0023ccf8(piVar4[1],param_3,param_4,0x6c454353);
        uVar1 = 0xffffffff;
        if (lVar2 != 0) {
          FUN_002250c0();
          puVar3 = (undefined4 *)(*piVar4 + *(char *)((int)piVar4 + 0x16) * 0x2c);
          *puVar3 = (int)lVar2;
          piVar4[4] = piVar4[4] + 0x100;
          if (piVar4[4] < 0) {
            piVar4[4] = 0;
          }
          puVar3[1] = piVar4[4] | param_1;
          *(undefined2 *)(puVar3 + 10) = param_2;
          *(char *)((int)piVar4 + 0x16) = *(char *)((int)piVar4 + 0x16) + '\x01';
          puVar3[4] = 0;
          puVar3[2] = 0xffffffff;
          puVar3[3] = 0xffffffff;
          puVar3[5] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          FUN_002250a0();
          uVar1 = puVar3[1];
        }
      }
      else {
        uVar1 = 0xfffffff3;
      }
    }
  }
  return uVar1;
}

