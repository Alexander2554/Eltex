#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct abonent {
    int phone[11];
    char name[20], surname[20];
};

void print_menu()
{
    system("cls");
    printf("Выберите функцию справочника:\n");
    printf("Поиск абонента по номеру телефона - 1\n");
    printf("Добавление абонента - 2:\n");
    printf("Удаление абонента - 3:\n");
    printf(">");
}

int get_variant(int count)
{
    int variant;
    char s[100];
    scanf("%s", s); 

    while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count) {
        printf("Incorrect input.");
        scanf("%s", s); 
    }

    return variant;
}

void finduser(struct abonent* list, int b, int n, int a)
{
    printf("Поиск абонента по номеру: ");
    scanf("%d", &b);
    printf("\n");
    for (int i = 0; i < n; i++) {
        if (*list[i].phone == b) {
            printf("%d\n", i + 1);
            printf("Имя:%s\n", list[i].name);
            printf("Фамилия:%s\n", list[i].surname);
            printf("Номер телефона:%d\n", *list[i].phone);
        }
    }
}

void adduser(struct abonent* list, int b, int n, int a)
{
    n++;
    struct abonent newlist[n];
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d\n", i + 1);

            printf("Имя:");
            scanf("%s", newlist[i].name);

            printf("Фамилия:");
            scanf("%s", newlist[i].surname);

            printf("Номер телефона:");
            scanf("%d", newlist[i].phone);
            printf("\n");
        }
        else {
            newlist[i] = list[i];
            printf("%d\n", i + 1);
            printf("Имя:%s\n", newlist[i].name);
            printf("Фамилия:%s\n", newlist[i].surname);
            printf("Номер телефона:%d\n", *newlist[i].phone);
        }
    }
}

void deleteuser(struct abonent* list, int b, int n, int a)
{
    printf("Наберите номер телефона абонента, которого хотите удалить:");
    scanf("%d", &b);
    printf("\n");
    a = 0;
    struct abonent newlist[n];
    for (int i = 0; i < n; i++) {
        if (*list[i].phone != b) {
            newlist[a] = list[i];
            a++;
        }
    }
    n = a;
    for (int i = 0; i < n; i++) {
        printf("%d\n", i + 1);
        printf("Имя:%s\n", newlist[i].name);
        printf("Фамилия:%s\n", newlist[i].surname);
        printf("Номер телефона:%d\n", *newlist[i].phone);
    }
}

int main()
{
    int variant;
    int a, b, n = 10;

    struct abonent list[n];
    for (int i = 0; i < n; i++) {
        printf("%d\n", i + 1);

        printf("Имя:");
        scanf("%s", list[i].name);

        printf("Фамилия:");
        scanf("%s", list[i].surname);

        printf("Номер телефона:");
        scanf("%d", list[i].phone);
        printf("\n");
    }

    do {
        print_menu(); 

        variant = get_variant(4);

        switch (variant) {
        case 1:
            finduser(&list[0], a, n, b);
            break;

        case 2:
            adduser(&list[0], a, n, b);
            break;

        case 3:
            deleteuser(&list[0], a, n, b);
            break;
        }

        if (variant != 4)
            system("pause");
    } while (variant != 4);

    return 0;
}
