#include<bits/stdc++.h>
using namespace std;

void explainVector(){

    // vector<int> v;
    // v.push_back(3);
    // v.emplace_back(5);
    // cout<<v[0]<<endl<<v[1]<<endl;
    // vector<pair<int ,int>> vec;
    // vec.push_back({3,4});
    // vec.emplace_back(6,7);
    // cout<<vec[0].first<<endl<<vec[1].second<<endl;

    // vector<int> ve(5,100);
    // vector<int> vect(5);
    // vector<int> v1(5,20);
    // vector<int> v2(v1);
    // vector<int> v={10,20,30,40,50};
    // vector<int>::iterator it=v.begin();
    // it++;
    // cout<<*it<<" ";
    // it=it+2;
    // cout<<*it<<" "<<endl;

    // vector<int>::iterator it=v.end();
    // vector<int>::iterator it=v.rend();
    // vector<int>::iterator it=v.rbegin();




    // for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<endl;
    // }

    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<endl;
    // }


    // v.erase(v.begin()+1);
    // v.erase(v.begin()+2,v.begin()+4);


    vector<int> v={300,400};
    v.insert(v.begin(),500);
    v.insert(v.begin()+1,2,10);
    

    vector<int> copy(2,1000);
    v.insert(v.begin(),copy.begin(),copy.end());

    for(auto it:v){
        cout<<it<<endl;
    }

    cout<<v.size()<<endl;

    v.pop_back();
    // v1.swap(v2);
    v.clear();
    v.empty();
}


void explainPair(){
    pair<int ,int> p={1,3};
    pair<int , pair<int ,int >> q={3,{4,5}};
    cout<<p.first<<endl;
    cout<<q.first<<"  "<<q.second.first<<" "<<q.second.second<<endl;
    pair<int,int> arr[]={{1,3},{2,4},{5,3}};
    cout<<arr[0].second<<endl;
}
int main (){
    cout<<"Alfed You have to learn this topic today \n";
    // explainPair();
    explainVector();
    return 0;
}
