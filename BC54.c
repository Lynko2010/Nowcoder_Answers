//解法1
#include <stdio.h>
#include <assert.h>
int YearMonth(int y, int m) {
    switch(m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
        case 2:
            if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0) {
                return 29;
            }
            else
            {
                return 28;
            }
            break;
        default:
            return -1;
    }
}

int main() {
    int year = 0;
    int month = 0;
    //assert(year != NULL);
    //assert(month != NULL);
    scanf("%d %d", &year, &month);
    printf("%d\n", YearMonth(year, month));
    return 0;
}



//解法2
#include <stdio.h>
#include <assert.h>
int YearMonth(int y, int m) {
    if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0) {
        if (m == 2) {
            return 29;
        }
        else if(m == 1 || 3 || 5 || 7 || 8 || 10 || 12) {
            return 31;
        }
        else {
            return 30;
        }
    }
    else {
        if (m == 2) {
            return 28;
        }
        else if(m == 2 || 4 || 6 || 9 || 11) {
            return 30;
        }
    }
}
int main() {
    int year = 0;
    int month = 0;
    scanf("%d %d", &year, &month);
    int (*y)(int, int) = YearMonth;
    printf("%d\n", y(year, month));
    return 0;
}
