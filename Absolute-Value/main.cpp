#include <cstdio>

int absolute_value(int x){
    if (x >= 0) {
        return x;
    }
    return (-1 * x);
}

int main() {
    int my_num = -219;
    printf("The absolute avalue of %d is %d.", my_num, 
            absolute_value(my_num));
}
