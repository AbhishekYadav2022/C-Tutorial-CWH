#include <stdio.h>

// Function that prints "Displaying..."
void display();

// Function for addition
int sum(int a, int b);

// Misnomer
int change(int m);

int main()
{
    display();
    sum(6 , 10);
    
    int b = 10;
    change(b);
    
    printf("b is %d", b);
    return 0;
}

// Function that prints "Displaying..."
void display(){
    printf("Displaying...\n");
}

// Function for addition
int sum(int a, int b){
    int c = a + b;
    return c;
}
 
// Misnomer
int change(int m){
    return m = 55;
}