#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void RecursivePermute(char str[], int start, int end) {
    if (start == end) {
        printf("%s\n", str);
    } else {
        for (int i = start; i <= end; i++) {
            swap(&str[start], &str[i]);
            RecursivePermute(str, start + 1, end);
            swap(&str[start], &str[i]); // Restore the original order
        }
    }
}

void Permute(char str[]) {
    int len = strlen(str);
    RecursivePermute(str, 0, len - 1);
}

int main() {
    char str[] = "abc";
    Permute(str);
    return 0;
}
