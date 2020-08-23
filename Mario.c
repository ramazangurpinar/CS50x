#include <cs50.h>
#include <stdio.h>

void space(int n);
void singleSpace();
void hashes(int n);
void pyramid(int n);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(height<=0||height>8);
    pyramid(height);
}

void pyramid(int height)
{
    for(int i=1;i<=height;i++)
    {
        space(height-i);
        hashes(i);
        singleSpace();
        hashes(i);
        printf("\n");
    }
}
void singleSpace()
{
    printf(" ");
}
void hashes(int n)
{
    for(int i=0;i<n;i++)
    printf("#");
}
void space(int n)
{
    for(int i=0;i<n;i++)
    printf(" ");
}


