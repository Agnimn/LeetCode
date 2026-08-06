class Solution {
public:
    int digitProduct(int x) {
    int product = 1;

    while (x > 0) {
        product *= x % 10;
        x /= 10;
    }

    return product;
}

    int smallestNumber(int n, int t) {
        int currNum = n;
        while(true){
            int product = digitProduct(currNum);

            if (product % t == 0)
            return currNum;

            currNum++;
        }
        
    }
};