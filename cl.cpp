#include<iostream>
using namespace std;
#include<vector>

class priorityqueue{

    vector<int> pq;

    public:
    priorityqueue(){

    }

    bool isEmpty(){
        return pq.size()==0;
    }

    int size(){
        if(pq.size()==0)
        {
            return 0;
        }
        return pq.size();
    }
    int getmin(){

        return pq[0];
    }
    

    void insert(int element){
        pq.push_back(element);

        int childidx = pq.size()-1;
         while(childidx > 0){
             int parentidx = (childidx - 1)/2;
             if(pq[childidx] < pq[parentidx]){
                 int temp = pq[childidx];
                 pq[childidx]= pq[parentidx];
                 pq[parentidx] = temp;

             }
             childidx = parentidx;
         }

    }
    int remmoveMin(){
        int ans = pq[0];
        pq[0] = pq[pq.size() -1];
        pq.pop_back();

        int parentIdx = 0;
        int lCi = 2*parentIdx +1;
        int rCi = 2*parentIdx +2;

        while(lCi < pq.size()){
            int minidx = parentIdx;
            if(pq[minidx] > pq[lCi]){
               minidx =lCi ;

            }
            
            if(pq[rCi] < pq[minidx] && rCi < pq.size() ){
                minidx= rCi;

                
            }
            if(minidx == parentIdx){
                break;
            }
            int temp =pq[minidx];
            pq[minidx ] = pq[parentIdx];
            pq[parentIdx] = temp;

            parentIdx = minidx;
            lCi = 2*parentIdx +1;
            rCi = 2*parentIdx +2;



        } 
         return ans;



        

        
    }

};


int main(){

    priorityqueue q;
    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.insert(40);
    q.insert(50);

    cout << q.size()<<endl;
    while(!q.isEmpty()){
        cout << q.remmoveMin()<<" ";
    }

}
    
    
   
    
    

  


    






    

 