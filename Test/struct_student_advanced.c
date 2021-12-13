#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
   int number;
   char name[10];
   double grade;
}S;

void input();
void sort(S* list, int size);

int main()
{
   int size;
   

   printf("����� �Է��Ͻðڽ��ϱ�? ");
   scanf("%d", &size);
   printf("\n");

   S* list = malloc(sizeof(S) * size);

   for (int i = 0; i < size; i++) {
      printf("��ȣ�� �Է��ϼ���: ");
      scanf("%d", &list[i].number);
      printf("�̸��� �Է��ϼ���: ");
      scanf("%s", list[i].name);
      printf("������ �Է��ϼ���: ");
      scanf("%lf", &list[i].grade);
      printf("============================\n");
   }

   sort(list, size);

   free(list);

   return 0;
}

void sort(S* list, int size)
{
   S temp;

   for (int i = 0; i < size - 1; i++) {
      for (int j = i + 1; j < size; j++) {
         if (list[i].grade < list[j].grade)
         {
            temp = list[i];
            list[i] = list[j];
            list[j] = temp;
         }
      }
   }
   for (int i = 0; i < size; i++)
      printf("%d %s %lf\n", list[i].number, list[i].name, list[i].grade);
}