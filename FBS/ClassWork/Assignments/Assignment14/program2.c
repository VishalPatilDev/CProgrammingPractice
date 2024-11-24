#include <stdio.h>
#include <stdlib.h>

typedef struct Time {
    int hrs;
    int min;
    int sec;
} Time;

void store(Time* t);
void display(Time *t);
Time addTime(Time t1, Time t2);
void displayTime(Time t);
int timeToSeconds(Time t);

int main() {
    Time *t1 = (Time *)malloc(sizeof(Time));
    Time *t2 = (Time *)malloc(sizeof(Time));

    if (t1 == NULL || t2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter time 1 (hrs min sec): ");
    store(t1);
    printf("Enter time 2 (hrs min sec): ");
    store(t2);
    
    display(t1);
    display(t2);
    
    Time sum = addTime(*t1, *t2);
    displayTime(sum);
    
    int totalSeconds = timeToSeconds(*t1);
    printf("Time in seconds: %d\n", totalSeconds);

    free(t1);
    free(t2);
    
    return 0;
}

void store(Time* t) {
    printf("Enter hours, minutes, and seconds: ");
    scanf("%d %d %d", &t->hrs, &t->min, &t->sec);
}

void display(Time *t) {
    printf("Time entered is: %02d:%02d:%02d\n", t->hrs, t->min, t->sec);
}

void displayTime(Time t) {
    printf("Time: %02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}

Time addTime(Time t1, Time t2) {
    Time result;
    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min + result.sec / 60;
    result.sec %= 60;
    result.hrs = t1.hrs + t2.hrs + result.min / 60;
    result.min %= 60;
    return result;
}

int timeToSeconds(Time t) {
    return t.hrs * 3600 + t.min * 60 + t.sec;
}
