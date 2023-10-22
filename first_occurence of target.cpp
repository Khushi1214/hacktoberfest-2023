#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int target)
{
    int s=0,n=-1;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        int element=arr[mid];
        if(target==element)
        {
            n=mid;
            e=mid-1;
        }
        else if(target<element)
        {
            e=mid-1;
        }
        else if(target>element)
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return n;

}

int main()
{
    int arr[]={1,2,4,4,4,4,4,4,4,8,8,8,22};
    int size=13;
    int target=8;
    int index=firstocc( arr, size, target);
    if(index==-1)
    {
        cout<<"target not present";
    }
    else{
        cout<<" first occurence of target is at index"<<" "<<index;
    }
    return 0;
}
