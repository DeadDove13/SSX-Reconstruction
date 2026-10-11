/* Ghidra pseudocode. PS2 address: 00183920. Not validated source. */

void FUN_00183920(int param_1)

{
  do {
    WaitSema(*(undefined4 *)(param_1 + 0x4004));
    FUN_00182448(0x285290,*(undefined4 *)(param_1 + 0x4008));
    FUN_002168c8();
  } while( true );
}

