// Solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/recursive-digit-sum/problem

string find_superDigit(string s){

    long long int sum =0;
    string str;

    if ( s.size() == 1) {
        return s;
    }

    for (auto &i : s) {
        sum += (int)(i - '0');
    }
    str = to_string(sum);
    
    return find_superDigit(str);
}
// Complete the superDigit function below.
int superDigit(string n, int k) {

    string p;
    string digit;
    long int sum = 0;

    for (int i = 0; i < n.size(); ++i) {
        sum += (int)(n[i]-'0');
    }

    sum *= k;
    p = to_string(sum);
    digit = find_superDigit(p);

    return digit[0] - '0';
}
