/*

https://www.interviewbit.com/problems/wave-array/


Given an array of integers, sort the array into a wave like array and return it,
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....

Example

Given [1, 2, 3, 4]

One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]

    NOTE : If there are multiple answers possible, return the one thats lexicographically smallest.
    So, in example case, you will return [2, 1, 4, 3
    
 */


# 1st method

vector<int> Solution::wave(vector<int> &A) 
{
    bool flg = true;
    
    for(auto i=0; i<A.size()-1; i++)
    {
        if(!flg) // <= relation
        {
            if(A[i] >= A[i+1])
                swap(A[i], A[i+1]);
        }
        else 
        {
            if(A[i] <= A[i+1])
                swap(A[i], A[i+1]);
        }
        flg = !flg;
    }
    
    return A;
}


# 2nd method

vector<int> Solution::wave(vector<int> &A) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    std::sort(A.begin(), A.end());
    
    for(auto i=0; i<A.size()-1; i+=2)
    {
        swap(A[i], A[i+1]);
    }
    
    return A;
}

