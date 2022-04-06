#include <stdio.h>
#define SIZE 10 // SIZE will be symbolic constant that anywhere SIZE appears in this source file it will be replaced with 10

int main()
{

    int h[10] = {0};

    insert(h, 12);
    insert(h, 25);
    insert(h, 35); // we can see in debug area that 35 will be insertd at index 6 bcz no free space is avalaible at index 5
    insert(h, 26); // we can see in debug area that 26 will be insertd at index 7 bcz no free space is avalaible at index 6

    printf("\nkey found at %d", search(h, 26)); // this will show that 26 is inserted at index 7 by using search function

    return 0;
}

int hash(int key)
{
    return key % SIZE;
}

int probe(int h[], int key)
{
    int index = hash(key);
    int i = 0;

    while (h[(index + i) % SIZE] != 0)
        i++;

    return (index + i) % SIZE;
}

void insert(int h[], int key)
{
    int index = hash(key);

    if (h[index] != 0)
    {
        index = probe(h, key);
    }

    h[index] = key;
}

int search(int h[], int key)
{
    int index = hash(key);
    int i = 0;

    while (h[(index + i) % SIZE] != key)
        i++;

    return (index + i) % SIZE;
}