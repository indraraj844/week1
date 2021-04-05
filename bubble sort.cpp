
    #include<bits/stdc++.h>
    using namespace std;

    void bublesort(int arr[],int n)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    int main()
    {
        int arr[6] ={6,2,13,5,3,8};
        int n=6;

        bublesort(arr,n);
        return 0;
    }