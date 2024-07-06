#include <stdio.h>
#define true 1
#define false 0

// create a calculator in C
float FloatOperations(float a, float b, char operation){

    if (operation == '+')
        return a + b;
    else if (operation == '-')
        return a - b;
    else if (operation == '*')
        return a * b;
    else if (operation == '/')
        return a / b;
    else
        printf("ERROR: NON-ALLOWED OPERATION ENTERED\n");
    
    return 1;
}


int IntegerOperations(int a, int b, char operation){

    if (operation == '+')
        return a + b;
    else if (operation == '-')
        return a - b;
    else if (operation == '*')
        return a * b;
    else if (operation == '/'){
        if (b != 0)
            return a / b;
        else    
            printf("ERROR: division by zero\n");
    }
    else
        printf("ERROR: NON-ALLOWED OPERATION ENTERED\n");
    
    return 1;
}



int main(){
    int a1, b1, flag = true;
    float a2, b2;
    char operation, c;

    while (flag != false){  
        printf("enter f for float, i for integer operations (0 for exit): ");
        scanf(" %c", &c);

        if (c == '0'){
            flag = false;
        }
        else if (c == 'i'){
            printf("enter values of a and b with operation between them (e.g a * b): ");
            scanf("%d %c %d", &a1, &operation, &b1);
            printf("%d\n", IntegerOperations(a1, b1, operation));
        }
        else if (c == 'f'){
            printf("enter values of a and b with operation between them (e.g a * b): ");
            scanf("%f %c %f", &a2, &operation, &b2);
            printf("%.2f\n", FloatOperations(a2, b2, operation));
        }
        else   
            printf("ERROR: unallowed type (only f and i)\n");

    }

    return 0;

}
