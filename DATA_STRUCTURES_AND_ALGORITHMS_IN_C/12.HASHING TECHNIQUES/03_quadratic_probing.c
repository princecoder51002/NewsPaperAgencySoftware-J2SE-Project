#include <stdio.h>
#define SIZE 10 // SIZE will be symbolic constant that anywhere SIZE appears in this source file it will be replaced with 10

int main()
{

    int h[10] = {0};

    insert(h, 23);
    insert(h, 43);
    insert(h, 13); // we can see in debug area that 13 will be insertd at index 7 bcz no free space is avalaible at index 3&4
    insert(h, 27); // we can see in debug area that 27 will be insertd at index 8 bcz no free space is avalaible at index 7

    printf("\nkey found at %d", search(h, 13)); // this will show that 13 is inserted at index 7 by using search function

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

    while (h[(index + (i * i)) % SIZE] != 0)
        i++;

    return (index + (i * i)) % SIZE;
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

    while (h[(index + (i * i)) % SIZE] != key)
        i++;

    return (index + (i * i)) % SIZE;
}