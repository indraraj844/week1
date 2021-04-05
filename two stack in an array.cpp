
    #include<bits/stdc++.h>
    using namespace std;

    class twoStack
    {
        int top1,top2;
        int size;
        int *arr;
        public:
        twoStack(int n)
        {
            size=n;
            top1=-1;
            top2=n;
            arr=new int[n];
        }

        void push1(int x)
        {
            if(top1==size/2)
                {cout<<"stack overflow";
                return;
                }
            else
               arr[++top1]=x;
        }
        void push2(int x)
        {
            if(top2==size/2)
                {cout<<"stack overflow";
                return;
                }
            else
               arr[--top2]=x;
        }
        int pop1()
        {
            if(top1==-1)
                {cout<<"stack underflow";
                return -1;}
            else
            {int x=arr[top1--];
            return x;
            }
        }
        int pop2()
        {
            if(top2==size)
                {cout<<"stack underflow";
                return -1;}
            else
            {int x=arr[top2++];
            return x;
            }
        }
        
    };

    int main()
    {
        twoStack st(6);
        st.push1(10);
        st.push1(20);
         st.push1(30);
        st.push2(40);
         st.push2(50);
        st.push2(60);

        cout<<endl<<"delete element from stack 1="<<st.pop1();
         cout<<endl<<"delete element from stack 2="<<st.pop2();
        return 0;

    }