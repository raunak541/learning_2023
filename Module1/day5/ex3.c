#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

Time getTimeDifference(Time startTime, Time endTime) {
    Time difference;

    int startTimeInSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endTimeInSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    int diffInSeconds = endTimeInSeconds - startTimeInSeconds;

    difference.hours = diffInSeconds / 3600;
    diffInSeconds %= 3600;
    difference.minutes = diffInSeconds / 60;
    difference.seconds = diffInSeconds % 60;

    return difference;
}

int main() {
    Time startTime, endTime, timeDifference;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    timeDifference = getTimeDifference(startTime, endTime);

    printf("\nTime difference: %d hours %d minutes %d seconds\n",
           timeDifference.hours, timeDifference.minutes, timeDifference.seconds);

    return 0;
}
