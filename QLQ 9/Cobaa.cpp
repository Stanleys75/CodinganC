#include <stdio.h>
#include <string.h>

int main()
{
    int kasus;
    char arr[1001];
    scanf("%d", &kasus);
    getchar;
    while(kasus>0)
    {
        scanf("%[^\n]", &arr);
        getchar;
        printf("%d", strlen(arr));
        kasus--;
    }
}
