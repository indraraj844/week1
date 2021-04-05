
    #include<bits/stdc++.h>
    using namespace std;

    void swap(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }

    int partition(int arr[],int n,int low,int high)
    {
        int pivot=arr[high];
        int i=low-1;
        for(int j=low;j<high;j++)
        {
            if(pivot>arr[j])
            {
                i++;
                swap(&arr[i],&arr[j]);
            }

        }
        swap(&arr[i+1],&arr[high]);
        return i+1;
    }

    void quickSort(int arr[],int n,int low,int high)
    {
        if(low>high)return;
        int pi=partition(arr,n,low,high);
        quickSort(arr,n,low,pi-1);
        quickSort(arr,n,pi+1,high);
    }

    void print(int arr[],int n)
    {
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

        quickSort(arr,n,0,n-1);
        print(arr,n);
        return 0;
    }