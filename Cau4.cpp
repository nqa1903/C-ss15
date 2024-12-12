#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Ngo Quang Anh";
    int count[256] = {0};
    for (int i = 0; i < strlen(str); i++) {
        count[(unsigned char)str[i]]++;
    }
    printf("Danh sach cac ky tu va so lan xuat hien:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("Ky tu '%c' xuat hien %d lan\n", i, count[i]);
        }
    }
    return 0;
}

