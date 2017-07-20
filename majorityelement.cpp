// Majority element in an array using Hash Map
/*Corner Case:
No majority element
Will not work when the element is outside array range*/

# include<iostream>

using namespace std;

# define RE(i,n) for(int i=0;i<n;i++)
# define MAX 100000

void findMajorityElement(int a[], int n){

    int m[MAX]={0};

    RE(i,n){
        m[a[i]]++;}

    RE(i,n){
        if(m[a[i]]>n/2){
               cout<<"Majority Element is "<<a[i]<<endl;
               return;
        }
    }

    cout<<"No majority element"<<endl;
}

int main(){
    int a[MAX];
    int n; // no. of elements
    cin>>n;

    RE(i,n){
        cin>>a[i];
    }

    findMajorityElement(a,n);

    return 0;
}
