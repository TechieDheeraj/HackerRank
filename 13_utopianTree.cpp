// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/utopian-tree/problem

int utopianTree(int n) {

    int height = 1;

    if ( n == 0 )
        return 1;

    for ( int i = 1; i <= n; ++i ) {
        if ( (i % 2) != 0) // Spring
            height *= 2;
        else
            height += 1;
    }

    return height;
}
