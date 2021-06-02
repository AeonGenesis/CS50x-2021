#include <stdio.h>
#include <cs50.h>

// asks for name and answers: hello 'name'
int main(void)
{
    //get_string name stored in var
    string name = get_string("What is your name?\n");
    //printf shouts out message
    printf("hello, %s\n", name);
}
