// Solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/recursive-digit-sum/problem

// TODO: 9/12 Test Cases Passed

int find_superDigit(vector<int>arr){

    long int sum = 0;
    vector<int>sumV;

    if ( arr.size() == 1 && arr[0] <= 9)
        return arr[0];

    for (auto &i : arr)
        sum+= i;

    while(sum > 10) {
        sumV.insert(sumV.begin(), sum % 10);
        sum = sum / 10;
    }
    sumV.insert(sumV.begin(), sum % 10);

    return find_superDigit(sumV);
}

int superDigit(string n, int k) {

    string p;
    int digit;

    int size = n.size() * k;
    vector<int> arr(size);

    for (int i = 0; i < k; ++i)
        p +=n;

    for ( unsigned int i = 0; i < p.size(); ++i)
        arr.push_back((int)(p[i]-'0'));
  
    digit = find_superDigit(arr);

    return  digit;
}
