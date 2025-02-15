#include<bits/stdc++.h>
using namespace std;

//Pairs
void explainPair(){
    pair<int,int> p={1,3};
    cout<<p.first<<"\t"<<p.second<<endl;

    pair <int , pair<int, int>> pp={1,{2,5}};
    cout<<pp.first<<"\t"<<pp.second.second<<endl;

    pair<char,char> arr[]={{'a','s'},{'s','t'}};
    cout<<arr[0].second;
}

//Vectors
void explainVector(){
    // vector<int> v;
    // v.push_back(3);
    // v.emplace_back(5);
    
    // vector <pair<int,int>> vec;
    // vec.push_back({35,63});
    // vec.emplace_back(87,75);

    // vector <int> vect(5,100);
    // vector<int> vector1(5);
    // vector <int> v1(5,30);
    // vector<int> v2(v1);

    // cout<<v1[3]<<"\n"<<v1.at(3);
    
    // vector<int>::iterator it=v.begin();
    // it++;
    // cout<<*(it);

    // it+=2;
    // cout<<*(it);

    // vector<int>::iterator it1=v.end();
    // vector<int>::iterator it2=v.rend();
    // vector<int>::iterator it3=v.rbegin();

    // cout<<v.back();

    // vector<int> v={34,545,7,33,5};
    // for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    //  cout<<*(it)<<"\t";
    // }
    // cout<<endl;

    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<"\t";
    // }
    // cout<<endl;

    // for(auto it:v){
    //     cout<<it<<"\t";
    // }

    //erase also known as delete

    // v.erase(v.begin()+1);
    
    // v.erase(v.begin()+2,v.begin()+4);

    // vector<int> v4(5,100);
    // v4.insert(v4.begin(),300);
    // v4.insert(v4.begin()+1,2,2200);

    // vector<int> copy(2,50);
    // v4.insert(v4.begin(),copy.begin(),copy.end());
    // cout<<endl;
    // for(auto it:v4){
        // cout<<it<<"\t";
    // }
    
    vector<int> v(5,10);
    cout<<v.size()<<endl;
    cout<<v[2]<<endl;
    v.pop_back();
    // v.swap(v);
    v.clear();//erases the entire vector
    cout<<v.empty();
    


}


int main (){
//    explainPair();
   explainVector();

    return 0;
}