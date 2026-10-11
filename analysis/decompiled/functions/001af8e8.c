/* Ghidra pseudocode. PS2 address: 001af8e8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001afb44) */
/* WARNING: Removing unreachable block (ram,0x001afb74) */

int FUN_001af8e8(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  
  bVar6 = false;
  iVar1 = *param_2;
  iVar2 = iVar1 * 0x74;
  iVar7 = param_2[1];
  if (-1 < DAT_0027c330) {
    if (DAT_0027c330 == iVar1) {
      bVar6 = true;
    }
    else {
      iVar5 = 1;
      do {
        iVar3 = iVar5 * 4;
        if ((&DAT_0027c330)[iVar3] < 0) goto LAB_001af994;
        iVar5 = iVar5 + 1;
      } while ((&DAT_0027c330)[iVar3] != *param_2);
      bVar6 = true;
    }
  }
LAB_001af994:
  if (bVar6) {
    uVar4 = FUN_00234e80(DAT_002852fc,0x69);
    FUN_0019a7f8(&DAT_0028b270 + iVar7 * 0x800 + param_3 * 0x80,uVar4);
  }
  else {
    uVar4 = FUN_00234e80(DAT_002852fc,0x2c);
    FUN_0019a7f8(&DAT_0028b270 + iVar7 * 0x800 + param_3 * 0x80,uVar4);
  }
  iVar5 = iVar7 * 0x800;
  FUN_0019a830(&DAT_0028b270 + iVar5 + (param_3 + 1) * 0x80,0x2c50d0);
  uVar4 = FUN_00234e80(DAT_002852fc,0x2e);
  FUN_0019a7f8(&DAT_0028b270 + iVar5 + (param_3 + 2) * 0x80,uVar4);
  iVar7 = (iVar7 + 2) * 0x800;
  uVar4 = FUN_00234e80(DAT_002852fc,0x2f);
  FUN_0019a7f8(&DAT_0028b270 + iVar5 + (param_3 + 3) * 0x80,uVar4);
  uVar4 = FUN_00234e80(DAT_002852fc,0x30);
  FUN_0019a7f8(&DAT_0028b270 + iVar5 + (param_3 + 4) * 0x80,uVar4);
  uVar4 = FUN_00234e80(DAT_002852fc,0x31);
  FUN_0019a7f8(&DAT_0028b270 + iVar5 + (param_3 + 5) * 0x80,uVar4);
  uVar4 = FUN_00234e80(DAT_002852fc,0x2d);
  FUN_0019a7f8(&DAT_0028b270 + iVar5 + (param_3 + 6) * 0x80,uVar4);
  FUN_0019a8f0(&DAT_0028b270 + iVar7 + param_3 * 0x80,0x2c5190,(&DAT_0027bcac)[iVar1 * 0x1d]);
  FUN_0019a830(&DAT_0028b270 + iVar7 + (param_3 + 1) * 0x80,0x2c50d0);
  FUN_0019a8f0(&DAT_0028b270 + iVar7 + (param_3 + 2) * 0x80,0x2c5190,
               *(int *)(&DAT_0027bc3c + iVar2) / 0xb4);
  FUN_0019a8f0(&DAT_0028b270 + iVar7 + (param_3 + 3) * 0x80,0x2c5190,
               *(int *)(&DAT_0027bc40 + iVar2) / 0x168);
  FUN_0019a8f0(&DAT_0028b270 + iVar7 + (param_3 + 4) * 0x80,0x2c5190,
               *(undefined4 *)(&DAT_0027bc44 + iVar2));
  FUN_0019a8f0(&DAT_0028b270 + iVar7 + (param_3 + 5) * 0x80,0x2c5190,
               *(undefined4 *)(&DAT_0027bc48 + iVar2));
  FUN_001a2650((int)(*(float *)(&DAT_0027bc94 + iVar2) * 100.0),
               &DAT_0028b270 + iVar7 + (param_3 + 6) * 0x80);
  return param_3 + 7;
}

