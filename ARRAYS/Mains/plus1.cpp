
public:
    vector<int> plusOne(vector<int>& d) {
        for(int i=d.size()-1;i>=0;i--){
            if(d[i]<9){
                d[i]++;
                return d;
            }
            else{
                d[i]=0;
            }
        }
        d.push_back(0);  // for only 9ss case;;
        d[0]=1;
        return d;
    }