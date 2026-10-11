/* Ghidra pseudocode. PS2 address: 00226c78. Not validated source. */

undefined4
FUN_00226c78(uint param_1,undefined2 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  uVar1 = 0xfffffff6;
  if (DAT_0029a888 != '\0') {
    if (param_1 < 8) {
      piVar3 = (int *)(&DAT_0029a7c0)[param_1];
    }
    else {
      piVar3 = (int *)0x0;
    }
    uVar1 = 0xfffffff8;
    if ((piVar3 != (int *)0x0) &&
       (uVar1 = 0xfffffff3,
       (int)((uint)*(byte *)((int)piVar3 + 0x16) << 0x18) <
       (int)((uint)*(byte *)((int)piVar3 + 0x15) << 0x18))) {
      if (param_5 == 0) {
        param_4 = FUN_0023ccf8(piVar3[1],param_3,param_4,0x6c454353);
      }
      else if (param_5 == 1) {
        param_4 = FUN_0023d9e0(piVar3[1],param_3,0,0x6c454353);
      }
      uVar1 = 0xffffffff;
      if (param_4 != 0) {
        FUN_002250c0();
        puVar2 = (undefined4 *)(*piVar3 + *(char *)((int)piVar3 + 0x16) * 0x2c);
        *puVar2 = (int)param_4;
        piVar3[4] = piVar3[4] + 0x100;
        if (piVar3[4] < 0) {
          piVar3[4] = 0;
        }
        puVar2[1] = piVar3[4] | param_1;
        *(undefined2 *)(puVar2 + 10) = param_2;
        *(char *)((int)piVar3 + 0x16) = *(char *)((int)piVar3 + 0x16) + '\x01';
        puVar2[4] = 0;
        puVar2[2] = 0xffffffff;
        puVar2[3] = 0xffffffff;
        puVar2[5] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        FUN_002250a0();
        uVar1 = puVar2[1];
      }
    }
  }
  return uVar1;
}

