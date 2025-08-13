//STRINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];

    // Input strings
    printf("Enter first string: ");
    gets(str1);  // OR use fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    gets(str2);

    // 1. String Length
    printf("\nLength of str1 = %lu", strlen(str1));
    printf("\nLength of str2 = %lu", strlen(str2));

    // 2. String Copy
    strcpy(str3, str1);
    printf("\n\nAfter copying str1 to str3: %s", str3);

    // 3. String Compare
    if(strcmp(str1, str2) == 0)
        printf("\n\nstr1 and str2 are equal");
    else
        printf("\n\nstr1 and str2 are not equal");

    // 4. String Concatenation
    strcat(str1, str2);
    printf("\n\nAfter concatenation (str1 + str2): %s", str1);

    // 5. String Reverse
    printf("\n\nReversed str2: ");
    for(int i = strlen(str2) - 1; i >= 0; i--) {
        printf("%c", str2[i]);
    }

    return 0;
}

