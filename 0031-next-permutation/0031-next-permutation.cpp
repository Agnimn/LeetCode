class Solution {
public:
    void nextPermutation(vector<int>& A) {

        int n = A.size();
        int pivot = -1;

        // Step 1: Find the pivot
        for(int i = n - 2; i >= 0; i--) {

            if(A[i] < A[i + 1]) {
                pivot = i;
                break;
            }
        }

        // If no pivot, array is in descending order
        if(pivot == -1) {
            reverse(A.begin(), A.end());
            return;
        }

        // Step 2: Find the next larger element
        for(int i = n - 1; i > pivot; i--) {

            if(A[i] > A[pivot]) {
                swap(A[i], A[pivot]);
                break;
            }
        }

        // Step 3: Reverse the suffix
        int i = pivot + 1;
        int j = n - 1;

        while(i <= j) {
            swap(A[i++], A[j--]);
        }
    }
};