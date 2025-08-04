#include <stdio.h>

#define MAX_DECK_SIZE 1024
#define REMAINDER_MASK 1023

int queue[MAX_DECK_SIZE];

int main(void)
{
    int num_cards;
    scanf("%d", &num_cards);

    for (int i = 0; i < num_cards; i++)
    {
        queue[i] = i + 1;
    }
    int head = 0;
    int tail = num_cards;

    while (head != tail)
    {
        printf("%d ", queue[head]);
        head = (head + 1) & REMAINDER_MASK;

        queue[tail] = queue[head];
        tail = (tail + 1) & REMAINDER_MASK;
        head = (head + 1) & REMAINDER_MASK;
    }
}