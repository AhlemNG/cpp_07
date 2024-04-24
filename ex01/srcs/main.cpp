
#include "../incs/iter.hpp"

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    iter(array, 8, printrValue<int>);
    return (0);
}