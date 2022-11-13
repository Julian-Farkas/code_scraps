/*
** Takes an Integer as first Argument and returns 1, if the Argument is an even number.
** If not, it returns 0
*/
#include <iostream>
int main(int argc, char const *argv[])
{
    /* If last bit of arg is 1 (arg & 1), the number is not even. 
    ** By negating the expression the return value is 0 instead of one,
    ** if the number is not even
    ** also works with char.
    ** returns -1 if no Argument was passed
    */
    return argv[1] ? !(*argv[1] & 1) : -1;
}
