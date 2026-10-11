/* Ghidra pseudocode. PS2 address: 00256098. Not validated source. */

uint FUN_00256098(int param_1,long param_2,undefined8 param_3,long param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  *param_5 = 1;
  if (param_2 != 0) {
    iVar5 = (int)param_2 + 8;
    iVar2 = 0;
    if (param_4 != 0) {
      iVar2 = param_1 - iVar5;
      param_1 = *(int *)(param_1 + 4);
      iVar2 = iVar2 >> 4;
      if (*(int *)(iVar2 * 0x10 + iVar5) != -1) {
        iVar2 = iVar2 + 1;
      }
    }
    puVar4 = (uint *)(iVar2 * 0x10 + iVar5);
    if (*puVar4 != 0xffffffff) {
      uVar1 = *puVar4;
      do {
        if ((uVar1 <= param_1 - 1U) && (param_1 - 1U < puVar4[1])) {
          if (puVar4[3] == 0) {
            if (uVar6 == 0) {
              uVar6 = puVar4[2];
            }
          }
          else if (((code *)*(undefined4 *)param_3 != (code *)0x0) &&
                  (lVar3 = (*(code *)*(undefined4 *)param_3)(param_3,puVar4[3],param_2), lVar3 != 0)
                  ) {
            if (uVar6 == 0) {
              uVar6 = puVar4[2];
            }
            *param_5 = 0;
            return uVar6;
          }
        }
        puVar4 = puVar4 + 4;
        uVar1 = *puVar4;
      } while (uVar1 != 0xffffffff);
    }
  }
  return uVar6;
}

