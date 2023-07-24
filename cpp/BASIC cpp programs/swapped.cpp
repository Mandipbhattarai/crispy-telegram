/*
    Time complexity: O(1)
    Space complexity: O(1).
*/
#include <bits/stdc++.h>
#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
    
    /*
        Store the value of 'a' in 'temp'. 
        Considering 'a' as first value and 'b' as second value of pair.
    */
    int temp = swapValues.first;

    // Make 'a' equal to 'b'.
    swapValues.first = swapValues.second;

    // Make 'b' equal to 'temp'.
    swapValues.second = temp;

    return swapValues;
}