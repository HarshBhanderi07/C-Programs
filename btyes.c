#include <stdio.h>

int main() 
{
    long long bytes;
    double kilobytes, megabytes, gigabytes;

    printf("Enter size in bytes: ");
    scanf("%lld", &bytes);

    kilobytes = bytes / 1024.0;
    megabytes = bytes / (1024.0 * 1024);
    gigabytes = bytes / (1024.0 * 1024 * 1024);

    printf("%lld bytes = %.2f KB\n", bytes, kilobytes);
    printf("%lld bytes = %.2f MB\n", bytes, megabytes);
    printf("%lld bytes = %.2f GB\n", bytes, gigabytes);

    return 0;
}