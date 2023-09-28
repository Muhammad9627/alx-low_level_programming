#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int i, j;
    int len = strlen(s);

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        /* If characters at the current positions are not equal, it's not a palindrome. */
        if (s[i] != s[j])
            return 0;
    }

    /* If we reach this point, the string is a palindrome. */
    return 1;
}

int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    
    r = is_palindrome("redder");
    printf("%d\n", r);
    
    r = is_palindrome("test");
    printf("%d\n", r);
    
    r = is_palindrome("step on no pets");
    printf("%d\n", r);

    return (0);
}
