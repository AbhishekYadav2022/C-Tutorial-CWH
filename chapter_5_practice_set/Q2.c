#include <stdio.h>

void changeToForenheit(int c);

int main()
{
    changeToForenheit(60);   
    return 0;
}

void changeToForenheit(int c){
    float f = c * 1.8 + 32;
    printf("%d degree celcius = %f forenheit", c, f);
}

