/* Ghidra pseudocode. PS2 address: 0018f7c8. Not validated source. */

long FUN_0018f7c8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_0018dc18();
  lVar4 = FUN_0018dd28(param_1);
  if (((lVar4 == 0) && (lVar3 == 0)) && (lVar4 = FUN_0018dd60(param_1), lVar4 == 0xd)) {
    iVar1 = *(int *)((int)param_1 + 4);
    iVar2 = *(int *)(iVar1 + 0x114);
    lVar3 = (**(code **)(iVar2 + 0x1c))
                      (iVar1 + *(short *)(iVar2 + 0x18),param_1,*(undefined4 *)((int)param_1 + 0x18)
                      );
  }
  return lVar3;
}

