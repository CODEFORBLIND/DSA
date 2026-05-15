// Stock Buy And Sell

// Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Examples
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note: That buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.

#include<bits/stdc++.h>
using namespace std;

void maxProfit(int arr[], int n){
    // Case 1 : Descending order arranged stock prices
    int counter = 1;
    for (int i = 0; i <= n-2; i++)
    {
        if(arr[i] > arr[i+1]){
            counter++;
        } else { 
            break;
        }
    }
    if(counter == n){
        cout << "Max Profit: 0 as stocks present in descending order" << endl;
        return;
    }

    counter = 1;

    // Case 2 : Ascending order arranged stock prices
    for (int i = 0; i <= n-2; i++)
    {
        if(arr[i] < arr[i+1]){
            counter++;
        } else { 
            break;
        }
    }

    if(counter == n){
        int max_profit = arr[n-1] - arr[0];
        cout << "Max Profit(prices present in ascending order): " << max_profit << endl;
        return;
    }

    // Case 3 : Random price distribution
    int min = arr[0];
    int save_index = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] < min){
            min = arr[i];
            save_index = i;
        }
    }
    cout << "Min stock price found to buy: " << min << endl;

    int max_sell = 0;
    for (int i = save_index + 1; i < n; i++)
    {
        if(arr[i] > max_sell){
            max_sell = arr[i];
        }
    }
    cout << "Max stock price found to sell: " << max_sell << endl;

    int profit_max = max_sell - min;

    cout << "Max Profit: " << profit_max << endl;
    return;
}

int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(int);
    maxProfit(arr, n);
return 0;
}