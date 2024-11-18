// insertion = push
    // top++
    // new element inserted at index <top>
// deletion = pop
    // element at index <top> is taken out
    // top--
// top of the stack = top

#include <stdio.h>

int stack[5];
int top;

void push(int data);
void pop();
void peek();

int main() {
    top = -1;
    int option, data;

    do {
        printf("\n-> Options:\n");
        printf("1 - Push element\n");
        printf("2 - Pop element\n");
        printf("3 - See the top element\n");
        printf("4 - Show stack\n");
        printf("5 - Leave\n");

        printf("\n-> Enter your option: ");
        scanf("%i", &option);
        getchar();
        
        switch (option) {
            case 1: 
                // push
                printf("\n-> Enter the element you want to insert: ");
                scanf("%i", &data);
                getchar();
                push(data);
                break;
            case 2: 
                // pop
                pop();
                break;
            case 3:
                // peek
                peek();
                break;
            case 4:
                // show stack
                printf("\n");
                for (int i = 0; i <= top; i++) {
                    printf("%i ", stack[i]);
                }
                printf("\n");
                break;
            case 5:
                // leave
                printf("\n-> Program terminated.\n\n");
                break;
            default:
                // invalid option
                printf("\n-> This option is invalid.\n");
                break;
        }
    } while (option != 5);

    return 0;
}


void push(int data) {
    top++;
    stack[top] = data;
}


void pop() {
    printf("\n-> The element %i was popped.\n", stack[top]);
    top--;
}


void peek() {
    printf("\n-> The top element is: %i\n", stack[top]);
}
