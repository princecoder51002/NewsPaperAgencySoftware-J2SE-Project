#include <stdio.h>
#define SIZE 10 // SIZE will be symbolic constant that anywhere SIZE appears in this source file it will be replaced with 10
#define SIZE1 7
int main()
{

    int h[10] = {0};

    insert(h, 5);
    insert(h, 25);
    insert(h, 15);
    insert(h, 35);
    insert(h, 95);

    printf("\nkey found at %d", search(h, 95)); // this will show that 95 is inserted at index 4 bcz there will be a collisions at indices 5,8&1

    return 0;
}

int hash(int key)
{
    return key % SIZE;
}

int hash1(int key)
{
    return SIZE1 - (key % SIZE1);
}

int doublehash(int h[], int key)
{
    int index = hash(key);
    int index1 = hash1(key);
    int i = 0;

    while (h[(index + (i * index1)) % SIZE] != 0)
        i++;

    return (index + (i * index1)) % SIZE;
}

void insert(int h[], int key)
{
    int index = hash(key);

    if (h[index] != 0)
    {
        index = doublehash(h, key);
    }

    h[index] = key;
}

int search(int h[], int key)
{
    int index = hash(key);
    int index1 = hash1(key);
    int i = 0;

    while (h[(index + (i * index1)) % SIZE] != key)
        i++;

    return (index + (i * index1)) % SIZE;
}