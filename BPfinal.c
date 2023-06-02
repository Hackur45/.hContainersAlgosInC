#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int top = -1;
char stack[100], s[100], x;
void push(int element);
void pop();
bool isbalanced(char s[]);
int main()
{
    printf("Enter the expression!\n");
    gets(s);
    if (isbalanced(s))
    {
        printf("The expression is balanced!\n");
    }
    else
    {
        printf("The expression is not balanced!\n");
    }
    return 0;
}

void push(int element)
{
    if (top >= 99)
    {
        printf("The stack is in overflow condition!");
    }
    else
    {
        top++;
        stack[top] = element;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("Stack is in underflow condition!");
    }
    else
    {
        x = stack[top];
        top--;
    }
}

bool isbalanced(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(s[i]);
        }
        else
        {
            if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (top == -1)
                {
                    return false;
                }
                else if ((s[i] == ')' && stack[top] == '(') || (s[i] == '}' && stack[top] == '{') || (s[i] == ']' && stack[top] == '['))
                {
                    pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
