#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long int generate\_key(char *username)
{
unsigned long long int key = 0;
int length = strlen(username);

for (int i = 0; i < length; i++)
{
key += (username[i] + i) \* (i + 1);
}

return key;
}

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Usage: ./keygen5 username\n");
return 1;
}

unsigned long long int key = generate\_key(argv[1]);
printf("%llu\n", key);

return 0;
}
