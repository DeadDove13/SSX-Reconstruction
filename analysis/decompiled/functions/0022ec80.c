/* Ghidra pseudocode. PS2 address: 0022ec80. Not validated source. */

undefined4 FUN_0022ec80(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = *(byte *)*param_1;
  pbVar2 = (byte *)*param_1;
  while (bVar1 == 0xfc) {
    *param_1 = (int)(pbVar2 + 1);
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  bVar1 = *pbVar2;
  param_1[1] = (uint)bVar1;
  uVar3 = 0;
  if (bVar1 != 0xff) {
    *param_1 = (int)(pbVar2 + 1);
    uVar3 = 1;
    if (bVar1 != 0xfd) {
      if (bVar1 == 0xfe) {
        uVar3 = 1;
      }
      else {
        bVar1 = pbVar2[1];
        param_1[4] = (uint)bVar1;
        if (bVar1 == 0xff) {
          iVar4 = FUN_00229740(pbVar2 + 2,4);
          param_1[4] = iVar4;
          *param_1 = *param_1 + 4;
        }
        iVar4 = *param_1;
        uVar5 = param_1[4];
        *param_1 = iVar4 + 1;
        param_1[3] = iVar4 + 1;
        if (uVar5 < 5) {
          iVar4 = FUN_00229740();
          param_1[2] = iVar4;
          uVar5 = param_1[4];
        }
        uVar3 = 1;
        *param_1 = *param_1 + uVar5;
      }
    }
  }
  return uVar3;
}

