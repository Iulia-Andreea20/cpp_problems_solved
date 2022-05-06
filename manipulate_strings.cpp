#include<iostream>
#include <algorithm>
#include<vector>
#include<cstring>
#include<string.h>

using namespace std;
//dubugging 
// int solution(vector<int>&A) {
//     int ans = 0;
    
//     for (size_t i = 0; i < A.size(); i++) {
//         ans += A[i];
//     }
//     return ans;
// }

// void return_day(string day, int counter)
// {
//     char Days[7][4] = {"Mon", "Tue", "Wen", "Thu", "Fri", "Sat", "Sun"};
//     int i, day_value; 
    
//     for(i = 0; i < 7; i++)
//     {
//         if(strcmp(day.c_str(), Days[i]) == 0)
//         {
//             day_value = i + 1;
//         }
//     }
    
//     if(counter > 7)
//     {
//         counter = counter % 7;
//     }
//     cout << Days[day_value + counter] << endl;
// }
void change_string_to_character(string& str)
{
    char plus[6] = "plus";
    char minus[7] = "minus";
    char str_c[30];
    strcpy(str_c, str.c_str());
    cout << str_c << endl;

}
int main()
{
    // vector <int> A;
    // A.push_back(1);
    // A.push_back(2);
    // A.push_back(3);
    // A.push_back(4);

    // cout << solution(A) << endl;

    // Mon Tue Wed Thu Fri Sat Sun
    //  1   2   3   4   5   6   7
    // counter = 10
    //day = Tue
    // return_day("Mon", 14);

    //change substring with math simbol
    string s = "minusplusminuminus";
    change_string_to_character(s);

    return 0;

}