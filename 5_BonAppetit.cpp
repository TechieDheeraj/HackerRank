 // solved by Techie Dheeraj
 // https://www.hackerrank.com/challenges/bon-appetit/problem

 void bonAppetit(vector<int> bill, int k, int b) {

    int share_price = 0;

    for (int i = 0; i< bill.size(); ++i) {
        if ( i == k)
            continue;
        share_price += bill[i];
    }

    share_price /= 2;

    if (share_price == b)
        cout << "Bon Appetit\n";
    else
        cout << b-share_price << "\n";
}
