/* Ghidra pseudocode. PS2 address: 002144f0. Not validated source. */

void FUN_002144f0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = param_1 + param_3;
  cVar2 = '\0';
  for (; param_1 < pcVar3; param_1 = param_1 + 1) {
    cVar1 = *param_1;
    *param_2 = cVar1 - cVar2;
    param_2 = param_2 + 1;
    cVar2 = cVar1;
  }
  return;
}

