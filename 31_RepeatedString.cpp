// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/repeated-string/problem

long repeatedString(string s, long n) {

    bool foundA = false;
    int countA = 0;
    int rem = 0;
    long result = 0;
    int len = s.size();

    for (auto &i : s) {
        if (i == 'a') {
            foundA = true;
            ++countA;
        }
    }
    if (!foundA)
        return 0;
    
    if (countA == 1 && len == 1)
        return n;

    if ( n % len == 0) {
        result = (countA * (n / len));
        return result;
    }
    else {
        result = countA * (n / len);
        rem = n % len; 

        for (int i = 0; i< rem; ++i) {
            if (s[i] == 'a')
                result += 1;
        }
    }

    return result;
}
