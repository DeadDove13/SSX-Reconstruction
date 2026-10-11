/* Ghidra pseudocode. PS2 address: 0024a768. Not validated source. */

undefined8 FUN_0024a768(long param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_1 != 0) && (iVar1 = *(int *)((int)param_1 + 0x40), iVar1 != 0)) {
    pcVar2 = *(code **)(iVar1 + *param_2 * 8 + 0xc);
    if (pcVar2 != (code *)0x0) {
      uVar3 = (*pcVar2)((int)param_1,param_2,*(undefined4 *)(iVar1 + *param_2 * 8 + 0x10));
    }
  }
  return uVar3;
}

