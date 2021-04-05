
    #include<bits/stdc++.h>
    using namespace std;

    class queue
    {
        int front,rear;
        int size;
        int *arr;
        public:
        stack(int n)
        {
            size=n;
            front=rear=-1;
            arr=new int[n];
        }

        void push(int x)
        {
            if(front==size-1)
                cout<<"queue overflow";
                return;
            else
                if(front==-1)
                {
                    rear++;
                }
               arr[++front]=x;
        }
        int pop()
        {
            if(front==-1)
                cout<<"stack underflow";
                return;
            else 
            int x=arr[front--];
            return x;

        }
        void print()
        {
            for(int i=front;i>=rear;i--)
            cout<<arr[i]<<" ";
        }
    };

    int main()
    {
        queue st(5);
        st.push(10);
        st.push(20);
         st.push(30);
        st.push(40);
         st.push(50);
        st.push(60);

        cout<<endl<<"delete element="<<st.pop();
        st.print();

    }