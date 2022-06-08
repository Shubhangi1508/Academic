#include<stdio.h>
#include<string.h>

void push(char);
char pop();
char st[20];
int top = -1;
int main() {
    char exp[20], a;
    int i, f = 1;
    printf("Enter parentheses expression : ");
    gets(exp);
    printf("Scanning from left to right");
    for (i = 0; i < strlen(exp); i++) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(exp[i]);
        if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (top == -1)
                f = 0;
            else {
                a = pop();
                if (exp[i] == ')' && (a == '[' || a == '{'))
                    f = 0;
                if (exp[i] == '}' && (a == '(' || a == '['))
                    f = 0;
                if (exp[i] == ']' && (a == '{' || a == '('))
                    f = 0;
            }
        }
    }
    if (top >= 0)
        f = 0;
    if (f == 0)
        printf("\n\nSorry ! It is an Unbalanced Expression !! :( ");
    else
        printf("\n\nIt is an Balanced Expression !! :)");
    return 0;
}
void push(char exp) {
    st[++top] = exp;
}
char pop() {
    return st[top--];
} 
