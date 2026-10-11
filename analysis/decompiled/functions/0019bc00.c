/* Ghidra pseudocode. PS2 address: 0019bc00. Not validated source. */

int FUN_0019bc00(float param_1,float param_2,int *param_3,int *param_4,uint *param_5,int param_6)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 < param_1) {
    return 0;
  }
  iVar7 = *param_3;
  iVar8 = 0;
  iVar6 = 0;
  *param_4 = (int)(&DAT_0028ac30 + param_6 * 4);
  if (iVar7 < 1) {
LAB_0019bce4:
    *param_4 = (int)&DAT_0028ac30;
    return iVar6;
  }
  iVar1 = param_3[1];
  do {
    puVar2 = (uint *)(iVar8 * 0x10 + iVar1);
    if (((float)puVar2[2] <= param_2) && (param_1 <= (float)puVar2[3])) {
      if ((float)puVar2[2] <= param_1) {
        if (param_2 < (float)puVar2[3]) {
          uVar3 = *puVar2;
          goto LAB_0019bca8;
        }
        iVar4 = *param_4;
      }
      else {
        uVar3 = *puVar2;
LAB_0019bca8:
        *param_5 = *param_5 | 1 << (uVar3 & 0x1f);
        iVar4 = *param_4;
      }
      iVar5 = iVar6 * 4;
      iVar7 = *param_3;
      iVar6 = iVar6 + 1;
      *(int *)(iVar5 + iVar4) = iVar1 + iVar8 * 0x10;
    }
    iVar8 = iVar8 + 1;
    if (iVar7 <= iVar8) goto LAB_0019bce4;
    iVar1 = param_3[1];
  } while( true );
}

