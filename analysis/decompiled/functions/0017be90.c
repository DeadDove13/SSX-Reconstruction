/* Ghidra pseudocode. PS2 address: 0017be90. Not validated source. */

void FUN_0017be90(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  uVar3 = FUN_00155b30(0x27a598,*(undefined1 *)(param_1 + 0x298));
  *(undefined4 *)(param_1 + 0x338) = uVar3;
  uVar3 = FUN_00155ab0(0x27a598,*(undefined1 *)(param_1 + 0x298));
  *(undefined4 *)(param_1 + 0x33c) = uVar3;
  lVar5 = FUN_00154788(0x27a598,*(undefined1 *)(param_1 + 0x298),*(undefined4 *)(param_1 + 0x338));
  if (lVar5 == 0) {
    iVar7 = 0;
    while ((iVar7 < 0xb &&
           (lVar5 = FUN_00154788(0x27a598,*(undefined1 *)(param_1 + 0x298),iVar7), lVar5 == 0))) {
      iVar7 = iVar7 + 1;
    }
    if (iVar7 >= 0xb) {
      iVar7 = 0;
    }
    *(int *)(param_1 + 0x338) = iVar7;
    uVar1 = *(undefined1 *)(param_1 + 0x298);
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x298);
  }
  lVar5 = FUN_00154808(0x27a598,uVar1,*(undefined4 *)(param_1 + 0x33c));
  if (lVar5 == 0) {
    iVar7 = 0;
    while ((iVar7 < 4 &&
           (lVar5 = FUN_00154808(0x27a598,*(undefined1 *)(param_1 + 0x298),iVar7), lVar5 == 0))) {
      iVar7 = iVar7 + 1;
    }
    if (iVar7 >= 4) {
      iVar7 = 0;
    }
    *(int *)(param_1 + 0x33c) = iVar7;
    cVar2 = *(char *)(param_1 + 0x298);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x298);
  }
  if (cVar2 == '\x01') {
    iVar7 = *(int *)(param_1 + 0x33c);
    lVar5 = FUN_00154c60(0x27a598,0);
    lVar6 = FUN_00154c60(0x27a598,1);
    if ((lVar5 == lVar6) && (iVar4 = FUN_00155ab0(0x27a598,0), iVar7 == iVar4)) {
      iVar7 = 0;
      while (lVar5 = FUN_00154808(0x27a598,*(undefined1 *)(param_1 + 0x298),iVar7), lVar5 != 0) {
        iVar4 = FUN_00155ab0(0x27a598,0);
        if (iVar7 != iVar4) {
          *(int *)(param_1 + 0x33c) = iVar7;
          return;
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  return;
}

