#include <stdio.h>
#define MAX_QUEUE_SIZE 1276

int queue[MAX_QUEUE_SIZE];
int head = 0;
int tail = 0;

int main(void)
{
    int size;
    int num_pops;
    scanf("%d %d", &size, &num_pops);

    for (int i = 0; i < size; i++)
    {
        queue[i] = i + 1;
    }
    tail = size;

    int rotation_count = 0;
    for (int i = 0; i < num_pops; i++)
    {
        int pop_value;
        scanf("%d", &pop_value);

        int right_rotation = 0;

        while (queue[head] != pop_value)
        {
            queue[tail++] = queue[head++];
            right_rotation++;
        }
        int left_rotation = size - right_rotation;
        rotation_count += (left_rotation > right_rotation) ? right_rotation : left_rotation;

        head++;
        size--;

    }
    printf("%d", rotation_count);
}