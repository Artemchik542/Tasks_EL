#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

const int MAX_USERS = 100;

struct abonent {
    char name[10];
    char second_name[10];
    char tel[10];
};



int main()
{
    struct abonent abon_book[MAX_USERS];
    int abon_book_count = 0;

    printf("1) Добавить абонента\n2) Удалить абонента\n3) Поиск абонентов по имени\n4) Вывод всех записей\n5) Выход\n");

    int input_command;
    while (true)
    {
        scanf("%d", &input_command);

        switch (input_command)
        {
            case 1:
                if (abon_book_count >= MAX_USERS)
                {
                    printf("Abonents incease 100, remove someone to add anotherone\n");
                    continue;
                }
                printf("Write: Name\n");
                scanf("%s", abon_book[abon_book_count].name);
                printf("Write: SurName\n");
                scanf("%s", abon_book[abon_book_count].second_name);
                printf("Write: Phone number\n");
                scanf("%s", abon_book[abon_book_count].tel);
                abon_book_count++;
                break;
            case 2:
                printf("Write user-ID to delete\n");
                int user_id;
                scanf("%d", &user_id);
                user_id--;
                if (user_id < 0 || user_id > abon_book_count - 1)
                {
                    printf("No user found to delete\n");
                }
                else
                {
                    printf("User %s %s deletted\n", abon_book[user_id].name, abon_book[user_id].second_name);
                    if (user_id != abon_book_count - 1) // smort user delete, just paste the last one in deleted ID
                    {
                        strcpy(abon_book[user_id].name, abon_book[abon_book_count - 1].name);
                        strcpy(abon_book[user_id].second_name, abon_book[abon_book_count - 1].second_name);
                        strcpy(abon_book[user_id].tel, abon_book[abon_book_count - 1].tel);
                    }
                    abon_book_count--;
                }
                break;
            case 3:
                printf("Write Name to find\n");
                char name_to_find[10];
                bool is_found;
                is_found = false;
                scanf("%s", name_to_find);
                for (size_t i = 0; i <= abon_book_count; i++)
                {
                    if (strcmp(abon_book[i].name, name_to_find) == 0)
                    {
                        printf("%d) (%s) (%s) - (%s)\n", i + 1, abon_book[i].name, abon_book[i].second_name, abon_book[i].tel);
                        is_found = true;
                    }
                }
                if (!is_found)
                {
                    printf("Can't find user with name %s in bookmark\n", name_to_find);
                }
                break;
            case 4:
                if (abon_book_count == 0)
                {
                    printf("Noone in abonent bookmark\n");
                    continue;
                }
                printf("ID) Name | Surname | Phone\n");
                for (size_t i = 0; i < abon_book_count; i++)
                {
                    printf("%d) (%s) (%s) - (%s)\n", i + 1, abon_book[i].name, abon_book[i].second_name, abon_book[i].tel);
                }
                break;
            case 5:
                return 0;

        default:
            return 0;
        }
    }
}
