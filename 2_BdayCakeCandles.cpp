 // Solved by Techie Dheeraj
 // https://www.hackerrank.com/challenges/birthday-cake-candles/problem

 int birthdayCakeCandles(vector<int> ar) {

    unordered_map<int,int>hashMap;
    int size = ar.size();
    int max = ar[0];

    for (int i = 0; i < size; ++i) {

        hashMap[ar[i]]++;

        if(max < ar[i])
            max = ar[i];
    }

    return hashMap.at(max);
}
