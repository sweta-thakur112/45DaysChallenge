 public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    int i=0;
    int j=m-1;
    
    sort(a.begin(),a.end());
     long long mi=a[j]-a[0];
    while(j!=a.size())
    {
       mi=min(mi,a[j]-a[i]);
       j++;
       i++;
    }
    return mi;
    }   
