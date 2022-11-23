#include <stddef.h>
int *binary_search(int *begin, int *end, int elt)
{
    int *piv = (begin + (end - begin) / 2);
    if (end - begin == 0)
        return begin;
    if (elt == *piv)
        return piv;
    else if (begin == end)
        return begin;
    else if (elt < *piv)
    {
        return binary_search(begin, piv, elt);
    }
    else if (elt > *piv)
        return binary_search(piv + 1, end, elt);
    while (*begin < elt)
    {
        begin = begin + 1;
        if (end - begin == 1)
            return begin;
    }
    return begin;
}
