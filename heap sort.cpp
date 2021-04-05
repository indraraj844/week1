
    #include<bits/stdc++.h>
    using namespace std;

    void swap(int &a,int &b)
    {
      int temp=a;
      a=b;
      b=temp;
    }

    void heapify(int arr[],int n,int i)
    {
        int largerst=i;
        int left=2*i+1;
        int right=2*i+2;

        if(left<n && arr[left]>arr[largerst])
        largerst=left;

        if(right<n && arr[right]>arr[largerst])
        largerst=right;

        if(i!=largerst)
        {
            swap(arr[i],arr[largerst]);
            heapify(arr,n,largerst);
        }

    }

    void heapSort(int arr[],int n)
    {
        for(int i=n/2 -1;i>=0;i--)
        {
          heapify(arr,n,i);
        }
        for(int i=n-1;i>=0;i--)
        {
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
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

        heapSort(arr,n);
        return 0;
    }