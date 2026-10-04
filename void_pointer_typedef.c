#include <stdio.h>

typedef struct
{
    int id;
    float score;
} Record;

void printRecord(void *data)
{
    Record *record = (Record *)data;

    printf("ID: %d\n", record->id);
    printf("Score: %.2f\n", record->score);
}

int main()
{
    Record student = {205, 91.75};

    void *ptr = &student;

    printRecord(ptr);

    return 0;
}
