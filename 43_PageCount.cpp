// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/drawing-book/problem

int pageCount(int n, int p) {

    int start = 1;
    int maxShift = 2;
    int fdiff = p - start; // 2 -1 = 1
    int ldiff = n - p; 
    int minPages = 0;
    int tmp = 0;

    tmp = fdiff / maxShift;
    tmp += fdiff % maxShift;

    minPages = tmp;

    tmp = ldiff / maxShift;
    if (ldiff <= maxShift && (n % 2 == 0))
        tmp+= ldiff % maxShift; 

    if (tmp < minPages)
        minPages = tmp;

    return minPages;
}
