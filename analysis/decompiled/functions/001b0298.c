/* Ghidra pseudocode. PS2 address: 001b0298. Not validated source. */

int FUN_001b0298(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_2;
  iVar2 = iVar1 * 0x74;
  iVar4 = param_2[1] * 0x800;
  iVar5 = (param_2[1] + 1) * 0x800;
  uVar3 = FUN_00234e80(DAT_002852fc,0x2c);
  FUN_0019a7f8(&DAT_0028b270 + iVar4 + param_3 * 0x80,uVar3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x33);
  FUN_0019a7f8(&DAT_0028b270 + iVar4 + (param_3 + 1) * 0x80,uVar3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x34);
  FUN_0019a7f8(&DAT_0028b270 + iVar4 + (param_3 + 2) * 0x80,uVar3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x35);
  FUN_0019a7f8(&DAT_0028b270 + iVar4 + (param_3 + 3) * 0x80,uVar3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x36);
  FUN_0019a7f8(&DAT_0028b270 + iVar4 + (param_3 + 4) * 0x80,uVar3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x2d);
  FUN_0019a7f8(&DAT_0028b270 + iVar4 + (param_3 + 5) * 0x80,uVar3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x37);
  FUN_0019a7f8(&DAT_0028b270 + iVar4 + (param_3 + 6) * 0x80,uVar3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x38);
  FUN_0019a7f8(&DAT_0028b270 + iVar4 + (param_3 + 7) * 0x80,uVar3);
  uVar3 = FUN_00234e80(DAT_002852fc,0x39);
  FUN_0019a7f8(&DAT_0028b270 + iVar4 + (param_3 + 8) * 0x80,uVar3);
  FUN_0019a830(&DAT_0028b270 + iVar4 + (param_3 + 9) * 0x80,0x2c50d0);
  uVar3 = FUN_00234e80(DAT_002852fc,0x3a);
  FUN_0019a7f8(&DAT_0028b270 + iVar4 + (param_3 + 10) * 0x80,uVar3);
  FUN_0019a8f0(&DAT_0028b270 + iVar5 + param_3 * 0x80,0x2c5190,(&DAT_0027bcac)[iVar1 * 0x1d]);
  FUN_0019a8f0(&DAT_0028b270 + iVar5 + (param_3 + 1) * 0x80,0x2c5198,
               (int)(*(float *)(&DAT_0027bc98 + iVar2) / *(float *)(&DAT_0027bc9c + iVar2)));
  FUN_0019a8f0(&DAT_0028b270 + iVar5 + (param_3 + 2) * 0x80,0x2c5190,
               *(undefined4 *)(&DAT_0027bc4c + iVar2));
  FUN_0019a8f0(&DAT_0028b270 + iVar5 + (param_3 + 3) * 0x80,0x2c5190,
               *(undefined4 *)(&DAT_0027bc54 + iVar2));
  FUN_0019a8f0(&DAT_0028b270 + iVar5 + (param_3 + 4) * 0x80,0x2c5190,
               *(undefined4 *)(&DAT_0027bc50 + iVar2));
  FUN_001a2650((int)(*(float *)(&DAT_0027bc94 + iVar2) * 100.0),
               &DAT_0028b270 + iVar5 + (param_3 + 5) * 0x80);
  FUN_001a2650((int)(*(float *)(&DAT_0027bc88 + iVar2) * 100.0),
               &DAT_0028b270 + iVar5 + (param_3 + 6) * 0x80);
  FUN_001a2650((int)(*(float *)(&DAT_0027bc8c + iVar2) * 100.0),
               &DAT_0028b270 + iVar5 + (param_3 + 7) * 0x80);
  FUN_001a2650((int)(*(float *)(&DAT_0027bc90 + iVar2) * 100.0),
               &DAT_0028b270 + iVar5 + (param_3 + 8) * 0x80);
  FUN_0019a830(&DAT_0028b270 + iVar5 + (param_3 + 9) * 0x80,0x2c50d0);
  FUN_001a2650(*(undefined4 *)(&DAT_0027bc24 + *param_2 * 4),
               &DAT_0028b270 + iVar5 + (param_3 + 10) * 0x80);
  return param_3 + 0xb;
}

