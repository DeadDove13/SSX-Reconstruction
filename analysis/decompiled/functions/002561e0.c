/* Ghidra pseudocode. PS2 address: 002561e0. Not validated source. */

int FUN_002561e0(int param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)((int)param_2 + param_1 + 0x29c);
  cVar1 = *(char *)((int)param_2 + param_1 + 0x29c);
  while (cVar1 == '\x02') {
    param_1 = (int)*(undefined8 *)(param_2 + param_1 * 2 + 6);
    pcVar2 = (char *)((int)param_2 + param_1 + 0x29c);
    cVar1 = *pcVar2;
  }
  if (*pcVar2 == '\x01') {
    iVar3 = *param_2 + param_2[param_1 * 2 + 6];
  }
  else {
    iVar3 = FUN_002599b8();
  }
  return iVar3;
}

