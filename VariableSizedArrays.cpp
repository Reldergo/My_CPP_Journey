#include <vector>
#include <iostream>
#include <algorithm>

int main(){

    int n, q;

    std::vector<std::vector<int>> main_arr;

    std::cin >> n >> q;

    for(int i = 0; i < n; i++){

        int s;

        std::cin >> s;

        std::vector <int> arr (s);

        for(int j = 0; j < s; j++){

            std::cin >> arr[j];

        }

        main_arr.push_back(arr);

    }

    for(int f = 0; f < q; f++){

        int num, index;

        std::cin >> num >> index;

        std::cout << main_arr[num][index] << std::endl;


    }

    return 0;

}
