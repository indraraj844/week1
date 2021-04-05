
    #include<bits/stdc++.h>
    using namespace std;

    void merge(int arr[],int low,int mid,int high)
    {
        int n1=mid-low+1;
        int n2=high-mid;
        int l[n1],r[n2];

        for(int i=0;i<n1;i++)
        l[i]=arr[low+i];
        for(int i=0;i<n2;i++)
        r[i]=arr[mid+1+i];

        int i=0,j=0,k=low;
        while(i<n1 && j<n2)
        {
            if(l[i]>=r[j])
            {arr[k]=r[j];
            j++;}
            else
            {
            arr[k]=l[i];
            i++;
        }
        k++;
        }
        while(i<n1)
        {
            arr[k]=l[i];
            k++;
            i++;
        }
        while(j<n2)
        {
            arr[k]=r[j];
            k++;
            j++;
        }

    }

    void mergeSort(int arr[],int low,int high)
    {
        if(low>=high)
        {
            return;
        }
        else
        {
        int mid=low+ (high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
}
    }

    void print(int arr[],int n)
    {
        for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
    }

    int main()
    {
        int arr[6] ={6,2,13,5,3,8};
        int n=6;

        mergeSort(arr,0,n-1);
        print(arr,n);
        return 0;
    }