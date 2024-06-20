#include <stdio.h>
#include <string.h>

int main() {
    char flag = '$';
    char esc = 'E';
    char data[100], stuffedData[100];
    int i, j = 0;

    printf("Enter data to be stuffed: ");
    scanf("%s", data);

    stuffedData[j++] = flag;

    for (i = 0; i < strlen(data); i++) {
        if (data[i] == flag || data[i] == esc) {
            stuffedData[j++] = esc;
        }
        stuffedData[j++] = data[i];
    }

    stuffedData[j++] = flag;
    stuffedData[j] = '\0';

    printf("Stuffed data: %s\n", stuffedData);

    return 0;
}


