#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    int t1=0,t2=0,t3=0,t4=0,t5=0;
     for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i =0;i<n;i++)
    { if(A[i]==1)
        t1=t1+1;
      else if(A[i]==2)
        t2=t2+1;
      else if(A[i]==3)
        t3=t3+1;
      else if(A[i]==4)
        t4=t4+1;
      else if (A[i]==5)
        t5=t5+1;
    }
    if(t1>=t2 && t1>=t3 && t1>=t4 && t1>=t5)
        cout<<"1";
  else if(t2>t1 && t2>=t3 && t2>=t4 && t2>=t5)
    cout<<"2";
  else if(t3>t1 && t3>t2 && t3>=t4 && t3>=t5)
  cout<<"3";
    else if(t4>t1 && t4>t2 && t4>t3 && t4>=t5)
    cout<<"4";
    else if(t5>t1 && t5>t2 && t5>t3 && t5>t4)
    cout<<"5";
}
