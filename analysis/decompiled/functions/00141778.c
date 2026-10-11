/* Ghidra pseudocode. PS2 address: 00141778. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00141840) */
/* WARNING: Removing unreachable block (ram,0x001417f0) */

void FUN_00141778(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  FUN_00142f28();
  iVar3 = (int)param_1;
  iVar2 = *(int *)(*(int *)(iVar3 + 0x60) + 0x6cf4);
  iVar1 = *(int *)(iVar2 + 0x3d4);
  (**(code **)(iVar1 + 0x14))(iVar2 + *(short *)(iVar1 + 0x10));
  iVar2 = *(int *)(iVar3 + 0x60);
  if (*(int *)(*(int *)(iVar2 + 0x394) + 0x28) == 0) {
    iVar2 = *(int *)(iVar3 + 0x60);
  }
  else {
    if (*(int *)(iVar2 + 0x344) == 2) {
      iVar1 = *(int *)(iVar2 + 0x6cf4);
      *(undefined4 *)(iVar1 + 0xc) = 1;
      fVar4 = DAT_002c2224;
      *(undefined4 *)(iVar2 + 0x144) = 1;
      *(float *)(iVar1 + 0x18) = DAT_002c2228 - fVar4 * 1.0;
      goto LAB_0014186c;
    }
    iVar2 = *(int *)(iVar3 + 0x60);
  }
  iVar1 = *(int *)(iVar2 + 0x6cf4);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  fVar4 = DAT_002c222c * 0.0;
  *(undefined4 *)(iVar2 + 0x144) = 0;
  *(float *)(iVar1 + 0x18) = 0.0 - fVar4;
LAB_0014186c:
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x210) = 10;
  *(undefined4 *)(iVar2 + 0x16c) = 0;
  FUN_00144df0(param_1);
  return;
}

