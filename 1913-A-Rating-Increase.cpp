#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num_cases;
    scanf("%d", &num_cases);

    for (int case_num = 0; case_num < num_cases; ++case_num) {
        char ab[100];
        scanf("%s", ab);

        int len = strlen(ab);
        int found = 0;

        for (int i = 1; i < len; ++i) {
            if (ab[i] != '0') {
                char substr1[100], substr2[100];
                strncpy(substr1, ab, i);
                substr1[i] = '\0';

                strcpy(substr2, ab + i);

                if (atoi(substr1) < atoi(substr2)) {
                    printf("%s %s\n", substr1, substr2);
                    found = 1;
                    break;
                }
            }
        }

        if (!found) {
            printf("-1\n");
        }
    }

    return 0;
}