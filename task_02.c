#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char password1[20] = "Abc123xy";
    char password2[20] = "HELLO789";
    char password3[20] = "mYp55Zq2";
    char password4[20] = "Zebra45Q";
    char password5[20] = "codeX9876";

    int score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0;
    int below10 = 0;

    /* Password 1 */
    for (int i = 0; password1[i] != '\0'; i++) {
        if (islower(password1[i]))
            score1 += 1;
        if (isupper(password1[i]))
            score1 += 2;
        if (isdigit(password1[i]))
            score1 += 3;
    }

    if (strlen(password1) >= 8)
        score1 += 5;

    if (strstr(password1, "123") != NULL)
        score1 -= 3;


    /* Password 2 */
    for (int i = 0; password2[i] != '\0'; i++) {
        if (islower(password2[i]))
            score2 += 1;
        if (isupper(password2[i]))
            score2 += 2;
        if (isdigit(password2[i]))
            score2 += 3;
    }

    if (strlen(password2) >= 8)
        score2 += 5;

    if (strstr(password2, "123") != NULL)
        score2 -= 3;


    /* Password 3 */
    for (int i = 0; password3[i] != '\0'; i++) {
        if (islower(password3[i]))
            score3 += 1;
        if (isupper(password3[i]))
            score3 += 2;
        if (isdigit(password3[i]))
            score3 += 3;
    }

    if (strlen(password3) >= 8)
        score3 += 5;

    if (strstr(password3, "123") != NULL)
        score3 -= 3;


    /* Password 4 */
    for (int i = 0; password4[i] != '\0'; i++) {
        if (islower(password4[i]))
            score4 += 1;
        if (isupper(password4[i]))
            score4 += 2;
        if (isdigit(password4[i]))
            score4 += 3;
    }

    if (strlen(password4) >= 8)
        score4 += 5;

    if (strstr(password4, "123") != NULL)
        score4 -= 3;


    /* Password 5 */
    for (int i = 0; password5[i] != '\0'; i++) {
        if (islower(password5[i]))
            score5 += 1;
        if (isupper(password5[i]))
            score5 += 2;
        if (isdigit(password5[i]))
            score5 += 3;
    }

    if (strlen(password5) >= 8)
        score5 += 5;

    if (strstr(password5, "123") != NULL)
        score5 -= 3;


    printf("Password: %s, Score: %d\n", password1, score1);
    printf("Password: %s, Score: %d\n", password2, score2);
    printf("Password: %s, Score: %d\n", password3, score3);
    printf("Password: %s, Score: %d\n", password4, score4);
    printf("Password: %s, Score: %d\n", password5, score5);


    if (score1 < 10) below10++;
    if (score2 < 10) below10++;
    if (score3 < 10) below10++;
    if (score4 < 10) below10++;
    if (score5 < 10) below10++;


    int strongest = score1;
    char *strongestPassword = password1;

    if (score2 > strongest) {
        strongest = score2;
        strongestPassword = password2;
    }

    if (score3 > strongest) {
        strongest = score3;
        strongestPassword = password3;
    }

    if (score4 > strongest) {
        strongest = score4;
        strongestPassword = password4;
    }

    if (score5 > strongest) {
        strongest = score5;
        strongestPassword = password5;
    }


    printf("\nStrongest Password is: %s\n", strongestPassword);
    printf("Strongest Password's Score is: %d\n", strongest);
    printf("Number of passwords with a score below 10: %d\n", below10);

    return 0;
}