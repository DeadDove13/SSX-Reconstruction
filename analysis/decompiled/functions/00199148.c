/* Ghidra pseudocode. PS2 address: 00199148. Not validated source. */

void FUN_00199148(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[0x1766] = iVar1;
  if (iVar1 != 0) {
    if (iVar1 != param_1[5]) {
      iVar1 = param_1[0x175f];
      goto LAB_0019916c;
    }
    param_1[0x1766] = *(int *)(iVar1 + 0x28);
  }
  iVar1 = param_1[0x175f];
LAB_0019916c:
  param_1[0x1767] = 0;
  param_1[0x175d] = 0;
  param_1[0x175f] = iVar1 + 1;
  param_1[0x175e] = 0;
  return;
}

