/* Ghidra pseudocode. PS2 address: 001234c8. Not validated source. */

void FUN_001234c8(int param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xe4) + 0x100);
  iVar4 = (int)param_2;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x14) == 5) {
      return;
    }
    lVar1 = (**(code **)(*(int *)(iVar2 + 8) + 100))(iVar2 + *(short *)(*(int *)(iVar2 + 8) + 0x60))
    ;
    if (lVar1 == 0) {
      iVar2 = *(int *)(param_1 + 0xe4);
      if (*(int *)(*(int *)(iVar2 + 0x100) + 0x14) == *(int *)(iVar4 + 4)) {
        return;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0xe4);
      iVar3 = *(int *)(iVar2 + 0x100);
      if (*(int *)(iVar3 + 0x14) == *(int *)(iVar4 + 4)) {
        (**(code **)(*(int *)(iVar3 + 8) + 0x74))(iVar3 + *(short *)(*(int *)(iVar3 + 8) + 0x70));
        return;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x100);
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 8) + 8),3);
    }
  }
  iVar3 = param_1 + 0x50;
  iVar2 = *(int *)(iVar4 + 4);
  iVar4 = 0;
  if (*(int *)(param_1 + 0xd0) != 0) {
    iVar4 = iVar3;
  }
  if (iVar2 == 0xe) {
    lVar1 = FUN_002107c8(0x298590,0x70,0x40000000,0x2c40c8,0,0);
    if (lVar1 != 0) {
      FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x70);
    }
    FUN_0012b3d0(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2,iVar3);
  }
  else if (iVar2 < 0xf) {
    if (iVar2 == 8) {
      lVar1 = FUN_002107c8(0x298590,0x3c,0x40000000,0x2c40a0,0,0);
      if (lVar1 != 0) {
        FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x3c);
      }
      FUN_00126bf0(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
    }
    else if (iVar2 < 9) {
      if (iVar2 == 5) {
        FUN_00122488(*(undefined4 *)(param_1 + 0xe4),param_2);
      }
      else if (iVar2 < 6) {
        if (iVar2 == 0) {
          lVar1 = FUN_002107c8(0x298590,0x350,0x40000000,0x2c4088,0,0);
          if (lVar1 != 0) {
            FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x350);
          }
          FUN_001243d0(lVar1,3,*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8),iVar3
                       ,param_1 + 0x90,param_2);
        }
        else if (iVar2 == 2) {
          lVar1 = FUN_002107c8(0x298590,0x30,0x40000000,0x2a8dd8,0,0);
          if (lVar1 != 0) {
            FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x30);
          }
          FUN_00126a10(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
        }
      }
      else if (iVar2 == 6) {
        lVar1 = FUN_002107c8(0x298590,0x3c,0x40000000,0x2c4090,0,0);
        if (lVar1 != 0) {
          FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x3c);
        }
        FUN_00122790(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
      }
      else if (iVar2 == 7) {
        lVar1 = FUN_002107c8(0x298590,0x100,0x40000000,0x2c4098,0,0);
        if (lVar1 != 0) {
          FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x100);
        }
        FUN_00127240(lVar1,3,7,*(undefined4 *)(param_1 + 0xe4),param_2);
      }
    }
    else if (iVar2 == 0xb) {
      lVar1 = FUN_002107c8(0x298590,0x7c,0x40000000,0x2c40b0,0,0);
      if (lVar1 != 0) {
        FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x7c);
      }
      FUN_00129690(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
    }
    else if (iVar2 < 0xc) {
      if (iVar2 == 9) {
        lVar1 = FUN_002107c8(0x298590,0x40,0x40000000,0x2c40a8,0,0);
        if (lVar1 != 0) {
          FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x40);
        }
        FUN_00126f00(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
      }
      else if (iVar2 == 10) {
        lVar1 = FUN_002107c8(0x298590,100,0x40000000,0x2a8e18,0,0);
        if (lVar1 != 0) {
          FUN_0023bbd0(lVar1,0xffffffffdeadc0de,100);
        }
        FUN_00128748(lVar1,3,10,*(undefined4 *)(param_1 + 0xe4),param_2);
      }
    }
    else if (iVar2 == 0xc) {
      lVar1 = FUN_002107c8(0x298590,0x370,0x40000000,0x2c40b8,0,0);
      if (lVar1 != 0) {
        FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x370);
      }
      FUN_00129c00(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2,iVar3);
    }
    else if (iVar2 == 0xd) {
      lVar1 = FUN_002107c8(0x298590,0x350,0x40000000,0x2c40c0,0,0);
      if (lVar1 != 0) {
        FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x350);
      }
      FUN_0012ab00(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
    }
  }
  else if (iVar2 == 0x14) {
    lVar1 = FUN_002107c8(0x298590,0x780,0x60000000,0x2a8e78,0,0);
    if ((lVar1 != 0) && (FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0x780), lVar1 != 0)) {
      FUN_0012d4f8(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2,iVar4);
    }
  }
  else if (iVar2 < 0x15) {
    if (iVar2 == 0x11) {
      lVar1 = FUN_002107c8(0x298590,0x360,0x40000000,0x2a8e58,0,0);
      if (lVar1 != 0) {
        FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x360);
      }
      FUN_0012b858(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
    }
    else if (iVar2 < 0x12) {
      if (iVar2 == 0xf) {
        lVar1 = FUN_002107c8(0x298590,0x100,0x40000000,0x2a8e38,0,0);
        if (lVar1 != 0) {
          FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x100);
        }
        FUN_001276f8(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
      }
      else if (iVar2 == 0x10) {
        lVar1 = FUN_002107c8(0x298590,400,0x40000000,0x2a8e48,0,0);
        if (lVar1 != 0) {
          FUN_0023bbd0(lVar1,0xffffffffdeadc0de,400);
        }
        FUN_00127e20(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
      }
    }
    else if (iVar2 == 0x12) {
      lVar1 = FUN_002107c8(0x298590,0x100,0x40000000,0x2c40d0,0,0);
      if (lVar1 != 0) {
        FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x100);
      }
      FUN_00128270(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
    }
    else if (iVar2 == 0x13) {
      lVar1 = FUN_002107c8(0x298590,0xd4,0x40000000,0x2a8e28,0,0);
      if (lVar1 != 0) {
        FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0xd4);
      }
      FUN_0012d048(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
    }
  }
  else if (iVar2 == 0x100) {
    lVar1 = FUN_002107c8(0x298590,0x68,0x40000000,0x2a8de8,0,0);
    if (lVar1 != 0) {
      FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x68);
    }
    FUN_0019cc48(lVar1,3,0x100,*(undefined4 *)(param_1 + 0xe4),param_2,iVar4,1);
  }
  else if (iVar2 < 0x101) {
    if (iVar2 == 0x15) {
      if (*(int *)(param_1 + 0xe8) != 0) {
        lVar1 = FUN_002107c8(0x298590,0xd8,0x40000000,0x2a8e88,0,0);
        if (lVar1 != 0) {
          FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0xd8);
        }
        FUN_0012e4d8(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2,*(undefined4 *)(param_1 + 0xe8)
                    );
      }
    }
    else if (iVar2 == 0x16) {
      lVar1 = FUN_002107c8(0x298590,0x1a0,0x40000000,0x2a8e98,0,0);
      if (lVar1 != 0) {
        FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x1a0);
      }
      FUN_0012eb98(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2);
    }
  }
  else if (iVar2 == 0x102) {
    lVar1 = FUN_002107c8(0x298590,0x88,0x40000000,0x2a8e08,0,0);
    if (lVar1 != 0) {
      FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x88);
    }
    FUN_0019e7d0(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2,iVar4);
  }
  else if (iVar2 < 0x102) {
    lVar1 = FUN_002107c8(0x298590,0x6c,0x40000000,0x2a8df8,0,0);
    if (lVar1 != 0) {
      FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x6c);
    }
    FUN_0019e5e0(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2,iVar4);
  }
  else if (iVar2 == 0x103) {
    lVar1 = FUN_002107c8(0x298590,0xb0,0x40000000,0x2a8e68,0,0);
    if (lVar1 != 0) {
      FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0xb0);
    }
    FUN_0019ee78(lVar1,3,*(undefined4 *)(param_1 + 0xe4),param_2,iVar4);
  }
  return;
}

