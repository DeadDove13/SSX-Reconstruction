/* Ghidra pseudocode. PS2 address: 001d9dc8. Not validated source. */

void FUN_001d9dc8(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  switch(*(undefined4 *)(iVar4 + 0x44)) {
  case 2:
    FUN_001d9d78(param_1);
    FUN_001d8908(param_1);
    return;
  case 3:
    FUN_001d9d78(param_1);
    return;
  case 4:
    FUN_001d9d78(param_1);
    FUN_001d8c90(param_1);
    return;
  case 5:
    FUN_001d9d78(param_1);
    FUN_001d8d20(param_1);
    return;
  case 6:
    FUN_001d9d78(param_1);
    FUN_001d8db0(param_1);
    return;
  case 7:
    FUN_001d9d78(param_1);
    FUN_001d8e40(param_1);
    return;
  case 8:
    iVar3 = (int)*(short *)(*(int *)(iVar4 + 0x170) + 0x68);
    pcVar2 = *(code **)(*(int *)(iVar4 + 0x170) + 0x6c);
    break;
  default:
    return;
  case 10:
    (**(code **)(*(int *)(iVar4 + 0x170) + 0x6c))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x68));
    FUN_001d8c08(param_1);
    return;
  case 0xb:
    (**(code **)(*(int *)(iVar4 + 0x170) + 0x6c))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x68));
    FUN_001d8e98(param_1);
    return;
  case 0xc:
    (**(code **)(*(int *)(iVar4 + 0x170) + 0x6c))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x68));
    FUN_001d8f28(param_1);
    return;
  case 0xd:
    (**(code **)(*(int *)(iVar4 + 0x170) + 0x6c))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x68));
    FUN_001d8f98(param_1);
    return;
  case 0xe:
  case 0xf:
  case 0x10:
    (**(code **)(*(int *)(iVar4 + 0x170) + 0x6c))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x68));
    iVar3 = (int)*(short *)(*(int *)(iVar4 + 0x170) + 0x70);
    pcVar2 = *(code **)(*(int *)(iVar4 + 0x170) + 0x74);
    break;
  case 0x11:
    (**(code **)(*(int *)(iVar4 + 0x170) + 0x6c))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x68));
    FUN_001d91c0(param_1);
    return;
  case 0x12:
    (**(code **)(*(int *)(iVar4 + 0x170) + 0x6c))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x68));
    FUN_001d90e0(param_1);
    return;
  case 0x13:
    (**(code **)(*(int *)(iVar4 + 0x170) + 0x6c))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x68));
    FUN_001d93e8(param_1);
    return;
  case 0x14:
    (**(code **)(*(int *)(iVar4 + 0x170) + 0x6c))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x68));
    FUN_001d9488(param_1);
    return;
  case 0x15:
    FUN_001d9d78(param_1);
    FUN_001d8960(param_1);
    return;
  case 0x16:
    FUN_001d9d78(param_1);
    FUN_001d89e8(param_1);
    return;
  case 0x17:
    FUN_001d9d78(param_1);
    FUN_001d8a50(param_1);
    return;
  case 0x18:
    FUN_001d9d78(param_1);
    FUN_001d8ab8(param_1);
    return;
  case 0x19:
    FUN_001d9d78(param_1);
    FUN_001d8b28(param_1);
    return;
  case 0x1a:
    iVar3 = (int)*(short *)(*(int *)(iVar4 + 0x170) + 0xc0);
    pcVar2 = *(code **)(*(int *)(iVar4 + 0x170) + 0xc4);
    break;
  case 0x1b:
  case 0x1c:
  case 0x1d:
    *(undefined4 *)(iVar4 + 0x34) = 0x78;
    (**(code **)(*(int *)(iVar4 + 0x170) + 0xc4))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0xc0));
    iVar1 = *(int *)(iVar4 + 0x170);
    goto LAB_001da04c;
  case 0x1e:
    (**(code **)(*(int *)(iVar4 + 0x170) + 0xc4))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0xc0));
    iVar1 = *(int *)(iVar4 + 0x170);
LAB_001da04c:
    iVar3 = (int)*(short *)(iVar1 + 200);
    pcVar2 = *(code **)(iVar1 + 0xcc);
    break;
  case 0x1f:
    *(undefined4 *)(iVar4 + 0x34) = 0;
    (**(code **)(*(int *)(iVar4 + 0x170) + 0xc4))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0xc0));
    FUN_001d9378(param_1);
    return;
  case 0x20:
    *(undefined4 *)(iVar4 + 0x34) = 0;
    (**(code **)(*(int *)(iVar4 + 0x170) + 0xc4))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0xc0));
    FUN_001d9298(param_1);
    return;
  }
  (*pcVar2)(iVar4 + iVar3);
  return;
}

