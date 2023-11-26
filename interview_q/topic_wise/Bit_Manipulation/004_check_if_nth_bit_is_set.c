

/*

we can write 2i as 1 << i

bool check (int N)
    {
        if( N & (1 << i) )
            return true;
        else
            return false;
    }


Example:
Let’s say N = 20 = {10100}2. Now let’s check if it’s 2nd bit is set or not(starting from 0).
For that, we have to AND it with 2power2 1<<2 = {100}2 .

{10100} & {100} = {100}  = 4(non-zero number), which means it’s 2nd bit is set.

*/
