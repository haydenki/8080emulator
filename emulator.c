/* 
    Intel 8080 CPU Emulator
    written by haydenki
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct ConditionCodes 
{
    uint8_t z:1;
    uint8_t s:1;
    uint8_t p:1;
    uint8_t cy:1;
    uint8_t ac:1;
    uint8_t pad:3;
} ConditionCodes;

typedef struct State8080
{
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t h;
    uint8_t l;
    uint16_t sp;
    uint16_t program_counter;
    uint8_t *memory;
    struct ConditionCodes cc;
    uint8_t int_enable; 
} State8080;

void UnimplementedInstruction(State8080* state);
int Emulate80800p(State8080* state);

int main()
{
    return 0;
}

void UnimplementedInstruction(State8080* state)
{
    printf("Error: Unimplemented instruction\n");
    exit(1);
}

int Emulate80800p(State8080* state);
{
    unsigned char *opcode &state->memory[state->pc];

    switch(*opcode)
    {
	case 0x00: UnimplementedInstruction(state); break;
        /* to do...*/	
    }

    state->pc+=1;   
}