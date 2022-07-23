vector<int> Solution::maxset(vector<int> &A) {
    long long int temp=0,temproot=0;
    vector<int> vec, vecroot;

    assert(A.size()>=1 && A.size()<=100000);
    for(int i=0; i<A.size(); i++)
    {   
        assert(A[i]>=-1000000000 && A[i]<=1000000000);
        if(A[i]>=0) {cerr<<"was2here ";vec.push_back(A[i]);temp+=A[i];}
        if(A[i]<0 || i==A.size()-1)
        {
            if(temproot<temp) {vecroot=vec;cerr<<"washere ";temproot=temp;}
            else if(temproot==temp)
            {if(vecroot.size()<vec.size()) 
            {vecroot=vec;temproot=temp;}}
            vec.clear();
            temp=0;
        }
    }
    return vecroot;
}
