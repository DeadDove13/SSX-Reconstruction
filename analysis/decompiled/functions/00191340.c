/* Ghidra pseudocode. PS2 address: 00191340. Not validated source. */

undefined8 FUN_00191340(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = FUN_00190cf0();
  lVar5 = FUN_0018dd28(param_1);
  if (lVar5 == 0) {
    puVar1 = *(undefined8 **)((int)param_1 + 0x5ac);
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((int)param_1 + 0x530);
      uVar3 = *(undefined4 *)(puVar2 + 1);
      *puVar1 = *puVar2;
      *(undefined4 *)(puVar1 + 1) = uVar3;
    }
  }
  return uVar4;
}

