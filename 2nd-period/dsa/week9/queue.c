// insertion = enqueue -> rear
    // rear++
    // insert new element at <rear> index
// deletion = dequeue -> front
    // delete element at <front> index
    // front++

#include <stdio.h>

int queue[5];
int rear, front;

void enqueue(int data);
void dequeue();
int is_full();
int is_empty();
void peek();
void display();

int main() {
    front = -1;
    rear = -1;
    int option, data;

    do {
        printf("\n-> Options:\n");
        printf("1 - Enqueue element\n");
        printf("2 - Dequeue element\n");
        printf("3 - See the first element\n");
        printf("4 - Show queue\n");
        printf("5 - Leave\n");

        printf("\n-> Enter your option: ");
        scanf("%i", &option);
        getchar();
        
        switch (option) {
            case 1: 
                // enqueue
                printf("\n-> Enter the element you want to insert: ");
                scanf("%i", &data);
                getchar();
                enqueue(data);
                break;
            case 2: 
                // dequeue
                dequeue();
                break;
            case 3:
                // peek
                peek();
                break;
            case 4:
                // show queue
                display();
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


int is_full() {
    if (rear == 5 - 1) {
        return 1;
    }
    else {
        return 0;
    }
}


int is_empty() {
    if (front == -1 || front == rear + 1) {
        return 1;
    }
    else {
        return 0;
    }
}


void enqueue(int data) {
    if (is_full()) {
        printf("\n-> Queue overflow.\n");
        return;
    }
    
    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = data;
}


void dequeue() {
    if (is_empty()) {
        printf("\n-> Queue underflow.\n");
        return;
    }

    printf("\n-> Element %i was deleted.\n", queue[front]);
    front++;
}


void peek() {
    if (is_empty()) {
        printf("\n-> Queue underflow.\n");
        return;
    }

    printf("\n-> The first element is: %i\n", queue[front]);   
}


void display() {
    if (is_empty()) {
        printf("\n-> Queue is empty.\n");
        return;
    }

    printf("\n");
    for (int i = front; i <= rear; i++) {
        printf("%i ", queue[i]);
    }
    printf("\n");
}
