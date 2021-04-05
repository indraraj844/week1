
    #include<bits/stdc++.h>
    using namespace std;

    void selectionSort(int arr[],int n)
    {
        for(int i=0;i<n-1;i++)
        {
            //we will get the minimum element in rest array
            int min=i;
            for(int j=i;j<n;j++)
            {
                if(arr[min]>arr[j])
                min=j;
            }
            if(min !=i)
            {
              swap(arr[i],arr[min]);
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }

    int main()
    {
        int arr[6] ={6,2,13,5,3,8};
        int n=6;

        selectionSort(arr,n);
        return 0;
    }