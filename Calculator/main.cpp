#include <cstdio>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator {
    Calculator(Operation op){
        operation = op; 
    };

    int calculate(int a, int b){
        switch(operation){
            case(Operation::Add): {
                return a + b;
            } break;
            case(Operation::Subtract): {
                return a - b ;
            } break;
            case(Operation::Multiply): {
                return a * b ;
            } break;
            case(Operation::Divide): {
                return a / b;
            } break;
            default: {
                printf("Error: unknown operation");
                return  -1 ;
            }
        }
    };

private:
    Operation operation;
};

int main() {

    Calculator cal{ Operation::Multiply };

    printf("Calculator oputput: %d", cal.calculate(2,8));
}