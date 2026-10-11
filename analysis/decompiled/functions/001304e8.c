/* Ghidra pseudocode. PS2 address: 001304e8. Not validated source. */

void FUN_001304e8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_001a3760(*(undefined4 *)(DAT_002859e4 + 0x30));
  if ((**(int **)(iVar1 + 0x174) == 0) && (lVar2 = FUN_0018e858(0x28abe0), lVar2 == 0)) {
    switch(*(undefined4 *)((int)param_1 + 0xc)) {
    case 2:
      FUN_00130860(param_1,param_2);
      break;
    case 3:
      FUN_00130868(param_1,param_2);
      break;
    case 4:
      FUN_00130870(param_1,param_2);
      break;
    case 5:
      FUN_00131a38((int)param_1 + 0x4c,param_2);
      break;
    case 6:
      FUN_00130990(param_1,param_2);
    default:
    }
    iVar1 = FUN_001a3750(*(undefined4 *)(DAT_002859e4 + 0x30));
    if (*(int *)(iVar1 + 0xcc) != 0) {
      FUN_0011ed18(0x295e90,0x11);
      FUN_0011ed48(0x295e90,3);
      FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
      DAT_0028ad3c = DAT_002c1bf8;
      DAT_0028ad30 = DAT_002c1bfc;
      DAT_0028ad34 = DAT_002c1bf8;
      DAT_0028ad38 = DAT_002c1bf8;
      FUN_0019f6d8(0,0,0x44200000,0x43f00000,0x28ad30);
      FUN_0011ed18(0x295e90,0x12);
      uVar3 = FUN_001a3750(*(undefined4 *)(DAT_002859e4 + 0x30));
      FUN_001aa010(uVar3);
    }
  }
  return;
}

