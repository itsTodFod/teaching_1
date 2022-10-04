#include<bits/stdc++.h>
using namespace std;

class Queue{
     public:
    //  properties

        int * arr;
        int qfront;
        int qrear;
        int size;

    // constructor
        
        Queue(int size){
            
            this -> size = size;
            arr = new int[size];
            qfront = 0;
            qrear = 0;

        }

    // methods

        void Empty(){
            if(qfront == qrear){
            
                cout<<"Queue is empty"<<endl;
            }

            else {
                cout <<"Queue is not empty"<<endl;
            }
        }

        void enque(int value){
            if(qrear == size){
                cout<<"Queue is full, can't insert"<<endl;
            }

            else{
                arr[qrear] = value;
                qrear++;
            }
        }

        int deque()
        {
            if(qfront == qrear)
            {
                cout<<" Queue is empty, can't remove"<<endl;
                return -1;
            }
            
            else{
                
                int ans = arr[qfront];
                arr[qfront] = -1;
                qfront++;
                
                if(qfront == qrear)
                {
                    qfront = 0;
                    qrear = 0;
                }
                return ans;
            }
            
        }

        int front(){
            return arr[qfront];
        }

        int rear(){
            return arr[qrear];
        }

};

int main()
{   
    Queue Q(5);
    
    Q.enque(1);
    Q.enque(2);
    Q.enque(3);
    Q.enque(4);
    Q.enque(5);
    
    cout<< Q.deque() << endl;
    cout<< Q.front() << endl;

    Q.enque(6);
    cout<<Q.qrear<<endl;
    return 0;
}
