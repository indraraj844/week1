
    #include<bits/stdc++.h>
    using namespace std;

    void mising_element(int arr[],int n,int low,int high)
    {
        unordered_set<int> s;

        for(int i=0;i<n;i++)
        s.insert(arr[i]);

        for(int i=low;i<high+1;i++)
        {
            if(s.find(i)==s.end())
            cout<<i<<" ";
        }
    }

    int main()
    {
        int arr[6]={2,3,5,7,8,9};
        int n=6;
        int low=1,high=10;
        mising_element(arr,n,low,high);
        return 0;
    }