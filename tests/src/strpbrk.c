#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ourstring.h"

int main (void)
{
    assert(our_strpbrk("abc", "a") == strpbrk("abc", "a"));
    assert(our_strpbrk("abc", "b") == strpbrk("abc", "b"));
    assert(our_strpbrk("abc", "c") == strpbrk("abc", "c"));
    assert(our_strpbrk("abc", "d") == strpbrk("abc", "d"));
    assert(our_strpbrk("abc", "ab") == strpbrk("abc", "ab"));
    assert(our_strpbrk("abc", "bc") == strpbrk("abc", "bc"));
    assert(our_strpbrk("abc", "cd") == strpbrk("abc", "cd"));
    assert(our_strpbrk("abc", "abc") == strpbrk("abc", "abc"));
    assert(our_strpbrk("abc", "bcd") == strpbrk("abc", "bcd"));
    assert(our_strpbrk("abc", "cde") == strpbrk("abc", "cde"));
    assert(our_strpbrk("abc", "abcde") == strpbrk("abc", "abcde"));
    assert(our_strpbrk("abc", "bcdef") == strpbrk("abc", "bcdef"));
    assert(our_strpbrk("abc", "cdefg") == strpbrk("abc", "cdefg"));
    assert(our_strpbrk("abc", "abcdef") == strpbrk("abc", "abcdef"));
    assert(our_strpbrk("abc", "bcdefg") == strpbrk("abc", "bcdefg"));
    assert(our_strpbrk("abc", "cdefgh") == strpbrk("abc", "cdefgh"));
    assert(our_strpbrk("abc", "zyx") == strpbrk("abc", "zyx"));
}