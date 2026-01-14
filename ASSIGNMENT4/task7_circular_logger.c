#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0, count = 0;

void insertSample(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;
    if(count < BUFFER_SIZE)
        count++;
}

void printSamples() {
    int i, index;
    printf("Buffer contents: ");
    for(i = 0; i < count; i++) {
        index = (head - count + i + BUFFER_SIZE) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main() {
    int value;

    while(1) {
        printf("Enter sensor value (-1 to stop): ");
        scanf("%d", &value);

        if(value == -1)
            break;

        insertSample(value);
    }

    printSamples();
    return 0;
}
