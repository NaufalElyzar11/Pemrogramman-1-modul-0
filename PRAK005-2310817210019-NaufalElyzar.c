#include <stdio.h>

int main() {
    char result_str[1000] = ""; // Deklarasi array karakter untuk menyimpan hasil
    int row, column;

    for (row = 0; row < 7; row++) {
        // Pattern huruf 'R'
        for (column = 0; column < 7; column++) {
            if (column == 1 || column == 6 || (row == column && row >= 2)) {
                result_str[strlen(result_str)] = '*';
            } else {
                result_str[strlen(result_str)] = ' ';
            }
        }

        // Spasi kecil antara huruf 'R' dan 'N'
        result_str[strlen(result_str)] = ' ';

        // Pattern huruf 'N'
        for (column = 0; column < 7; column++) {
            if (column == 1 || ((row == 0 || row == 3) && column > 1 && column < 5) || (column == 5 && row != 0 && row < 3) || (column == row - 1 && row > 2)) {
                result_str[strlen(result_str)] = '*';
            } else {
                result_str[strlen(result_str)] = ' ';
            }
        }

        result_str[strlen(result_str)] = '\n'; // Pindah ke baris berikutnya
    }

    printf("%s", result_str); // Mencetak hasil
    return 0;
}
