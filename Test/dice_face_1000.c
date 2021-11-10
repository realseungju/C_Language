#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void get_dice_face(int dice_arr[]);

int main()
{
    int i;
    int dice_arr[6] = {0};

    for (i=0; i<1000; i++)
    {
        get_dice_face(dice_arr);
    }

    return 0;
}

void get_dice_face(int dice_arr[])
{
    int i;
    static int count = 1;
    if (count%100 == 0)
    {
        for (i=0; i<6; i++)
        {
            printf("%3d", dice_arr[i]);
        }
        printf("\n");
    }
    else
    {
        dice_arr[rand()%6]++;
    }
    count++;
}
