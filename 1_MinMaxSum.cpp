// Solved by Techie Dheeraj

// https://www.hackerrank.com/challenges/mini-max-sum/problem

void miniMaxSum(vector<int> arr) {

    long int min = 0, max = 0;
    int size = arr.size();
    long int sum = 0, val = 0;

    for ( int i = 0; i < size; ++i)
        sum += arr[i];
    
    min = max = (sum - arr[0]);
    
    for (int i = 1; i < size; ++i) {
        val = (sum - arr[i]);
        if (val < min)
            min = val;
        else if (val > max)
            max = val;
    }

    cout << min << " " << max << "\n";
}
