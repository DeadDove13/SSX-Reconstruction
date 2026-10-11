/* Ghidra pseudocode. PS2 address: 0017e450. Not validated source. */

ulong FUN_0017e450(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  if (*(int *)(iVar6 + 0xbc4) == 0) {
    if (*(int *)(iVar6 + 0xbb0) == 0) {
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_0016f348(param_1,*(undefined4 *)(*(int *)(iVar6 + 0xb3c) + 0x46c));
      if (lVar2 == 0x174) {
        uVar3 = FUN_00154788(0x27a598,*(undefined4 *)(*(int *)(iVar6 + 0xb3c) + 0x46c),
                             *(undefined4 *)(*(int *)(iVar6 + 0xb90) + 0x338));
        uVar3 = uVar3 ^ 1;
      }
      else {
        uVar3 = 0;
        if (lVar2 == 0x175) {
          if (*(int *)(*(int *)(iVar6 + 0xb3c) + 0x46c) == 1) {
            iVar5 = *(int *)(*(int *)(iVar6 + 0xb90) + 0x33c);
            lVar2 = FUN_00154c60(0x27a598,0);
            lVar4 = FUN_00154c60(0x27a598,1);
            if (lVar2 == lVar4) {
              iVar1 = FUN_00155ab0(0x27a598,0);
              if (iVar5 == iVar1) {
                return 1;
              }
              iVar5 = *(int *)(iVar6 + 0xb90);
            }
            else {
              iVar5 = *(int *)(iVar6 + 0xb90);
            }
          }
          else {
            iVar5 = *(int *)(iVar6 + 0xb90);
          }
          uVar3 = FUN_00154808(0x27a598,*(undefined4 *)(*(int *)(iVar6 + 0xb3c) + 0x46c),
                               *(undefined4 *)(iVar5 + 0x33c));
          uVar3 = uVar3 ^ 1;
        }
      }
    }
  }
  else {
    lVar2 = FUN_00154c98(0x27a598,*(undefined4 *)(*(int *)(iVar6 + 0xb3c) + 0x46c));
    uVar3 = (ulong)(lVar2 != 0);
  }
  return uVar3;
}

