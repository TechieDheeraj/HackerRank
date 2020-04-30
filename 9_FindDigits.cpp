// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/find-digits/problem

int findDigits(int n) {

    int count = 0, num = n;
    vector<int> digits;

    while(n >= 10) {
        digits.push_back(n%10);
        n /= 10;
    }
    digits.push_back(n);

    for(auto &i : digits) {
        if ((i != 0) && (num % i == 0))
            ++count;
    }

    return count;
}
