// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/electronics-shop/problem

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
     vector<int> sumV;
     int max = 0;

     for (auto &i : keyboards) {
         for (auto &j: drives) {
             if ( i < b &&  j < b && (i + j) <= b)
                sumV.push_back(i+j);
         }
     }


     if (sumV.size() == 0)
        return -1;
     else {
         max = sumV[0];
         for(auto &i: sumV) {
            if (i > max)
                max = i;
         }
     }
     return max;
}
