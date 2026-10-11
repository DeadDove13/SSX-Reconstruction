
void FUN_00127440(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  undefined1 auStack_3b0 [64];
  undefined1 auStack_370 [768];
  
  iVar6 = (int)param_1;
  bVar1 = *(int *)(iVar6 + 0x60) == 0;
  if ((0 < *(int *)(iVar6 + 0x5c)) &&
     (iVar2 = *(int *)(iVar6 + 0x5c) + -1, *(int *)(iVar6 + 0x5c) = iVar2, 0 < iVar2)) {
    bVar1 = true;
  }
  (**(code **)(*(int *)(iVar6 + 8) + 0xf4))(iVar6 + *(short *)(*(int *)(iVar6 + 8) + 0xf0));
  if (*(int *)(iVar6 + 0x60) == 1) {
    iVar2 = *(int *)(iVar6 + 0x70);
  }
  else {
    if (0 < *(int *)(iVar6 + 0x5c)) {
      iVar2 = *(int *)(iVar6 + 8);
      goto LAB_001275a4;
    }
    iVar2 = *(int *)(iVar6 + 0x70);
  }
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + (iVar4 + 2) * 4)) {
    lVar5 = FUN_00111098(iVar2,iVar6 + 0x70);
    iVar4 = *(int *)(*(int *)(iVar2 + (uint)(lVar5 == 0) * 4) + 0x84);
    if (*(int *)(iVar4 + 0x14) == 0x1a) {
      if ((iVar4 == 0) || (piVar3 = (int *)(iVar4 + -0x868), iVar4 == 0x868)) {
        iVar4 = 0;
      }
      else {
        if (iVar4 == 0) {
          piVar3 = (int *)0x0;
        }
        iVar4 = *piVar3;
      }
      FUN_0021b888(auStack_370,iVar4 + 0x3a0,1);
      fVar7 = (float)FUN_001223c8(param_1,auStack_370,auStack_3b0);
      if (0.0 < fVar7) {
        bVar1 = true;
        (**(code **)(*(int *)(iVar6 + 8) + 0xec))
                  (iVar6 + *(short *)(*(int *)(iVar6 + 8) + 0xe8),iVar4);
      }
      FUN_0021bd40(auStack_370,2);
    }
    iVar4 = FUN_00111098(iVar2,iVar6 + 0x70);
  }
  iVar2 = *(int *)(iVar6 + 8);
LAB_001275a4:
  (**(code **)(iVar2 + 0xfc))(iVar6 + *(short *)(iVar2 + 0xf8));
  if (!bVar1) {
    (**(code **)(*(int *)(iVar6 + 8) + 0xb4))(iVar6 + *(short *)(*(int *)(iVar6 + 8) + 0xb0),1);
  }
  return;
}

