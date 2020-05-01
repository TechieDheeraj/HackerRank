// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/the-birthday-bar/problem 

int birthday(vector<int> s, int d, int m) {

    int sum = 0;
    int count = 0;
    int items = 0;

    for (int i = 0; i < s.size(); ++i ) {
        sum = s[i];
        items = 1;

        if (items == m && sum == d) {
                ++count;
                break;
        }

        for (int j = i+1; j < s.size(); ++j) {
            sum += s[j];
            ++items;
            
            if (items == m && sum == d) {
                ++count;
                break;
            }
     
            if (sum > d || items > m )
                break;
        }
    }
    return count;
}
