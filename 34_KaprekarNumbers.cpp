// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/kaprekar-numbers/problem

void kaprekarNumbers(int p, int q) {

    long int i = p;
    long int num1;
    long int mul;
    bool isFound = false;
    long int num2;
    int len1;
    int len2;
    int size = 0;
    string s;
    string temp;

    while ( i <= q ) {
        mul = i * i;
        s = to_string(mul);
        size = s.size();
        if (size == 1) {
            num1 = 0;
            num2 = stoi(s.substr(0, 1));
        }
        else {
            len1 = size / 2;
            len2 = size - len1;
            num1 = stoi(s.substr(0, len1));
            num2 = stoi(s.substr(len1, len2));
        }
      
        if ((num1 + num2) == i) {
            isFound = true;
            cout << i << " ";
        }
        ++i;
    }
    if (!isFound)
        cout << "INVALID RANGE" << endl;
}
