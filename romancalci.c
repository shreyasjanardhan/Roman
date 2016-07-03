#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 512
#define MAX_INPUT_SIZE 256

enum roman_symbols{
    I, X, L, C, D, M
};

typedef struct stack_implementation{
    char stk[MAX_STACK_SIZE];
    int top;
}stack;


int main(){
    enum roman_symbols rs;
    int intermediate_length=0;
    int i,j,k,l,count=0,before_insert,after_insert,rep,rem,div,val1,val2;

    char res1;

    //Declare stacks for input and output strings and initialize them
    stack in;
    stack out;

    in.top = -1;
    out.top = -1;

    /*char op1[] = "CCCLXVIIII";
    char op2[] = "DCCCXLV";*/
    char op1Temp[] = "IV";
    char op2Temp[] = "XII";

    char op1[MAX_INPUT_SIZE];
    char op2[MAX_INPUT_SIZE];
return 0;
}
