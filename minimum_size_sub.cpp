#include <iostream>


int n[] = {2,3,1,2,4,3};
int s =  7;


int main() {

    int dim = (sizeof(n) / sizeof(*n));

    int left = 0;
    int right = 0;
    int total = 0;

    int max = 100000;

        while (right < dim) {

            total += n[right];

                while(total >= s) {
                    if (max > (right - left+1)) max = (right - left+1);
                        total -= n[left];
                        left++;

                }
            right++;
        }

    std::cout << max << "\n";




}