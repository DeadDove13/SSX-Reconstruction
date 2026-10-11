/* Ghidra pseudocode. PS2 address: 001a2470. Not validated source. */

void FUN_001a2470(float param_1,float param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar3 = FUN_001a07a8(param_4,*(undefined2 *)param_5);
  if (lVar3 != 0) {
    iVar5 = (int)lVar3;
    bVar2 = *(byte *)(iVar5 + 3);
    cVar1 = *(char *)(iVar5 + 10);
    param_1 = param_1 - (float)(int)((uint)(*(byte *)(iVar5 + 2) >> 1) + (int)*(char *)(iVar5 + 9));
    uVar4 = FUN_00258948(param_3,*(char *)(iVar5 + 9));
    FUN_001a1368(param_1,param_2 - (float)(int)((uint)(bVar2 >> 1) + (int)cVar1),param_4,param_5,
                 uVar4);
    return;
  }
  return;
}

