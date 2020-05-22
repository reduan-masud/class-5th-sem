#include <stdio.h>

int main()
{

    int arr[100];
    int i = 0;
    while(1)
    {
        int t;
        scanf("%d", &t);
        if(t == 0)
            break;
        arr[i++] = t;
    }
    return 0;
}

